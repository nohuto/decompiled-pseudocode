/*
 * XREFs of BgkDisplayStringEx @ 0x1404FF424
 * Callers:
 *     BgkDisplayString @ 0x1404FF370 (BgkDisplayString.c)
 *     NtDisplayString @ 0x14094C4D0 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     HeadlessDispatch @ 0x1403AA580 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FF608 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x1409F161C (BgDisplayFade.c)
 */

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
  if ( byte_140C50745 || byte_140C50744 )
  {
    byte_140C50745 = 0;
    byte_140C50744 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140C50B90 + 24))(a1) >= 0;
  ExReleaseRundownProtection(&stru_140C113B8);
  return v4;
}
