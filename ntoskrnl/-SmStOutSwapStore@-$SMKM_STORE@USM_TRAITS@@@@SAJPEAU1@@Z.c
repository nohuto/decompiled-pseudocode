/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405BEF00
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020037C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E7464 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405BEBE8 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405BFFD4 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmArrayGrow @ 0x1405C7AAC (SmArrayGrow.c)
 *     SmPerformStoreSwapOperation @ 0x1405CB29C (SmPerformStoreSwapOperation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  _DWORD *v2; // r13
  __int64 v3; // r15
  signed __int64 v4; // r14
  int v5; // ebx
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  unsigned __int64 v12; // r11
  _DWORD *v13; // rdx
  int v14; // r9d
  _DWORD *i; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 j; // rax
  unsigned int *v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // r8d
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // r8d
  int v29; // r9d
  ULONG_PTR v30; // rcx
  struct _KTHREAD *v31; // rax
  _DWORD *v32; // r14
  struct _KTHREAD *v33; // rax
  bool v34; // zf
  struct _KTHREAD *v35; // rax
  int v37; // [rsp+20h] [rbp-58h]
  PVOID P; // [rsp+30h] [rbp-48h]
  PVOID v39; // [rsp+38h] [rbp-40h] BYREF
  __int64 v40; // [rsp+40h] [rbp-38h]
  __int64 Pool2; // [rsp+48h] [rbp-30h]
  __int64 v42; // [rsp+50h] [rbp-28h]
  __int128 v43; // [rsp+58h] [rbp-20h]
  __int64 v44; // [rsp+68h] [rbp-10h]
  int v45; // [rsp+C0h] [rbp+48h]
  int v46; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v47; // [rsp+D8h] [rbp+60h]

  v39 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((union _SLIST_HEADER *)a1);
  v4 = *(_QWORD *)(a1 + 6568);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6568), -1LL, v4) )
      return (unsigned int)-1073700861;
    if ( *(_QWORD *)v4 )
    {
      v6 = v4;
      v5 = -1073741791;
LABEL_48:
      _InterlockedExchange64((volatile __int64 *)(a1 + 6568), v6);
LABEL_49:
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_61;
    }
    CurrentThread = KeGetCurrentThread();
    v8 = (signed __int64 *)(a1 + 6024);
    P = (PVOID)v4;
    v6 = 0LL;
    v45 = 1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    Pool2 = ExAllocatePool2(64LL, (unsigned int)(4 * *(_DWORD *)(a1 + 6212)), 2001956211LL);
    v2 = (_DWORD *)Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
LABEL_42:
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      v33 = KeGetCurrentThread();
      v34 = v33->SpecialApcDisable++ == -1;
      if ( v34 && ($C71981A45BEB2B45F82C232A7085991E *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
        KiCheckForKernelApcDelivery();
LABEL_47:
      if ( v6 == -1 )
        goto LABEL_49;
      goto LABEL_48;
    }
    v46 = 0;
    v9 = 0;
LABEL_9:
    while ( 1 )
    {
      v10 = *(_DWORD *)(v4 + 8);
      if ( v10 <= v9 )
        break;
      v11 = 0;
      v47 = *(_QWORD *)(v4 + 16);
      v12 = v47 + 4 * ((unsigned __int64)(v10 - 1) >> 5);
      v13 = (_DWORD *)(v47 + 4 * ((unsigned __int64)v9 >> 5));
      v14 = ((1 << (v9 & 0x1F)) - 1) | *v13;
      for ( i = v13 + 1; ; ++i )
      {
        v16 = (unsigned int)~v14;
        if ( (_DWORD)v16 )
          break;
        if ( (unsigned __int64)i > v12 )
          goto LABEL_15;
        v14 = *++v13;
      }
      _BitScanForward64((unsigned __int64 *)&v17, (unsigned int)v16);
      v9 = v17 + 32 * (((__int64)v13 - v47) >> 2);
      if ( v9 > v10 )
      {
LABEL_15:
        v9 = v10;
        goto LABEL_25;
      }
      for ( j = ~((unsigned int)v16 | ((1 << v17) - 1)); !(_DWORD)j; j = *v19 )
      {
        v19 = v13 + 1;
        if ( (unsigned __int64)(v13 + 1) > v12 )
        {
          LODWORD(j) = 32;
          goto LABEL_22;
        }
        ++v13;
      }
      _BitScanForward64(&j, j);
LABEL_22:
      v20 = j + 32 * (((__int64)v13 - v47) >> 2);
      if ( v20 > v10 )
        v20 = v10;
      v11 = v20 - v9;
LABEL_25:
      if ( !v11 )
        break;
      LODWORD(v47) = v11 + v9;
      if ( v9 < v11 + v9 )
      {
        v21 = 8LL * v9;
        v40 = v21;
        while ( 1 )
        {
          v22 = *(_QWORD *)(v21 + *(_QWORD *)(a1 + 6216));
          if ( (v22 & 0x7FFFFFFFFFFF0000LL) != 0 && v22 >= 0 )
          {
            v42 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v9, 0, v16, 4u);
            if ( !(unsigned int)SmArrayGrow((unsigned int)v3, v23, &v46, &v39) )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v9, v24, v16, v37, 2);
              v30 = a1 + 6024;
              v5 = -1073741670;
              goto LABEL_35;
            }
            v25 = v39;
            v26 = v42;
            v2[v3] = v9;
            v27 = 2LL * (unsigned int)v3;
            v3 = (unsigned int)(v3 + 1);
            v25[v27] = v26;
            v25[v27 + 1] = *(unsigned int *)(a1 + 6208);
            v21 = v40;
          }
          v21 += 8LL;
          ++v9;
          v40 = v21;
          if ( v9 >= (unsigned int)v47 )
            goto LABEL_9;
        }
      }
    }
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    v35 = KeGetCurrentThread();
    v34 = v35->SpecialApcDisable++ == -1;
    if ( v34 && ($C71981A45BEB2B45F82C232A7085991E *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
      KiCheckForKernelApcDelivery();
    v45 = 0;
    if ( !(_DWORD)v3 )
    {
      v5 = -1073741607;
      goto LABEL_48;
    }
    *((_QWORD *)&v43 + 1) = v39;
    v44 = (unsigned int)v3;
    v5 = SmPerformStoreSwapOperation(1LL);
    v30 = a1 + 6024;
    if ( v5 < 0 )
    {
LABEL_35:
      v8 = (signed __int64 *)v30;
      if ( !(_DWORD)v3 )
        goto LABEL_41;
      P = (PVOID)v4;
      Pool2 = (__int64)v2;
      if ( v45 )
      {
LABEL_38:
        v32 = v2;
        do
        {
          SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v32++, v28, v29, v37, 2);
          --v3;
        }
        while ( v3 );
        v2 = (_DWORD *)Pool2;
LABEL_41:
        if ( !v45 )
          goto LABEL_47;
        goto LABEL_42;
      }
    }
    else
    {
      v6 = v4;
      *(_QWORD *)v4 = v43;
      v5 = 0;
      P = 0LL;
    }
    v31 = KeGetCurrentThread();
    v45 = 1;
    --v31->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v30, 0LL);
    goto LABEL_38;
  }
  v5 = -1073700861;
LABEL_61:
  if ( v39 )
    ExFreePoolWithTag(v39, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v5;
}
