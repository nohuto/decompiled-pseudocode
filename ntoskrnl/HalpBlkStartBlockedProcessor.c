/*
 * XREFs of HalpBlkStartBlockedProcessor @ 0x140A9564C
 * Callers:
 *     HalpInterruptStartBlockedProcessors @ 0x1405185E4 (HalpInterruptStartBlockedProcessors.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpInterruptStartProcessor @ 0x140A86180 (HalpInterruptStartProcessor.c)
 *     HalpBlkInitializeProcessorState @ 0x140A9544C (HalpBlkInitializeProcessorState.c)
 */

__int64 __fastcall HalpBlkStartBlockedProcessor(int a1, unsigned int a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  unsigned __int64 v7[185]; // [rsp+30h] [rbp-5C8h] BYREF

  v2 = a2;
  memset(v7, 0, 0x5C0uLL);
  if ( a1 == HalpInterruptFirstBlockedProcessorIndex )
    LODWORD(HalpBlkNumberProcessors) = 0;
  HalpBlkInitializeProcessorState(v7, *(char **)(HalpBlkPcr + 8LL * (unsigned int)HalpBlkNumberProcessors), v4, v5, v2);
  result = HalpInterruptStartProcessor(0xFFFFFFFF, v2, 4, v7);
  if ( (_DWORD)result != 4 )
    KeBugCheckEx(0x1DAu, 2uLL, (unsigned int)HalpBlkNumberProcessors, v2, 0LL);
  LODWORD(HalpBlkNumberProcessors) = HalpBlkNumberProcessors + 1;
  return result;
}
