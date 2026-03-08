/*
 * XREFs of HalpDmaProcessMapRegisterQueueV2 @ 0x1404551EE
 * Callers:
 *     IoFreeMapRegistersV2 @ 0x1404554C0 (IoFreeMapRegistersV2.c)
 *     HalpGrowMapBufferWorker @ 0x1404FF9C0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045399E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaDequeueAdapter @ 0x140453D90 (HalpDmaDequeueAdapter.c)
 *     HalpDmaFreeMapRegisters @ 0x140453EF6 (HalpDmaFreeMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x1404552D0 (IoFreeAdapterChannelV2.c)
 *     HalpQueueMapBufferWorker @ 0x140503034 (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x14050EF68 (HalpDmaQueueAdapter.c)
 */

__int64 *__fastcall HalpDmaProcessMapRegisterQueueV2(__int64 a1, char a2)
{
  __int64 *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 MapRegisters; // rax
  int v8; // eax
  unsigned int v9; // r8d

  while ( 1 )
  {
    result = HalpDmaDequeueAdapter(a1, a2);
    v5 = (__int64)result;
    if ( !result )
      return result;
    v6 = result[44];
    MapRegisters = HalpDmaAllocateMapRegisters((__int64)result, *((_DWORD *)result + 62));
    *(_QWORD *)(v5 + 240) = MapRegisters;
    if ( !MapRegisters )
    {
      HalpDmaQueueAdapter(v5);
      return (__int64 *)HalpQueueMapBufferWorker(v5, *(unsigned int *)(v5 + 248));
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(v6 + 24))(
           *(_QWORD *)(v6 + 48),
           *(_QWORD *)(v6 + 56),
           MapRegisters,
           *(_QWORD *)(v6 + 32));
    if ( v8 == 3 )
      goto LABEL_7;
    v9 = *(_DWORD *)(v5 + 248);
    if ( v8 == 2 )
    {
      if ( !v9 )
        goto LABEL_8;
      HalpDmaFreeMapRegisters(v5, *(_QWORD **)(v5 + 240), v9);
LABEL_7:
      *(_DWORD *)(v5 + 248) = 0;
LABEL_8:
      IoFreeAdapterChannelV2(v5);
    }
  }
}
