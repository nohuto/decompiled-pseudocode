/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14045CBDC
 * Callers:
 *     SmpPageWrite @ 0x1405C7990 (SmpPageWrite.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     SmKmStoreReferenceEx @ 0x140356558 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14045C910 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1405BC324 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BCB34 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1405C38B0 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        _DWORD *a2,
        int a3,
        __int64 a4,
        _SLIST_ENTRY *a5,
        _SLIST_ENTRY *a6,
        int a7)
{
  _SLIST_ENTRY *v7; // r15
  PSLIST_ENTRY Pool2; // rdi
  void *v9; // r14
  __int64 v10; // rdx
  _SLIST_ENTRY *v14; // rbp
  unsigned __int64 v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rbp
  unsigned int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ebx
  struct _EX_RUNDOWN_REF *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // eax
  int v28; // ebx
  PVOID v29; // rax
  bool v30; // cf
  int v33; // [rsp+90h] [rbp+28h]

  v7 = a6;
  Pool2 = 0LL;
  v9 = 0LL;
  v10 = a3 & 0x7FF;
  *((_QWORD *)&a6->Next + 1) = 0LL;
  v7->Next = a5;
  v14 = v7;
  v33 = *(_DWORD *)(a4 + 40) >> 12;
  if ( (_DWORD)v10 != 1024 )
  {
    v15 = SmKmStoreReferenceEx(a1, v10);
    v16 = (_DWORD *)v15;
    if ( v15 )
    {
      LODWORD(a6) = 0;
      v17 = (unsigned __int16)a3 >> 13;
      ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v15 + 80, &a6, 0LL);
      if ( v16[234] <= (unsigned int)a6 )
      {
        v18 = v16[2 * v17 + 477];
        v19 = v16[2 * v17 + 476];
        v20 = v19 * (v16[216] >> 4);
        if ( v20 >= v18 && v20 - v18 < v19 << 8 )
        {
          v21 = -1073741110;
          goto LABEL_7;
        }
      }
      if ( (a3 & 0x40000) != 0 && (unsigned int)(v17 - 5) <= 1 )
      {
        LODWORD(v17) = 6;
      }
      else if ( (_DWORD)v17 != 6 )
      {
LABEL_16:
        if ( (*(_DWORD *)(a1 + 1856) & 0x20) == 0 || (*v16 & 0x400) != 0 )
        {
          v23 = 40LL;
          v24 = 1767337331LL;
        }
        else
        {
          Pool2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1408));
          if ( Pool2 )
          {
LABEL_23:
            v25 = (int)a2;
            *Pool2 = 0LL;
            Pool2[1] = 0LL;
            Pool2[2].Next = 0LL;
            *((_DWORD *)&Pool2[1].Next + 2) = *a2;
            v26 = *(_DWORD *)(&Pool2->Next + 1) & 0xFFFFFFF8;
            Pool2[1].Next = (_SLIST_ENTRY *)a4;
            v27 = v17 | v26;
            *((_DWORD *)&Pool2->Next + 2) = v27;
            if ( (a3 & 0x10000) != 0 )
            {
              v27 |= 0x40000000u;
              *((_DWORD *)&Pool2->Next + 2) = v27;
            }
            if ( (a3 & 0x20000) != 0 )
              *((_DWORD *)&Pool2->Next + 2) = v27 | 0x40000000;
            Pool2[2].Next = v7;
            v28 = v16[1504] & 0x3FF;
            if ( (*(_DWORD *)(a1 + 1856) & 2) == 0
              || ((*(_BYTE *)(a4 + 10) & 5) == 0
                ? (v29 = MmMapLockedPagesSpecifyCache((PMDL)a4, 0, MmCached, 0LL, 0, 0x40000020u),
                   v25 = (int)a2,
                   v9 = v29)
                : (v9 = *(void **)(a4 + 24)),
                  v9) )
            {
              if ( (*(_DWORD *)(a1 + 1856) & 0x20) == 0 || (*v16 & 0x400) != 0 )
              {
                v21 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v25, v33, v28, (__int64)Pool2, (__int64)v7, 0);
                if ( v21 < 0 )
                  goto LABEL_7;
              }
              else
              {
                v30 = a7 != 0;
                a7 = -a7;
                v21 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, v25, v33, v28, 0LL, 0LL, (unsigned int)v30 + 2);
                if ( v21 < 0 )
                  goto LABEL_7;
                memset(&Pool2[2].Next + 1, 0, 0x58uLL);
                *((_QWORD *)&Pool2[7].Next + 1) = Pool2;
                *((_QWORD *)&Pool2[6].Next + 1) = v16;
                SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextQueueEntry((PEX_SPIN_LOCK)(a1 + 1264));
              }
              return 259;
            }
            v21 = -1073741688;
LABEL_7:
            v14 = v7;
            v22 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v16[1504] & 0x3FF);
            ExReleaseRundownProtection_0(v22 + 1);
            if ( Pool2 )
              ExFreePoolWithTag(Pool2, 0);
            if ( v9 )
              MmUnmapLockedPages(v9, (PMDL)a4);
            goto LABEL_40;
          }
          v23 = 4096LL;
          v24 = 2002218355LL;
        }
        Pool2 = (PSLIST_ENTRY)ExAllocatePool2(64LL, v23, v24);
        if ( !Pool2 )
        {
          v21 = -1073741670;
          goto LABEL_7;
        }
        goto LABEL_23;
      }
      SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityTimerStart(a1);
      goto LABEL_16;
    }
  }
  v21 = -1073741811;
LABEL_40:
  if ( v14 )
  {
    *v7 = 0LL;
    LODWORD(v7->Next) = v21;
  }
  return (unsigned int)v21;
}
