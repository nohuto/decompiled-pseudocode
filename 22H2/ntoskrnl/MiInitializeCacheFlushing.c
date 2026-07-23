/*
 * XREFs of MiInitializeCacheFlushing @ 0x140A54B0C
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiFlushCacheForAttributeChange @ 0x140283EC8 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140284A0C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     KeInvalidateAllCaches @ 0x1403A4700 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  _DWORD *v1; // r9
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  struct _KPRCB *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  __int64 v19; // r13
  unsigned int v20; // eax
  PVOID Pool; // r15
  size_t v22; // r14
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r13
  unsigned __int8 v27; // al
  int v28; // eax
  bool v29; // zf
  signed __int32 v30[8]; // [rsp+0h] [rbp-88h] BYREF
  int v31; // [rsp+20h] [rbp-68h] BYREF
  int v32; // [rsp+24h] [rbp-64h] BYREF
  size_t Size; // [rsp+28h] [rbp-60h]
  _OWORD v34[2]; // [rsp+30h] [rbp-58h] BYREF

  memset(v34, 0, sizeof(v34));
  if ( ZwQuerySystemInformation(SystemFlushInformation, v34, 0x20u, 0LL) >= 0 && (BYTE8(v34[0]) & 1) != 0 )
    byte_140C4DEE8 = 1;
  result = MiGetPage((__int64)&MiSystemPartition, 0, 0LL);
  v2 = result;
  if ( result != -1 )
  {
    v3 = 0LL;
    v4 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v4, 1LL, 0, v1);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = 4LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = (struct _KPRCB *)KeGetCurrentPrcb()->SchedulerAssist;
      HIDWORD(SchedulerAssist->NextThread) |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    do
    {
      MiZeroPhysicalPage(v2, 1, 0LL, SchedulerAssist);
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v31, v8, v9, v10);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      *(_BYTE *)(v4 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      Size = __rdtsc();
      _InterlockedOr(v30, 0);
      MiFlushCacheForAttributeChange(v2, 1LL, 0LL, v10);
      _InterlockedOr(v30, 0);
      v13 = __rdtsc();
      v14 = (unsigned __int64)HIDWORD(v13) << 32;
      v32 = 0;
      v15 = v13;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v14, v11, v12);
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      v3 += v15 - Size;
      --v7;
    }
    while ( v7 );
    v18 = v3 >> 2;
    v19 = 0LL;
    if ( v18 )
    {
      v20 = dword_140C4DED8;
      if ( !dword_140C4DED8 )
        v20 = 256;
      Size = 3 * (v20 >> 2);
      Pool = MiAllocatePool(64, Size, 0x20206D4Du);
      if ( Pool )
      {
        v22 = Size;
        v23 = 2LL;
        do
        {
          memset(Pool, 0, v22);
          v24 = __rdtsc();
          _InterlockedOr(v30, 0);
          ++dword_140C4DF04;
          KeInvalidateAllCaches();
          _InterlockedOr(v30, 0);
          v25 = __rdtsc();
          _InterlockedOr(v30, 0);
          v19 += (((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25) - v24;
          --v23;
        }
        while ( v23 );
        ExFreePoolWithTag(Pool, 0);
        v26 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
        v16 = v26 % v18;
        dword_140C4DF0C = v26 / v18;
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          SchedulerAssist = KeGetCurrentPrcb();
          v17 = (__int64)SchedulerAssist->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v28 & *(_DWORD *)(v17 + 20)) == 0;
          v16 = (unsigned int)v28 & *(_DWORD *)(v17 + 20);
          *(_DWORD *)(v17 + 20) = v16;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick((__int64)SchedulerAssist);
        }
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v4, v16, v17, SchedulerAssist);
  }
  return result;
}
