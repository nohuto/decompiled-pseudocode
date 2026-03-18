/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C00A4E70
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C009EBB4 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00A17C0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00A5850 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00F6E44 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0005B6C (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3CC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C00320F0 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009FEC8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F53C4 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F61E8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  __int64 v3; // rax
  bool v4; // r14
  __int64 v7; // rax
  bool v8; // bp
  __int64 v9; // rax
  bool v10; // r15
  __int64 v11; // rax
  bool v12; // r12
  unsigned int v13; // esi
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  int v18; // eax
  __int64 v19; // rax
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  CCHAR LeastSignificantBit; // al
  _QWORD *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  int v31; // ecx
  struct VIDMM_RECYCLE_BLOCK *v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // [rsp+50h] [rbp-68h]
  __int64 v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  _QWORD *v45; // [rsp+C0h] [rbp+8h]
  __int64 v48; // [rsp+D8h] [rbp+20h]

  v3 = *((_QWORD *)this + 17);
  v4 = 0;
  *a3 = 1;
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 72) == (_QWORD)this;
  v7 = *((_QWORD *)this + 18);
  v8 = 0;
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 72) == (_QWORD)this;
  v9 = *((_QWORD *)this + 19);
  v10 = 0;
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 72) == (_QWORD)this;
  v11 = *((_QWORD *)this + 20);
  v12 = 0;
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 72) == (_QWORD)this;
  v13 = *((_DWORD *)this + 22);
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  v14 = (_QWORD *)*((_QWORD *)this + 9);
  v15 = *((_QWORD *)this + 5);
  v16 = a2 + *((_QWORD *)this + 4);
  v45 = v14;
  v48 = v15;
  v44 = v16;
  v17 = *(_QWORD *)(v14[4] + 8LL);
  v18 = *(_DWORD *)(v17 + 1616);
  if ( v18 )
  {
    v19 = (unsigned int)(v18 - 1);
    v20 = *(_QWORD **)(v17 + 8 * v19 + 1624);
    *(_QWORD *)(v17 + 8 * v19 + 1624) = 0LL;
    --*(_DWORD *)(v17 + 1616);
  }
  else
  {
    v21 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v17 + 1312));
    v14 = v45;
    v20 = v21;
    v15 = v48;
    v16 = v44;
  }
  if ( v20 )
  {
    ++*(_DWORD *)(v17 + 1688);
    v20[4] = v16;
    *((_DWORD *)v20 + 6) = 0;
    *((_DWORD *)v20 + 16) = 0;
    v20[12] = 0LL;
    v20[9] = v14;
    v20[5] = v15;
    v20[11] = 3LL;
    ++*v14;
    LeastSignificantBit = RtlFindLeastSignificantBit(v20[4]);
    if ( LeastSignificantBit < 0 )
      v24 = 0LL;
    else
      v24 = 1LL << LeastSignificantBit;
    v20[7] = v24;
    v25 = v20[9];
    v20[6] = 0LL;
    *((_DWORD *)v20 + 20) = 0;
    v20[13] = 0LL;
    v20[14] = 0LL;
    v20[15] = 0LL;
    v20[16] = 0LL;
    v20[17] = 0LL;
    v20[18] = 0LL;
    v20[19] = 0LL;
    v20[20] = 0LL;
    *((_BYTE *)v20 + 168) = 0;
    v26 = *(_QWORD **)(v25 + 136);
    if ( v26 )
    {
      v27 = *v26 + 144LL * v26[1];
      *(_DWORD *)v27 = 0;
      *(_QWORD *)(v27 + 8) = v20;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v27 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v25 + 136) + 8LL);
      v28 = *(_QWORD *)(v25 + 136);
      if ( *(_QWORD *)(v28 + 8) == *(_QWORD *)(v28 + 48) )
      {
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v25 + 136) + 16LL) = 1;
      }
    }
    *((_DWORD *)v20 + 16) = *((_DWORD *)this + 16);
    *((_DWORD *)v20 + 23) = *((_DWORD *)this + 23);
    v29 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    *(_QWORD *)(v29 + 8) = v20 + 15;
    *((_QWORD *)this + 15) = v20 + 15;
    v20[16] = (char *)this + 120;
    v20[15] = v29;
    v20[17] = *((_QWORD *)this + 17);
    v20[18] = *((_QWORD *)this + 18);
    v20[19] = *((_QWORD *)this + 19);
    v20[20] = *((_QWORD *)this + 20);
    *((_DWORD *)v20 + 20) = *((_DWORD *)this + 20);
    *((_BYTE *)v20 + 84) = *((_BYTE *)this + 84);
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v20;
    if ( v8 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v20;
    if ( v10 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v20;
    if ( v12 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v20;
    v30 = *((unsigned int *)this + 16);
    if ( (int)v30 >= 3 )
    {
      v31 = v30 - 3;
      if ( v31 && (v30 = (unsigned int)(v31 - 1), (_DWORD)v30) )
      {
        if ( (_DWORD)v30 == 1 )
        {
          VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
            *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
            (struct VIDMM_RECYCLE_RANGE *)v20);
          VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(v20[4] - v20[5], v32);
        }
      }
      else
      {
        v33 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
        v20[12] = *(_QWORD *)(v33 + 1576) + (unsigned int)dword_1C007647C;
        v34 = v20 + 13;
        v23 = *(_QWORD **)(v33 + 1552);
        if ( *v23 != v33 + 1544 )
          __fastfail(3u);
        *v34 = v33 + 1544;
        v20[14] = v23;
        *v23 = v34;
        *(_QWORD *)(v33 + 1552) = v34;
        if ( !_InterlockedExchange((volatile __int32 *)(v33 + 1536), 1) && !*(_DWORD *)(v33 + 1584) )
          KeSetTimer((PKTIMER)(v33 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v33 + 1440));
        v35 = v20[5] - v20[4];
        if ( (__int64)(v35 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v35)) < 0
          && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        }
        v30 = v20[4] - v20[5];
        if ( (__int64)(v30 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v30)) < 0
          && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        }
      }
    }
    if ( (byte_1C0076982 & 2) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer(v30, &EventRecycleRangeDestroy, (__int64)v23, this);
      if ( (byte_1C0076982 & 2) != 0 )
      {
        v37 = *((_QWORD *)this + 9);
        v38 = *(_QWORD *)(v37 + 32);
        McTemplateK0pppppppqq_EtwWriteTransfer(
          v38,
          v37,
          v36,
          **(_QWORD **)(*(_QWORD *)(v38 + 8) + 8LL),
          this,
          v37,
          *(_QWORD *)(v37 + 56),
          v38,
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5),
          *(_DWORD *)v38,
          *((_DWORD *)this + 16));
        if ( (byte_1C0076982 & 2) != 0 )
        {
          v40 = *((_QWORD *)this + 9);
          v41 = *(_QWORD *)(v40 + 32);
          LODWORD(v43) = *((_DWORD *)v20 + 16);
          LODWORD(v42) = *(_DWORD *)v41;
          McTemplateK0pppppppqq_EtwWriteTransfer(
            v41,
            v40,
            v39,
            **(_QWORD **)(*(_QWORD *)(v41 + 8) + 8LL),
            v20,
            v40,
            *(_QWORD *)(v40 + 56),
            v41,
            v20[4],
            v20[5],
            v42,
            v43);
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, this, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL));
    if ( v13 != 3 )
      VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
    *a3 = 0;
  }
}
