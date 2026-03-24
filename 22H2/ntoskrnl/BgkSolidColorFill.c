/*
 * XREFs of BgkSolidColorFill @ 0x1404FF590
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FF608 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_140C50B90 + 16))(0LL, (char *)Palette + 4 * a5);
      (*(void (**)(void))(qword_140C50B90 + 8))();
      ExReleaseRundownProtection(&stru_140C113B8);
    }
  }
}
