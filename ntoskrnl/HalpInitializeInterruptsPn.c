/*
 * XREFs of HalpInitializeInterruptsPn @ 0x140379DFC
 * Callers:
 *     HalpInterruptInitSystem @ 0x140A86CD0 (HalpInterruptInitSystem.c)
 * Callees:
 *     HalpInterruptReinitializeThisProcessor @ 0x140377F50 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptInitializeIpis @ 0x14037B310 (HalpInterruptInitializeIpis.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInitializeInterruptsPn(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r9d
  int v5; // r9d
  int v6; // r9d
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  __int64 result; // rax

  *(_QWORD *)(HalpInterruptProcessorPcr + 8LL * KeGetPcr()->Prcb.Number) = KeGetPcr();
  HalpInterruptSetIdtEntry(53, (unsigned int)HalpInterruptDeferredErrorService, 5, a4, -1LL);
  HalpInterruptSetIdtEntry(54, (unsigned int)HalpInterruptDeferredErrorService, 5, v4, -1LL);
  HalpInterruptSetIdtEntry(223, (unsigned int)HalpInterruptSpuriousService, 15, v5, -2LL);
  HalpInterruptSetIdtEntry(216, (unsigned int)HalpInterruptStubService, 15, v6, -1LL);
  HalpInterruptSetIdtEntry(215, (unsigned int)HalpInterruptRebootService, 15, v7, -1LL);
  HalpInterruptSetIdtEntry(226, (unsigned int)HalpInterruptLocalErrorService, 15, v8, -1LL);
  HalpInterruptSetIdtEntry(254, (unsigned int)HalpPerfInterrupt, 15, v9, -3LL);
  HalpInterruptSetIdtEntry(227, (unsigned int)HalpInterruptDeferredRecoveryService, 14, v10, -1LL);
  HalpInterruptReinitializeThisProcessor();
  result = HalpInterruptInitializeIpis();
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 1uLL, (int)result);
  return result;
}
