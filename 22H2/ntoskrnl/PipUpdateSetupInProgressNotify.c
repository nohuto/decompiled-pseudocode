/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x140952178
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x140952160 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041CAC0 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x140862910 (PipUpdateSetupInProgress.c)
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
