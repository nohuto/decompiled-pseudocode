/*
 * XREFs of ZwFlushKey @ 0x1403FC2C0
 * Callers:
 *     VfClearVerifierSettings @ 0x1405A0510 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x1405B276C (ExpRecordShutdownTime.c)
 *     BcdFlushStore @ 0x14077A454 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1407AACB0 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x140998CEC (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
