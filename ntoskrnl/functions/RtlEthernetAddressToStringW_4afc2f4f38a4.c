PWSTR __stdcall RtlEthernetAddressToStringW(const DL_EUI48 *Addr, PWSTR S)
{
  int v3; // [rsp+20h] [rbp-38h]
  int v4; // [rsp+28h] [rbp-30h]
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+40h] [rbp-18h]

  v7 = Addr->Byte[5];
  v6 = Addr->Byte[4];
  v5 = Addr->Byte[3];
  v4 = Addr->Byte[2];
  v3 = Addr->Byte[1];
  return &S[swprintf_s(S, 0x12uLL, L"%02X-%02X-%02X-%02X-%02X-%02X", Addr->Byte[0], v3, v4, v5, v6, v7)];
}
