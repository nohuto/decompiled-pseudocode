/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C009C2F0
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0096738 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00F7274 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001E98 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0032258 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00973C8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5734 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F6618 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
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
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rbx
  CCHAR LeastSignificantBit; // al
  _QWORD *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // ecx
  struct VIDMM_RECYCLE_BLOCK *v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // [rsp+50h] [rbp-68h]
  __int64 v39; // [rsp+58h] [rbp-60h]
  __int64 v40; // [rsp+60h] [rbp-58h]
  _QWORD *v41; // [rsp+C0h] [rbp+8h]
  __int64 v44; // [rsp+D8h] [rbp+20h]

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
  v41 = (_QWORD *)*((_QWORD *)this + 9);
  v14 = *(_QWORD *)(v41[4] + 8LL);
  v40 = *((_QWORD *)this + 5);
  v44 = a2 + *((_QWORD *)this + 4);
  v15 = *(_DWORD *)(v14 + 1616);
  if ( v15 )
  {
    v16 = (unsigned int)(v15 - 1);
    v17 = *(_QWORD **)(v14 + 8 * v16 + 1624);
    *(_QWORD *)(v14 + 8 * v16 + 1624) = 0LL;
    --*(_DWORD *)(v14 + 1616);
  }
  else
  {
    v17 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v14 + 1312));
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
  {
    if ( v17 )
    {
      ++*(_DWORD *)(v14 + 1688);
LABEL_18:
      v17[4] = v44;
      v17[5] = v40;
      *((_DWORD *)v17 + 6) = 0;
      v17[9] = v41;
      *((_DWORD *)v17 + 16) = 0;
      v17[11] = 3LL;
      v17[12] = 0LL;
      ++*v41;
      LeastSignificantBit = RtlFindLeastSignificantBit(v17[4]);
      if ( LeastSignificantBit < 0 )
        v20 = 0LL;
      else
        v20 = 1LL << LeastSignificantBit;
      v17[7] = v20;
      v21 = v17[9];
      v17[6] = 0LL;
      *((_DWORD *)v17 + 20) = 0;
      v17[13] = 0LL;
      v17[14] = 0LL;
      v17[15] = 0LL;
      v17[16] = 0LL;
      v17[17] = 0LL;
      v17[18] = 0LL;
      v17[19] = 0LL;
      v17[20] = 0LL;
      *((_BYTE *)v17 + 168) = 0;
      v22 = *(_QWORD **)(v21 + 136);
      if ( v22 )
      {
        v23 = *v22 + 144LL * v22[1];
        *(_DWORD *)v23 = 0;
        *(_QWORD *)(v23 + 8) = v17;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v23 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v21 + 136) + 8LL);
        v24 = *(_QWORD *)(v21 + 136);
        if ( *(_QWORD *)(v24 + 8) == *(_QWORD *)(v24 + 48) )
        {
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v21 + 136) + 16LL) = 1;
        }
      }
      *((_DWORD *)v17 + 16) = *((_DWORD *)this + 16);
      *((_DWORD *)v17 + 23) = *((_DWORD *)this + 23);
      v25 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
      *(_QWORD *)(v25 + 8) = v17 + 15;
      *((_QWORD *)this + 15) = v17 + 15;
      v17[16] = (char *)this + 120;
      v17[15] = v25;
      v17[17] = *((_QWORD *)this + 17);
      v17[18] = *((_QWORD *)this + 18);
      v17[19] = *((_QWORD *)this + 19);
      v17[20] = *((_QWORD *)this + 20);
      *((_DWORD *)v17 + 20) = *((_DWORD *)this + 20);
      *((_BYTE *)v17 + 84) = *((_BYTE *)this + 84);
      if ( v4 )
        *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v17;
      if ( v8 )
        *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v17;
      if ( v10 )
        *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v17;
      if ( v12 )
        *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v17;
      v26 = *((unsigned int *)this + 16);
      if ( (int)v26 >= 3 )
      {
        v27 = v26 - 3;
        if ( v27 && (v26 = (unsigned int)(v27 - 1), (_DWORD)v26) )
        {
          if ( (_DWORD)v26 == 1 )
          {
            VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
              *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
              (struct VIDMM_RECYCLE_RANGE *)v17);
            VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(v17[4] - v17[5], v28);
          }
        }
        else
        {
          v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL);
          v17[12] = *(_QWORD *)(v29 + 1576) + (unsigned int)dword_1C007647C;
          v30 = v17 + 13;
          v19 = *(_QWORD **)(v29 + 1552);
          if ( *v19 != v29 + 1544 )
            __fastfail(3u);
          *v30 = v29 + 1544;
          v17[14] = v19;
          *v19 = v30;
          *(_QWORD *)(v29 + 1552) = v30;
          if ( !_InterlockedExchange((volatile __int32 *)(v29 + 1536), 1) && !*(_DWORD *)(v29 + 1584) )
            KeSetTimer((PKTIMER)(v29 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v29 + 1440));
          v31 = v17[5] - v17[4];
          if ( (__int64)(v31 + _InterlockedExchangeAdd64(
                                 &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                                 v31)) < 0
            && g_IsInternalRelease )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          }
          v26 = v17[4] - v17[5];
          if ( (__int64)(v26 + _InterlockedExchangeAdd64(
                                 &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock,
                                 v26)) < 0
            && g_IsInternalRelease )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          }
        }
      }
      if ( (byte_1C00769C2 & 2) != 0 )
      {
        McTemplateK0p_EtwWriteTransfer(v26, &EventRecycleRangeDestroy, (__int64)v19, this);
        if ( (byte_1C00769C2 & 2) != 0 )
        {
          v33 = *((_QWORD *)this + 9);
          v34 = *(_QWORD *)(v33 + 32);
          McTemplateK0pppppppqq_EtwWriteTransfer(
            v34,
            v33,
            v32,
            **(_QWORD **)(*(_QWORD *)(v34 + 8) + 8LL),
            this,
            v33,
            *(_QWORD *)(v33 + 56),
            v34,
            *((_QWORD *)this + 4),
            *((_QWORD *)this + 5),
            *(_DWORD *)v34,
            *((_DWORD *)this + 16));
          if ( (byte_1C00769C2 & 2) != 0 )
          {
            v36 = *((_QWORD *)this + 9);
            v37 = *(_QWORD *)(v36 + 32);
            LODWORD(v39) = *((_DWORD *)v17 + 16);
            LODWORD(v38) = *(_DWORD *)v37;
            McTemplateK0pppppppqq_EtwWriteTransfer(
              v37,
              v36,
              v35,
              **(_QWORD **)(*(_QWORD *)(v37 + 8) + 8LL),
              v17,
              v36,
              *(_QWORD *)(v36 + 56),
              v37,
              v17[4],
              v17[5],
              v38,
              v39);
          }
        }
      }
      return;
    }
  }
  else if ( v17 )
  {
    goto LABEL_18;
  }
  WdLogSingleEntry2(3LL, this, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL));
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  *a3 = 0;
}
