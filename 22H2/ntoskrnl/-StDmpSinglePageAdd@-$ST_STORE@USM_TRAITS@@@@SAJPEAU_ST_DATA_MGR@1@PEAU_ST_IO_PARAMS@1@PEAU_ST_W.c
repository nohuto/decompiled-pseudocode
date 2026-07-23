/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140264F1C
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140268750 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x14059CB20 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14025385C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkFree @ 0x14026301C (SmHpChunkFree.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140264C20 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     SmHpChunkAlloc @ 0x140264D2C (SmHpChunkAlloc.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402682C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x140268980 (RtlCompressBuffer.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140268A0C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlComputeCrc32 @ 0x1402FAEE0 (RtlComputeCrc32.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140300354 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14032C910 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059C66C (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmCrAuthEncrypt @ 0x1405A0014 (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v6; // r14
  int v7; // r8d
  unsigned int v8; // edx
  int v9; // ebx
  int Space; // esi
  __int64 v11; // r15
  ULONG_PTR v12; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v15; // r12
  unsigned int v16; // r8d
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int8 v20; // al
  int v21; // ecx
  UCHAR *v22; // r15
  UCHAR *v23; // r12
  ULONG v24; // edx
  unsigned int v25; // r13d
  size_t v26; // r8
  UCHAR *v27; // rdx
  _WORD *v28; // rax
  unsigned __int64 v29; // r9
  ULONG v30; // eax
  int *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  int v35; // eax
  UCHAR *v36; // rsi
  unsigned int v37; // ecx
  __int64 v38; // r9
  __int64 v39; // rcx
  ULONG32 v40; // eax
  ULONG Length; // [rsp+40h] [rbp-49h] BYREF
  ULONG_PTR v42; // [rsp+44h] [rbp-45h] BYREF
  int v43; // [rsp+4Ch] [rbp-3Dh]
  ULONG32 *v44; // [rsp+50h] [rbp-39h] BYREF
  __int64 v45; // [rsp+58h] [rbp-31h]
  unsigned __int8 v46[8]; // [rsp+60h] [rbp-29h] BYREF
  int v47; // [rsp+68h] [rbp-21h]
  _DWORD *v48; // [rsp+70h] [rbp-19h]
  int *v49; // [rsp+78h] [rbp-11h]
  __int64 v50; // [rsp+80h] [rbp-9h] BYREF
  int v51; // [rsp+88h] [rbp-1h]

  v49 = (int *)a2;
  v45 = a3;
  v50 = 0LL;
  v51 = 0;
  v6 = 0LL;
  v7 = (unsigned __int8)*(_DWORD *)(a1 + 776);
  v8 = *(_DWORD *)a2 & 7;
  v48 = a4;
  v44 = 0LL;
  LODWORD(v42) = 0;
  v9 = 0;
  v47 = 0;
  Length = 0;
  if ( ((unsigned __int8)v7 == 0 ? 7 : 0) < v8 )
    v8 = v7 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v8, *a4, &v44, (int *)&v42);
  if ( Space < 0 )
    goto LABEL_41;
  v11 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v11 + 6021) & 4) != 0 )
  {
    v12 = v11 + 6024;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    v43 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v15 = ++CurrentThread->AbAllocationRegionCount;
    v16 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v17 = !_BitScanReverse((unsigned int *)&v18, v16);
      HIDWORD(v42) = v18;
      if ( v17 )
        break;
      v19 = (__int64)&CurrentThread->LockEntries[v18];
      v16 &= ~(1 << v18);
      if ( (*(_BYTE *)(v19 + 26) & 1) != 0
        && (*(_DWORD *)(v19 + 32) & 1) == 0
        && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v19 + 40) == SessionId )
      {
        *(_BYTE *)(v19 + 26) &= ~1u;
        if ( *(_QWORD *)(v19 + 32) )
        {
          if ( v19 )
          {
            *(_BYTE *)(v19 + 32) |= 2u;
            if ( *(__int64 *)(v19 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
            v43 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
            *(_DWORD *)(v19 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v19 + 25) &= ~1u;
            *(_QWORD *)(v19 + 32) = 0LL;
            v20 = 1 << ((signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96);
            if ( v15 == 1 )
              CurrentThread->AbEntrySummary |= v20;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v20);
            goto LABEL_21;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v12, SessionId, 0LL);
LABEL_21:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  v9 = 1;
  v21 = *(_DWORD *)a2;
  v22 = (UCHAR *)v44 + *(unsigned int *)(a1 + 824);
  v23 = *(UCHAR **)(a2 + 8);
  if ( *(int *)a2 >= 0 )
  {
    v35 = *(_DWORD *)(a1 + 776);
    if ( (v35 & 0x400) != 0 )
    {
      v24 = 4096;
    }
    else
    {
      if ( (v35 & 0x8000) != 0 )
      {
        memmove((void *)(*(_QWORD *)(a1 + 1784) + 4096LL), *(const void **)(a2 + 8), 0x1000uLL);
        v21 = *(_DWORD *)a2;
        v23 = (UCHAR *)(*(_QWORD *)(a1 + 1784) + 4096LL);
      }
      v24 = 0;
    }
  }
  else
  {
    v24 = *(_DWORD *)(*(_QWORD *)(v45 + 16) + 40LL);
  }
  v25 = *(_DWORD *)(a1 + 816) - (v42 & *(_DWORD *)(a1 + 808));
  Length = v24;
  if ( v21 < 0 )
  {
    v26 = v24;
    v27 = v23;
LABEL_29:
    memmove(v22, v27, v26);
    goto LABEL_30;
  }
  if ( v25 >= *(_DWORD *)(a1 + 820) )
    v36 = v22;
  else
    v36 = *(UCHAR **)(a1 + 1784);
  if ( !v24 )
  {
    if ( RtlCompressBuffer(*(_WORD *)(a1 + 992), v23, 0x1000u, v36, 0x1000u, 0x1000u, &Length, *(PVOID *)(a1 + 896)) >= 0 )
    {
      v24 = Length;
    }
    else
    {
      v24 = 4096;
      Length = 4096;
    }
  }
  if ( v36 != v22 )
  {
    v37 = (v24 + *(_DWORD *)(a1 + 824) + 15) >> 4;
    *v48 = v37;
    if ( v37 > v25 )
    {
      Space = -1073741267;
      goto LABEL_41;
    }
  }
  if ( v24 > 0xFF0 )
  {
    if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
    {
      Space = -1073740762;
      goto LABEL_41;
    }
    v24 = 4096;
    v36 = v23;
    Length = 4096;
  }
  if ( v36 != v22 )
  {
    v26 = v24;
    v27 = v36;
    goto LABEL_29;
  }
LABEL_30:
  if ( *(_QWORD *)(a1 + 760) || (Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1), Space >= 0) )
  {
    v9 = 0;
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
    v28 = SmHpChunkAlloc(a1 + 192);
    v6 = (unsigned __int64)v28;
    if ( !v28 )
    {
      Space = -1073741670;
      goto LABEL_41;
    }
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)v28);
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_DWORD *)v6 = v42;
    v30 = Length;
    if ( Length < 0x1000 )
    {
      *(_DWORD *)(v6 + 4) ^= Length & 0xFFF;
      v30 = Length;
    }
    v31 = v49;
    if ( *v49 >= 0 )
    {
      *(_QWORD *)v46 = 0LL;
      MetroHash64::Hash(v22, v30, v46, v29);
      LODWORD(v32) = *(_DWORD *)v46;
    }
    else
    {
      v32 = *(_QWORD *)(v45 + 96);
    }
    *(_DWORD *)(v6 + 8) = v32;
    v33 = *(_QWORD *)(a1 + 1016);
    if ( *(_DWORD *)(v33 + 24) )
    {
      v38 = -*(_DWORD *)(v33 + 8) & (*(_DWORD *)(v33 + 8) + Length - 1);
      ++*(_QWORD *)(a1 + 1024);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(a1 + 1024);
      *(_WORD *)(v6 + 6) = *(_WORD *)(a1 + 1028);
      LODWORD(v50) = Length;
      HIDWORD(v50) = *(_DWORD *)(v6 + 12);
      v39 = *(_QWORD *)(a1 + 1016);
      v51 = *(unsigned __int16 *)(v6 + 6);
      if ( (int)SmCrAuthEncrypt(v39, v22, v22, v38, &v50) < 0 )
      {
        Space = -1073741174;
        goto LABEL_41;
      }
    }
    else if ( *(_BYTE *)(a1 + 776) )
    {
      v40 = RtlComputeCrc32(0, v22, Length);
      *v44 = v40;
    }
    Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, v31, v6);
    if ( Space >= 0 )
    {
      v6 = 0LL;
      Space = 0;
    }
  }
LABEL_41:
  if ( v9 )
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
  if ( v6 )
    SmHpChunkFree((_DWORD *)(a1 + 192), v6);
  return (unsigned int)Space;
}
