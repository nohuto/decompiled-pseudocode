PWSTR __stdcall RtlIpv4AddressToStringW(const struct in_addr *Addr, PWSTR S)
{
  int s_b2; // [rsp+20h] [rbp-28h]
  int s_b3; // [rsp+28h] [rbp-20h]
  int s_b4; // [rsp+30h] [rbp-18h]

  s_b4 = Addr->S_un.S_un_b.s_b4;
  s_b3 = Addr->S_un.S_un_b.s_b3;
  s_b2 = Addr->S_un.S_un_b.s_b2;
  return &S[swprintf_s(S, 0x10uLL, L"%u.%u.%u.%u", (unsigned __int8)Addr->S_un.S_addr, s_b2, s_b3, s_b4)];
}
