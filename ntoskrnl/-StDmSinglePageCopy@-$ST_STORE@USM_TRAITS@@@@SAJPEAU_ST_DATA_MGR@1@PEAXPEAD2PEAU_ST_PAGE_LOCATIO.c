/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14045D346
 * Callers:
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405C53A8 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlDecompressBufferEx @ 0x14035AF00 (RtlDecompressBufferEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?StDmPageError@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@J@Z @ 0x1405C4374 (-StDmPageError@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_.c)
 *     SmCrAuthDecrypt @ 0x1405CB78C (SmCrAuthDecrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  void *v6; // r14
  int v9; // r12d
  __int64 v10; // rdx
  char v11; // bl
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned int v14; // r12d
  char v15; // al
  const void *v16; // rdi
  unsigned int v17; // edi
  __int64 v18; // rcx
  signed __int64 *v19; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v21; // rcx
  struct _KTHREAD *v22; // rax
  bool v23; // zf
  unsigned int v24; // eax
  void *v25; // rdi
  struct _KTHREAD *v26; // rax
  ULONG_PTR v27; // rcx
  int v29; // [rsp+40h] [rbp-88h] BYREF
  void *Src; // [rsp+48h] [rbp-80h]
  __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+60h] [rbp-68h] BYREF
  int v33; // [rsp+68h] [rbp-60h]

  v6 = (void *)a4;
  v32 = 0LL;
  v33 = 0;
  v9 = *(unsigned __int16 *)(a5 + 4) - 1;
  v31 = a2;
  v10 = *(unsigned int *)(a1 + 824);
  v29 = 0;
  v11 = 0;
  Src = (void *)a4;
  v12 = v10 + a3;
  v13 = *(_QWORD *)(a1 + 1016);
  v14 = -*(_DWORD *)(v13 + 8) & (*(_DWORD *)(v13 + 8) + v9);
  if ( (a4 & 1) != 0 )
  {
    v6 = (void *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    Src = *(void **)(a6 + 48);
  }
  if ( (v12 & 3) != 0 )
  {
    v15 = v12;
    v16 = (const void *)(a3 & 0xFFFFFFFFFFFFFFFCuLL);
    v12 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v15 & 2) != 0 )
    {
      memmove(v6, v16, (unsigned int)v10 + v14);
      return 0;
    }
    if ( *(_DWORD *)(v13 + 24) )
    {
      memmove(*(void **)(a1 + 1784), (const void *)v12, v14);
      v12 = *(_QWORD *)(a1 + 1784);
    }
  }
  v18 = *(_QWORD *)(a1 + 1016);
  if ( !*(_DWORD *)(v18 + 24)
    || (LODWORD(v32) = *(unsigned __int16 *)(a5 + 4),
        HIDWORD(v32) = *(_DWORD *)(a5 + 8),
        v33 = *(_DWORD *)(a5 + 12),
        (int)SmCrAuthDecrypt(v18, v12, v12, v14, &v32) >= 0) )
  {
    if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 )
    {
      v19 = (signed __int64 *)(*(_QWORD *)(a1 + 800) + 6024LL);
      if ( a6 == -64 )
      {
        CurrentThread = KeGetCurrentThread();
        v21 = *(_QWORD *)(a1 + 800) + 6024LL;
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v21, 0LL);
      }
      else
      {
        if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v19);
        KeAbPostRelease((ULONG_PTR)v19);
        v22 = KeGetCurrentThread();
        v23 = v22->SpecialApcDisable++ == -1;
        if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
          KiCheckForKernelApcDelivery();
      }
      v11 = 2;
    }
    v24 = *(unsigned __int16 *)(a5 + 4);
    if ( v24 >= 0x1000 )
    {
      memmove(v6, (const void *)v12, *(unsigned __int16 *)(a5 + 4));
    }
    else
    {
      v25 = Src;
      if ( (int)RtlDecompressBufferEx(*(_WORD *)(a1 + 992), (__int64)Src, 0x1000u, v12, v24, (__int64)&v29, v31) < 0
        || v29 != 4096 )
      {
        v17 = -1073741116;
        v11 |= 1u;
        goto LABEL_28;
      }
      if ( v25 != v6 )
        memmove(v6, v25, 0x1000uLL);
    }
    v17 = 0;
    goto LABEL_28;
  }
  v17 = -1073741173;
  v11 = 4 * (ST_STORE<SM_TRAITS>::StDmPageError(a1, v12, v6, a5, a6, -1073741173) & 1);
LABEL_28:
  if ( (v11 & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    v27 = *(_QWORD *)(a1 + 800) + 6024LL;
    --v26->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v27, 0LL);
    *(_DWORD *)(a6 + 64) = 2;
  }
  if ( (v11 & 1) != 0 && (ST_STORE<SM_TRAITS>::StDmPageError(a1, v12, v6, a5, a6, v17) & 1) != 0 )
    return 0;
  return v17;
}
