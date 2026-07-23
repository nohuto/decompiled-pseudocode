/*
 * XREFs of ZwFlushKey @ 0x1403FB760
 * Callers:
 *     VfClearVerifierSettings @ 0x1405A0220 (VfClearVerifierSettings.c)
 *     ExpRecordShutdownTime @ 0x1405B247C (ExpRecordShutdownTime.c)
 *     BcdFlushStore @ 0x14077A194 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x1407AAEE0 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140925950 (SepAuditFailed.c)
 *     PopFlushVolumes @ 0x140997CDC (PopFlushVolumes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
