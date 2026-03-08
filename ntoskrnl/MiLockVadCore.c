/*
 * XREFs of MiLockVadCore @ 0x140330E20
 * Callers:
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiSetVadFlags @ 0x140330D00 (MiSetVadFlags.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockVadCore(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  _DWORD *SchedulerAssist; // r8
  __int64 v7; // r9
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v3 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( (v3 & 1) != 0 )
    {
      if ( (v3 & 2) != 0 )
      {
        v8 = 0;
        do
        {
          KeYieldProcessorEx(&v8);
          v3 = *(_DWORD *)(a1 + 48);
        }
        while ( (v3 & 1) != 0 );
      }
      else
      {
        v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v3 | 2, v3);
      }
    }
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v3 & 0xFFFFFFFC | 1, v3);
  }
  while ( v4 != v3 );
  return CurrentIrql;
}
