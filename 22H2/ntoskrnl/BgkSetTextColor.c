/*
 * XREFs of BgkSetTextColor @ 0x1404FF540
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FF608 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140C50B90 + 16))((char *)Palette + 4 * v1, 0LL);
    ExReleaseRundownProtection(&stru_140C113B8);
  }
  return 0LL;
}
