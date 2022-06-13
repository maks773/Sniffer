#pragma pack(push, 1)
typedef struct //��������� ip ������
{
	BYTE   ip_ver_hlen;            // ������ ��������� � ����� ��������� (4 + 4 ����)
	BYTE   ip_tos;                 // ��� �������
	UINT16 ip_length;              // ����� ����� ������ � ������
	UINT16 ip_id;                  // ������������� ������
	UINT16 ip_flag_offset;         // ����� � �������� ���������(3 + 13 ���)
	BYTE   ip_ttl;                 // TTL
	BYTE   ip_protocol;            // �������� �������� ������
	UINT16 ip_crc;                 // ����������� �����
	UINT32 ip_src_addr;            // ip-����� ���������
	UINT32 ip_dst_addr;            // ip-����� ����������
} IPHeader;

typedef struct // ��������� TCP ���������
{
	UINT16 tcp_srcport;            // ���� ���������
	UINT16 tcp_dstport;            // ���� �����������
	UINT32 tcp_seq;                // ���������� �����
	UINT32 tcp_ack;                // ����� �������������
	UINT16 tcp_hlen_flags;         // ����� ���������, ������ � ����� (4 + 6 + 6 ���)
	UINT16 tcp_window;             // ������ ����
	UINT16 tcp_crc;                // ����������� �����
	UINT16 tcp_urg_pointer;        // ��������� ���������
} TCPHeader;

typedef struct // ��������� UDP ���������
{
	UINT16 udp_srcport;            // ���� ���������
	UINT16 udp_dstport;            // ���� �����������
	UINT16 udp_length;             // ����� ����� ������ � ������
	UINT16 udp_xsum;               // ����������� �����
} UDPHeader;
#pragma pack(pop)
