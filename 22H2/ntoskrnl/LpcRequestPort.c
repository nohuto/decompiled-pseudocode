/*
 * XREFs of LpcRequestPort @ 0x14076F070
 * Callers:
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140435400 (memset.c)
 *     AlpcpSendMessage @ 0x1407395B0 (AlpcpSendMessage.c)
 */

__int64 __fastcall LpcRequestPort(__int64 a1, __m256i *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD v6[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(v6, 0, 0x40uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6[0] = a1;
  LODWORD(v6[6]) = 65538;
  LODWORD(a1) = AlpcpSendMessage((__int64)v6, a2, 0LL, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)a1;
}
