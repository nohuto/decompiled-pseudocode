/*
 * XREFs of VfKeCheckForChanges @ 0x1409DCCF8
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1409E147C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall VfKeCheckForChanges(__int16 a1)
{
  SIZE_T v2; // rsi
  PVOID PoolWithTagPriority; // rax
  void *v4; // rdi
  SIZE_T v5; // rdi
  PVOID v6; // rax
  void *v7; // rbx

  if ( (MmVerifierData & 0xFBF) != 0 )
  {
    if ( !ViTrackIrqlQueue && ((a1 & 2) != 0 || VfVerifyMode >= 3) )
    {
      v2 = 56LL * (unsigned int)ViTrackIrqlQueueLength;
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(NonPagedPoolNx, v2, 0x6C717249u, HighPoolPriority);
      v4 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        memset(PoolWithTagPriority, 0, v2);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ViTrackIrqlQueue, (signed __int64)v4, 0LL) )
          ExFreePoolWithTag(v4, 0);
      }
    }
    if ( !VfKeCriticalRegionTraces && (a1 & 0x800) != 0 )
    {
      v5 = (unsigned __int64)(unsigned int)VfKeCriticalRegionTracesLength << 6;
      v6 = ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             v5,
             0x52436656u,
             (EX_POOL_PRIORITY)(VfKeCriticalRegionTraces + 32));
      v7 = v6;
      if ( v6 )
      {
        memset(v6, 0, v5);
        if ( _InterlockedCompareExchange64(&VfKeCriticalRegionTraces, (signed __int64)v7, 0LL) )
          ExFreePoolWithTag(v7, 0);
      }
    }
  }
}
