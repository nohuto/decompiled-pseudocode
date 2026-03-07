__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140C6A7E8 + 16))((char *)Palette + 4 * v1, 0LL);
    ExReleaseRundownProtection_0(&stru_140C0BC48);
  }
  return 0LL;
}
