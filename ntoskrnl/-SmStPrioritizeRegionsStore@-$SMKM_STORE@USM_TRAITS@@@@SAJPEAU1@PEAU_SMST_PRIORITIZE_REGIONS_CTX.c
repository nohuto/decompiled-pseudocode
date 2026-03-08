/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405BF358
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1405BD920 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x140412770 (ZwQueryVirtualMemory.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405BEBE8 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405BFFD4 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MmSetPriorityVaRanges @ 0x140A2E530 (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  __int64 *v3; // r15
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v9; // rsi
  __int64 v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // r13d
  char *v13; // r14
  __int64 v14; // r9
  struct _KTHREAD *v15; // rax
  char *v16; // rcx
  __int64 v17; // r15
  char *v18; // r12
  char *v19; // rax
  unsigned __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  char *v22; // r10
  char *v23; // r9
  unsigned int v24; // edx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KTHREAD *v31; // rax
  int v32; // r8d
  int v33; // r9d
  struct _KTHREAD *v34; // rax
  int MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v37; // [rsp+30h] [rbp-D0h]
  unsigned int v38; // [rsp+34h] [rbp-CCh]
  unsigned int v39; // [rsp+38h] [rbp-C8h]
  $115DCDF994C6370D29323EAB0E0C9502 v41; // [rsp+50h] [rbp-B0h] BYREF
  char *v42; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v43[63]; // [rsp+88h] [rbp-78h]
  char MemoryInformation[8]; // [rsp+280h] [rbp+180h] BYREF
  char v45; // [rsp+288h] [rbp+188h] BYREF

  v2 = (*(_BYTE *)(a1 + 6021) & 4) == 0;
  memset(&v41, 0, sizeof(v41));
  v3 = a2;
  if ( v2 )
    return (unsigned int)-1073741637;
  v6 = *(_DWORD *)(a1 + 1952);
  v5 = 0;
  v38 = v6;
  if ( !v6 )
    return v5;
  v7 = *(_DWORD *)(a1 + 6208) >> 12;
  v37 = v7;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0, (__int64)&v41);
  CurrentThread = KeGetCurrentThread();
  v9 = (volatile signed __int64 *)(a1 + 6024);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6596), 1u);
  v11 = 0;
  v12 = 0;
  if ( !*(_DWORD *)(a1 + 6212) )
    goto LABEL_45;
  do
  {
    if ( v11 >= v6 )
      break;
    if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v12) & 0x7FFFFFFFFFFF0000LL) == 0
      || *(_BYTE *)(a1 + 856)
      || *(unsigned __int16 *)(*(_QWORD *)(a1 + 1112) + 2LL * v12) >> 13 != 6 )
    {
      goto LABEL_44;
    }
    v39 = v11 + 1;
    v13 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v12, 0, v10, 0);
    if ( (unsigned __int64)v13 <= 3 )
      goto LABEL_43;
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    v15 = KeGetCurrentThread();
    v2 = v15->SpecialApcDisable++ == -1;
    if ( v2 && ($C71981A45BEB2B45F82C232A7085991E *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      KiCheckForKernelApcDelivery();
    if ( !*v3 )
    {
      v43[0] = *(unsigned int *)(a1 + 6208);
      v42 = v13;
      MmSetPriorityVaRanges(1LL, &v42, 5LL, v14);
      goto LABEL_42;
    }
    v16 = v13;
    v17 = v7 << 12;
    v18 = &v13[v17];
    v19 = MemoryInformation;
    if ( v13 < &v13[v17] )
    {
      do
      {
        *(_QWORD *)v19 = v16;
        v16 += 4096;
        v19 += 16;
      }
      while ( v16 < v18 );
    }
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v13,
           (MEMORY_INFORMATION_CLASS)4,
           MemoryInformation,
           16LL * v37,
           0LL) >= 0
      || v13 >= v18 )
    {
      v23 = MemoryInformation;
      v22 = v13;
      v24 = 0;
      if ( v13 < v18 )
        goto LABEL_25;
      v3 = a2;
      goto LABEL_41;
    }
    v20 = (unsigned __int64 *)&v45;
    v21 = ((unsigned __int64)(v17 - 1) >> 12) + 1;
    do
    {
      *v20 = *v20 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
      v20 += 2;
      --v21;
    }
    while ( v21 );
    v22 = v13;
    v23 = MemoryInformation;
    v24 = 0;
    do
    {
LABEL_25:
      if ( (*((_QWORD *)v23 + 1) & 1) != 0 || (*((_QWORD *)v23 + 1) & 0xC00000LL) == 0x400000 )
      {
        v3 = a2;
        v25 = *((_QWORD *)v23 + 1) & 0x7000000LL;
        if ( v25 == 100663296 )
        {
          if ( !*a2 )
          {
            v30 = 5LL;
            v43[0] = *(unsigned int *)(a1 + 6208);
            v29 = 1LL;
            v42 = v13;
            goto LABEL_39;
          }
          v26 = *a2 - 1;
          goto LABEL_30;
        }
        if ( v25 < 0x6000000 )
        {
          v27 = *a2;
          if ( *a2 )
          {
            v28 = 2LL * v24++;
            v43[v28 - 1] = *(_QWORD *)v23;
            v26 = v27 - 1;
            v43[v28] = 4096LL;
LABEL_30:
            *a2 = v26;
          }
        }
      }
      else
      {
        v3 = a2;
      }
      v22 += 4096;
      v23 += 16;
    }
    while ( v22 < v18 );
    if ( !v24 )
      goto LABEL_41;
    v29 = v24;
    v30 = 6LL;
LABEL_39:
    MmSetPriorityVaRanges(v29, &v42, v30, v23);
LABEL_41:
    v7 = v37;
LABEL_42:
    v31 = KeGetCurrentThread();
    --v31->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v12, v32, v33, MemoryInformationLength, 0);
LABEL_43:
    v11 = v39;
    v6 = v38;
LABEL_44:
    ++v12;
  }
  while ( v12 < *(_DWORD *)(a1 + 6212) );
LABEL_45:
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(a1 + 6024);
  v34 = KeGetCurrentThread();
  v2 = v34->SpecialApcDisable++ == -1;
  if ( v2 && ($C71981A45BEB2B45F82C232A7085991E *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery();
  _InterlockedAdd((volatile signed __int32 *)(a1 + 6596), 0xFFFFFFFF);
  KiUnstackDetachProcess(&v41);
  return v5;
}
