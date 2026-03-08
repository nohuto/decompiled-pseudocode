/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1405C5638
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4210 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x1405C6CB0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlComputeCrc32 @ 0x1402B8B70 (RtlComputeCrc32.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E6D0C (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x1402F8450 (RtlCompressBuffer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C4608 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C55BC (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x1405C5A20 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5B28 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     SmHpChunkAlloc @ 0x1405C811C (SmHpChunkAlloc.c)
 *     SmHpChunkFree @ 0x1405C81A8 (SmHpChunkFree.c)
 *     SmCrAuthEncrypt @ 0x1405CB7F0 (SmCrAuthEncrypt.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1406797B0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v6; // edx
  unsigned int v8; // edx
  int v9; // eax
  int Space; // edi
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  bool v13; // zf
  int v14; // ecx
  unsigned __int8 *v15; // r14
  void *v16; // rsi
  ULONG v17; // edx
  int v18; // eax
  int v19; // r13d
  unsigned int v20; // r15d
  size_t v21; // r8
  UCHAR *v22; // rdx
  UCHAR *v23; // rdi
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // r9
  ULONG v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rcx
  int v34; // eax
  ULONG FinalCompressedSize; // [rsp+40h] [rbp-29h] BYREF
  int v36; // [rsp+44h] [rbp-25h] BYREF
  unsigned __int8 v37[8]; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v38; // [rsp+50h] [rbp-19h]
  unsigned int *v39; // [rsp+58h] [rbp-11h]
  __int64 v40; // [rsp+60h] [rbp-9h]
  __int64 v41; // [rsp+68h] [rbp-1h] BYREF
  int v42; // [rsp+70h] [rbp+7h]

  *(_QWORD *)v37 = 0LL;
  v36 = 0;
  v41 = 0LL;
  v6 = *(_DWORD *)a2;
  v42 = 0;
  v8 = v6 & 7;
  v9 = *(_DWORD *)(a1 + 776);
  v40 = a3;
  v39 = a4;
  if ( ((unsigned __int8)v9 == 0 ? 7 : 0) < v8 )
    v8 = (unsigned __int8)v9 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v8, *a4, (unsigned int)v37, (__int64)&v36);
  if ( Space >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v11 + 6021) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 6024));
      KeAbPostRelease(v11 + 6024);
      CurrentThread = KeGetCurrentThread();
      v13 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v13
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    v14 = *(_DWORD *)a2;
    v15 = (unsigned __int8 *)(*(_QWORD *)v37 + *(unsigned int *)(a1 + 824));
    v16 = *(void **)(a2 + 8);
    v38 = *(_DWORD **)v37;
    if ( v14 >= 0 )
    {
      v18 = *(_DWORD *)(a1 + 776);
      if ( (v18 & 0x400) != 0 )
      {
        v17 = 4096;
      }
      else
      {
        if ( (v18 & 0x8000) != 0 )
        {
          memmove((void *)(*(_QWORD *)(a1 + 1784) + 4096LL), v16, 0x1000uLL);
          v14 = *(_DWORD *)a2;
          v16 = (void *)(*(_QWORD *)(a1 + 1784) + 4096LL);
        }
        v17 = 0;
      }
    }
    else
    {
      v17 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 40LL);
    }
    v19 = v36;
    v20 = *(_DWORD *)(a1 + 816) - (v36 & *(_DWORD *)(a1 + 808));
    FinalCompressedSize = v17;
    if ( v14 < 0 )
    {
      v21 = v17;
      v22 = (UCHAR *)v16;
      goto LABEL_35;
    }
    if ( v20 >= *(_DWORD *)(a1 + 820) )
      v23 = v15;
    else
      v23 = *(UCHAR **)(a1 + 1784);
    if ( !v17 )
    {
      if ( RtlCompressBuffer(
             *(_WORD *)(a1 + 992),
             (PUCHAR)v16,
             0x1000u,
             v23,
             0x1000u,
             0x1000u,
             &FinalCompressedSize,
             *(PVOID *)(a1 + 896)) >= 0 )
      {
        v17 = FinalCompressedSize;
      }
      else
      {
        v17 = 4096;
        FinalCompressedSize = 4096;
      }
    }
    if ( v23 != v15 )
    {
      v24 = (v17 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      *v39 = v24;
      if ( v24 > v20 )
      {
        Space = -1073741267;
LABEL_38:
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
        return (unsigned int)Space;
      }
    }
    if ( v17 > 0xFF0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
      {
        Space = -1073740762;
        goto LABEL_38;
      }
      v17 = 4096;
      v23 = (UCHAR *)v16;
      FinalCompressedSize = 4096;
    }
    if ( v23 == v15 )
    {
LABEL_36:
      if ( !*(_QWORD *)(a1 + 760) )
      {
        Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1);
        if ( Space < 0 )
          goto LABEL_38;
      }
      SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      v25 = SmHpChunkAlloc(a1 + 192);
      v26 = v25;
      if ( !v25 )
        return (unsigned int)-1073741670;
      ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v25);
      *(_QWORD *)(v26 + 4) = 0LL;
      *(_DWORD *)v26 = v19;
      v28 = FinalCompressedSize;
      if ( FinalCompressedSize < 0x1000 )
      {
        *(_DWORD *)(v26 + 4) ^= (*(_DWORD *)(v26 + 4) ^ FinalCompressedSize) & 0xFFF;
        v28 = FinalCompressedSize;
      }
      if ( *(int *)a2 >= 0 )
      {
        *(_QWORD *)v37 = 0LL;
        MetroHash64::Hash(v15, v28, v37, v27);
        v29 = *(_DWORD *)v37;
      }
      else
      {
        v29 = *(_DWORD *)(v40 + 96);
      }
      *(_DWORD *)(v26 + 8) = v29;
      v30 = *(_QWORD *)(a1 + 1016);
      if ( *(_DWORD *)(v30 + 24) )
      {
        v31 = -*(_DWORD *)(v30 + 8) & (*(_DWORD *)(v30 + 8) + FinalCompressedSize - 1);
        ++*(_QWORD *)(a1 + 1024);
        *(_DWORD *)(v26 + 12) = *(_DWORD *)(a1 + 1024);
        *(_WORD *)(v26 + 6) = *(_WORD *)(a1 + 1028);
        LODWORD(v41) = FinalCompressedSize;
        HIDWORD(v41) = *(_DWORD *)(v26 + 12);
        v32 = *(_QWORD *)(a1 + 1016);
        v42 = *(unsigned __int16 *)(v26 + 6);
        if ( (int)SmCrAuthEncrypt(v32, v15, v15, v31, &v41) < 0 )
        {
          Space = -1073741174;
LABEL_49:
          SmHpChunkFree(a1 + 192);
          return (unsigned int)Space;
        }
      }
      else if ( *(_BYTE *)(a1 + 776) )
      {
        v34 = RtlComputeCrc32(0, (char *)v15, FinalCompressedSize);
        *v38 = v34;
      }
      Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, a2, v26);
      if ( Space >= 0 )
        return 0;
      goto LABEL_49;
    }
    v21 = v17;
    v22 = v23;
LABEL_35:
    memmove(v15, v22, v21);
    goto LABEL_36;
  }
  return (unsigned int)Space;
}
