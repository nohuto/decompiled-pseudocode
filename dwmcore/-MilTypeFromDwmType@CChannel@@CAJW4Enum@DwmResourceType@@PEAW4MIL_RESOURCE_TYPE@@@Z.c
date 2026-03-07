__int64 __fastcall CChannel::MilTypeFromDwmType(unsigned int a1, _DWORD *a2)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 >= 0x2C )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD10,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL,
      v3);
    return 2147942487LL;
  }
  else
  {
    *a2 = dword_180375020[a1];
    return 0LL;
  }
}
