char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  bool v4; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)BgkpAcquireConsole() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(23LL, (__int64)a1, 2 * v3 + 2, 0LL, 0LL);
  if ( byte_140C6A809 || byte_140C6A7F0 )
  {
    byte_140C6A809 = 0;
    byte_140C6A7F0 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140C6A7E8 + 24))(a1) >= 0;
  ExReleaseRundownProtection_0(&stru_140C0BC48);
  return v4;
}
