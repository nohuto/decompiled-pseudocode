__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  __int64 v1; // r9
  ULONG_PTR v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned int v8; // eax
  SIZE_T v9; // r13
  PVOID Pool; // r15
  LARGE_INTEGER v11; // r14
  LARGE_INTEGER v12; // rbx
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rcx
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  signed __int32 v22[8]; // [rsp+0h] [rbp-70h] BYREF
  LARGE_INTEGER v23; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  int v25; // [rsp+30h] [rbp-40h] BYREF
  int v26; // [rsp+34h] [rbp-3Ch] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v28[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v28, 0, sizeof(v28));
  if ( (int)ZwQuerySystemInformation(192LL, (__int64)v28) >= 0 && (BYTE8(v28[0]) & 1) != 0 )
    byte_140C65768 = 1;
  result = MiGetPage((__int64)MiSystemPartition, 0, 0);
  v2 = result;
  if ( result != -1 )
  {
    v24 = 0LL;
    v23.QuadPart = 0LL;
    v3 = 48 * result - 0x220000000000LL;
    MiFinalizePageAttribute(v3, 1LL, 0, v1);
    CurrentIrql = KeGetCurrentIrql();
    v6 = 2LL;
    __writecr8(2uLL);
    v7 = 4LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
      {
        v16 = 4;
      }
      else
      {
        v4 = (unsigned int)CurrentIrql + 1;
        v16 = (-1LL << (CurrentIrql + 1)) & 4;
      }
      SchedulerAssist[5] |= v16;
    }
    do
    {
      MiZeroPhysicalPage(v4, v2, 0LL, 0);
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushCacheForAttributeChange(v2, 1LL, 0, &v24);
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      --v7;
    }
    while ( v7 );
    v24 >>= 2;
    if ( v24 )
    {
      v8 = dword_140C65758;
      if ( !dword_140C65758 )
        v8 = 256;
      v9 = 3 * (v8 >> 2);
      Pool = MiAllocatePool(64, v9, 0x20206D4Du);
      if ( Pool )
      {
        v11 = v23;
        do
        {
          memset(Pool, 0, v9);
          PerformanceFrequency.QuadPart = 0LL;
          v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( PerformanceFrequency.QuadPart != 10000000 )
            v12.QuadPart = 10000000 * v12.QuadPart / PerformanceFrequency.QuadPart;
          _InterlockedOr(v22, 0);
          ++dword_140C65784;
          KeInvalidateAllCaches();
          _InterlockedOr(v22, 0);
          v23.QuadPart = 0LL;
          v13 = KeQueryPerformanceCounter(&v23);
          if ( v23.QuadPart != 10000000 )
            v13.QuadPart = 10000000 * v13.QuadPart / v23.QuadPart;
          _InterlockedOr(v22, 0);
          v14 = v12;
          if ( v13.QuadPart >= (unsigned __int64)v12.QuadPart )
            v14 = v13;
          v11.QuadPart += v14.QuadPart - v12.QuadPart;
          --v6;
        }
        while ( v6 );
        ExFreePoolWithTag(Pool, 0);
        dword_140C6578C = (v11.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) / v24;
        LOBYTE(v6) = 2;
      }
    }
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= (unsigned __int8)v6 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v3);
  }
  return result;
}
