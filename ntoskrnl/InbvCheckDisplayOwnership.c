/*
 * XREFs of InbvCheckDisplayOwnership @ 0x14054C130
 * Callers:
 *     HalpCheckPowerButton @ 0x140409BC0 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x140504A30 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x14054C410 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6A7D0 && (v0 = *(__int64 (**)(void))(qword_140C6A7D0 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
