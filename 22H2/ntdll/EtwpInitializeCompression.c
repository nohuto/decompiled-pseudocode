/*
 * XREFs of EtwpInitializeCompression @ 0x180088038
 * Callers:
 *     EtwpStartUmLogger @ 0x1800482B0 (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x180081280 (RtlGetCompressionWorkSpaceSize.c)
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall EtwpInitializeCompression(__int64 a1)
{
  __int64 Heap; // rax
  int v3; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h]
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  RtlGetCompressionWorkSpaceSize(3LL);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  *(_QWORD *)(a1 + 432) = Heap;
  if ( !Heap )
    return 3221225495LL;
  v3 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 448) = 2 * v3;
  v6 = (unsigned int)(2 * v3);
  return ZwAllocateVirtualMemory(-1LL, a1 + 440, 0LL, &v6, 4096, 4);
}
