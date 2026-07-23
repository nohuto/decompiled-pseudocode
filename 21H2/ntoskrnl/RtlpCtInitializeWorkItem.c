/*
 * XREFs of RtlpCtInitializeWorkItem @ 0x140919768
 * Callers:
 *     RtlpCtContextInit @ 0x140919638 (RtlpCtContextInit.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpCtInitializeWorkItem(_QWORD *a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x67744364u);
  *a1 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[2] = RtlpRtlpCtWaitForWnfQuiescentWorker;
  PoolWithTag[3] = a2;
  return 0LL;
}
