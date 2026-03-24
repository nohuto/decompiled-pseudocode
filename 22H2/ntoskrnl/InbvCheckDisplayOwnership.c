/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1404FEBB0
 * Callers:
 *     HalpCheckPowerButton @ 0x1403EF7B0 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404BE190 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FEE90 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50B78 && (v0 = *(__int64 (**)(void))(qword_140C50B78 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
