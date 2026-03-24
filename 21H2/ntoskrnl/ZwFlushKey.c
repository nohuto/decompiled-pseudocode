/*
 * XREFs of ZwFlushKey @ 0x1403FC0E0
 * Callers:
 *     VfClearVerifierSettings @ 0x1405A02E0 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x1405B253C (ExpRecordShutdownTime.c)
 *     BcdFlushStore @ 0x14077A294 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1407AAAB0 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140925900 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x140997CEC (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1);
}
