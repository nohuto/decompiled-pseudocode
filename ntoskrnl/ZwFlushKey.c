/*
 * XREFs of ZwFlushKey @ 0x140414110
 * Callers:
 *     VfClearVerifierSettings @ 0x1405CB9FC (VfClearVerifierSettings.c)
 *     DifZwFlushKeyWrapper @ 0x1405EE2A0 (DifZwFlushKeyWrapper.c)
 *     ExpRecordShutdownTime @ 0x140603D68 (ExpRecordShutdownTime.c)
 *     CmpInterlockedFunction @ 0x140816A24 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     BcdFlushStore @ 0x140A595E4 (BcdFlushStore.c)
 *     PopFlushVolumes @ 0x140AA3378 (PopFlushVolumes.c)
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
