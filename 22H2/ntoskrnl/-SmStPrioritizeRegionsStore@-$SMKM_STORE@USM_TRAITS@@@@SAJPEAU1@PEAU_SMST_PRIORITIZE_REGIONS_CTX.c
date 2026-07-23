/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599544
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140599290 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14026C418 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14026C5E0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1403F9E80 (ZwQueryVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x1408C85AC (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4)
{
  bool v4; // zf
  __int64 *v5; // r15
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v11; // rsi
  __int64 v12; // r9
  unsigned int v13; // r8d
  unsigned int v14; // r13d
  int v15; // ecx
  char *v16; // r14
  __int64 v17; // rax
  char *v18; // rcx
  __int64 v19; // r15
  char *v20; // r12
  char *v21; // rax
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // rcx
  char *v24; // r8
  char *v25; // r10
  unsigned int v26; // r9d
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  struct _KTHREAD *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  int MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v39; // [rsp+30h] [rbp-D0h]
  unsigned int v40; // [rsp+34h] [rbp-CCh]
  unsigned int v41; // [rsp+38h] [rbp-C8h]
  _OWORD v43[3]; // [rsp+50h] [rbp-B0h] BYREF
  char *v44; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v45[63]; // [rsp+88h] [rbp-78h]
  char MemoryInformation[8]; // [rsp+280h] [rbp+180h] BYREF
  char v47; // [rsp+288h] [rbp+188h] BYREF

  v4 = (*(_BYTE *)(a1 + 6021) & 4) == 0;
  memset(v43, 0, sizeof(v43));
  v5 = a2;
  if ( v4 )
    return (unsigned int)-1073741637;
  v8 = *(_DWORD *)(a1 + 1952);
  v7 = 0;
  v40 = v8;
  if ( !v8 )
    return v7;
  v9 = *(_DWORD *)(a1 + 6208) >> 12;
  v39 = v9;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0LL, (__int64)v43, a4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v11 = (volatile signed __int64 *)(a1 + 6024);
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 6596));
  v13 = 0;
  v14 = 0;
  if ( !*(_DWORD *)(a1 + 6212) )
    goto LABEL_43;
  do
  {
    if ( v13 >= v8 )
      break;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v14) & 0x7FFFFFFFFFFF0000LL) == 0 )
      goto LABEL_42;
    v15 = *(_BYTE *)(a1 + 856) ? 0 : *(unsigned __int16 *)(*(_QWORD *)(a1 + 1112) + 2LL * v14) >> 13;
    if ( v15 != 6 )
      goto LABEL_42;
    v41 = v13 + 1;
    v16 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v14, 0, v12, 0);
    if ( (unsigned __int64)v16 <= 3 )
      goto LABEL_41;
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !*v5 )
    {
      v17 = *(unsigned int *)(a1 + 6208);
      v44 = v16;
      v45[0] = v17;
      MmSetPriorityVaRanges(1LL, &v44, 5LL);
      goto LABEL_40;
    }
    v18 = v16;
    v19 = v9 << 12;
    v20 = &v16[v19];
    v21 = MemoryInformation;
    if ( v16 < &v16[v19] )
    {
      do
      {
        *(_QWORD *)v21 = v18;
        v18 += 4096;
        v21 += 16;
      }
      while ( v18 < v20 );
    }
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v16,
           MemoryWorkingSetExInformation,
           MemoryInformation,
           16LL * v39,
           0LL) < 0
      && v16 < v20 )
    {
      v22 = (unsigned __int64 *)&v47;
      v23 = ((unsigned __int64)(v19 - 1) >> 12) + 1;
      do
      {
        *v22 = *v22 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
        v22 += 2;
        --v23;
      }
      while ( v23 );
    }
    v24 = MemoryInformation;
    v25 = v16;
    v26 = 0;
    if ( v16 >= v20 )
    {
      v5 = a2;
      goto LABEL_39;
    }
    do
    {
      if ( (*((_QWORD *)v24 + 1) & 1) != 0 || (*((_QWORD *)v24 + 1) & 0xC00000LL) == 0x400000 )
      {
        v5 = a2;
        v27 = *((_QWORD *)v24 + 1) & 0x7000000LL;
        if ( v27 == 100663296 )
        {
          if ( !*a2 )
          {
            v33 = *(unsigned int *)(a1 + 6208);
            v32 = 5LL;
            v44 = v16;
            v45[0] = v33;
            v31 = 1LL;
            goto LABEL_37;
          }
          v28 = *a2 - 1;
          goto LABEL_28;
        }
        if ( v27 < 0x6000000 )
        {
          v29 = *a2;
          if ( *a2 )
          {
            v30 = 2LL * v26++;
            v45[v30 - 1] = *(_QWORD *)v24;
            v28 = v29 - 1;
            v45[v30] = 4096LL;
LABEL_28:
            *a2 = v28;
          }
        }
      }
      else
      {
        v5 = a2;
      }
      v25 += 4096;
      v24 += 16;
    }
    while ( v25 < v20 );
    if ( !v26 )
      goto LABEL_39;
    v31 = v26;
    v32 = 6LL;
LABEL_37:
    MmSetPriorityVaRanges(v31, &v44, v32);
LABEL_39:
    v9 = v39;
LABEL_40:
    v34 = KeGetCurrentThread();
    --v34->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v14, v35, v36, MemoryInformationLength, 0);
LABEL_41:
    v13 = v41;
    v8 = v40;
LABEL_42:
    ++v14;
  }
  while ( v14 < *(_DWORD *)(a1 + 6212) );
LABEL_43:
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6596), 0xFFFFFFFF);
  KiUnstackDetachProcess((__int64)v43, 0);
  return v7;
}
