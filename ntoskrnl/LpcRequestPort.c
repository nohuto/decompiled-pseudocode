/*
 * XREFs of LpcRequestPort @ 0x1407DA880
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
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
