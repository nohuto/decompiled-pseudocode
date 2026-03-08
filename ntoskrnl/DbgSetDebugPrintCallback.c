/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1405A53E0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140786150 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1407864C4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1405A5444 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405A55A8 (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
