/*
 * XREFs of MiCommitRequestFailed @ 0x140A40C84
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeRequestTerminationProcess @ 0x140971344 (KeRequestTerminationProcess.c)
 *     MiLogCommitRequestFailed @ 0x140A40CE4 (MiLogCommitRequestFailed.c)
 */

void __fastcall MiCommitRequestFailed(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  MiLogCommitRequestFailed(a1, a3, a4);
  if ( CurrentThread->ApcStateIndex != 1
    && (CurrentThread->MiscFlags & 0x400) == 0
    && (*(_DWORD *)(a1 + 1124) & 0x100) != 0 )
  {
    KeRequestTerminationProcess((__int64)CurrentThread, 1);
  }
}
