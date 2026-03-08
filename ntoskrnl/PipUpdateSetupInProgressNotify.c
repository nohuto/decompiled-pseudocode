/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x14094F158
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x14094F140 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x140414730 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x14085E948 (PipUpdateSetupInProgress.c)
 */

void __fastcall PipUpdateSetupInProgressNotify(HANDLE KeyHandle, char a2)
{
  HANDLE v4; // rbx

  if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
  {
    v4 = 0LL;
    if ( ZwNotifyChangeKey(KeyHandle, 0LL, PnpSetupWorkItem, (PVOID)1, &PnpSetupIoStatusBlock, 4u, 0, 0LL, 0, 1u) < 0 )
      v4 = KeyHandle;
    if ( a2 )
      PipUpdateSetupInProgress(KeyHandle);
    if ( v4 )
      ZwClose(v4);
  }
}
