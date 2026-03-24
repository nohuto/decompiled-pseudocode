/*
 * XREFs of InbvGetDisplayState @ 0x1404FEC0C
 * Callers:
 *     FinalizeBootLogo @ 0x1404FEE3C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FEE90 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1404FEFEC (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50B78 && (v0 = *(__int64 (**)(void))(qword_140C50B78 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
