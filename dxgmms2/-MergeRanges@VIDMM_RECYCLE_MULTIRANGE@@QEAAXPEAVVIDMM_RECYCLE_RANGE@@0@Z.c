/*
 * XREFs of ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C009AF50
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C009ADF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0017510 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppppppqq_EtwWriteTransfer @ 0x1C0032258 (McTemplateK0pppppppqq_EtwWriteTransfer.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00973C8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1C009B6D8 (-AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeRanges(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3)
{
  struct VIDMM_RECYCLE_RANGE *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // r12
  __int64 v13; // rdx
  struct VIDMM_RECYCLE_RANGE *v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rcx
  signed __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  VIDMM_RECYCLE_BLOCK *v27; // rdi
  int IsEnabledDeviceUsage; // eax
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rax
  _QWORD *v36; // rbx
  CCHAR LeastSignificantBit; // al
  __int64 v38; // rax
  __int64 v39; // rdi
  _QWORD *v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  VIDMM_RECYCLE_BLOCK *v43; // rdi
  int v44; // eax
  __int64 v45; // rcx
  bool v46; // zf
  __int64 v47; // rcx
  __int64 v48; // rdx
  _QWORD *v49; // r8
  __int64 v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  char v58; // [rsp+60h] [rbp-A8h]
  char v59; // [rsp+61h] [rbp-A7h]
  char v60; // [rsp+62h] [rbp-A6h]
  char v61; // [rsp+63h] [rbp-A5h]
  unsigned int v62; // [rsp+64h] [rbp-A4h]
  int v63; // [rsp+68h] [rbp-A0h] BYREF
  int v64; // [rsp+6Ch] [rbp-9Ch]
  __int64 v65; // [rsp+70h] [rbp-98h]
  __int64 v66; // [rsp+78h] [rbp-90h]
  __int64 v67; // [rsp+80h] [rbp-88h]
  __int64 v68; // [rsp+88h] [rbp-80h]
  __int64 v69; // [rsp+90h] [rbp-78h]
  _QWORD *v70; // [rsp+98h] [rbp-70h]
  _QWORD *v71; // [rsp+A0h] [rbp-68h]
  __int64 v72; // [rsp+A8h] [rbp-60h]
  bool v73; // [rsp+110h] [rbp+8h]
  bool v74; // [rsp+118h] [rbp+10h]
  bool v75; // [rsp+120h] [rbp+18h]
  bool v76; // [rsp+128h] [rbp+20h]

  v65 = *((_QWORD *)a2 + 4);
  v4 = a2;
  v5 = *((_QWORD *)a3 + 5);
  v7 = *((unsigned int *)a2 + 16);
  v66 = v5;
  v64 = *((_DWORD *)a2 + 23);
  v8 = *((_QWORD *)a2 + 17);
  v62 = v7;
  v67 = v8;
  v73 = 0;
  v58 = 0;
  if ( v8 )
  {
    v73 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v8 + 72) == a3 )
    {
      v58 = 1;
      v73 = *(_QWORD *)(v8 + 64) == (_QWORD)a2;
    }
  }
  v9 = *((_QWORD *)a2 + 18);
  v68 = v9;
  v74 = 0;
  v59 = 0;
  if ( v9 )
  {
    v74 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v9 + 72) == a3 )
    {
      v59 = 1;
      v74 = *(_QWORD *)(v9 + 64) == (_QWORD)a2;
    }
  }
  v10 = *((_QWORD *)a2 + 19);
  v69 = v10;
  v75 = 0;
  v60 = 0;
  if ( v10 )
  {
    v75 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v10 + 72) == a3 )
    {
      v60 = 1;
      v75 = *(_QWORD *)(v10 + 64) == (_QWORD)a2;
    }
  }
  v11 = *((_QWORD *)a2 + 20);
  v70 = (_QWORD *)v11;
  v76 = 0;
  v61 = 0;
  if ( v11 )
  {
    v76 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    if ( *(struct VIDMM_RECYCLE_RANGE **)(v11 + 72) == a3 )
    {
      v61 = 1;
      v76 = *(_QWORD *)(v11 + 64) == (_QWORD)a2;
    }
  }
  v71 = (_QWORD *)*((_QWORD *)a2 + 16);
  v72 = *((_QWORD *)a3 + 15);
  ++**((_QWORD **)this + 10);
  v12 = 0;
  v63 = *((_DWORD *)a2 + 20);
  while ( 1 )
  {
    v13 = *((_QWORD *)v4 + 15);
    v14 = 0LL;
    if ( v13 != *((_QWORD *)v4 + 9) + 72LL )
      v14 = (struct VIDMM_RECYCLE_RANGE *)(v13 - 120);
    if ( (unsigned int)(v7 - 3) <= 2 )
    {
      v15 = *((_QWORD *)v4 + 13);
      v16 = (_QWORD *)((char *)v4 + 104);
      if ( *(struct VIDMM_RECYCLE_RANGE **)(v15 + 8) != (struct VIDMM_RECYCLE_RANGE *)((char *)v4 + 104)
        || (v17 = (_QWORD *)*((_QWORD *)v4 + 14), (_QWORD *)*v17 != v16) )
      {
        __fastfail(3u);
      }
      *v17 = v15;
      *(_QWORD *)(v15 + 8) = v17;
      *v16 = 0LL;
      v18 = *((_DWORD *)v4 + 16);
      *((_QWORD *)v4 + 14) = 0LL;
      *((_QWORD *)v4 + 12) = 0LL;
      if ( v18 == 5 )
      {
        v19 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 5);
        v20 = _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
                v19);
      }
      else
      {
        if ( (unsigned int)(v18 - 3) > 1 )
          goto LABEL_27;
        v19 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 5);
        v20 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v19);
      }
      if ( (__int64)(v19 + v20) < 0 && g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
LABEL_27:
    if ( v12 )
      VIDMM_RECYCLE_RANGE::AccumulateZeroingState(v4, (enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *)&v63);
    else
      v12 = 1;
    v21 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    v22 = *(_QWORD *)(v21 + 8);
    if ( (byte_1C00769C2 & 2) != 0 )
      McTemplateK0p_EtwWriteTransfer(v21, &EventRecycleRangeDestroy, v7, v4);
    WdLogSingleEntry1(4LL, v4);
    v23 = *((_QWORD *)v4 + 9);
    v24 = *(_QWORD **)(v23 + 136);
    if ( v24 )
    {
      v25 = *v24 + 144LL * v24[1];
      *(_DWORD *)v25 = 1;
      *(_QWORD *)(v25 + 8) = v4;
      RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v25 + 16), 0LL);
      ++*(_QWORD *)(*(_QWORD *)(v23 + 136) + 8LL);
      v26 = *(_QWORD *)(v23 + 136);
      if ( *(_QWORD *)(v26 + 8) == *(_QWORD *)(v26 + 48) )
      {
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_BYTE *)(*(_QWORD *)(v23 + 136) + 16LL) = 1;
      }
    }
    v27 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v4 + 9);
    --*(_QWORD *)v27;
    IsEnabledDeviceUsage = Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
    v29 = *(_QWORD *)v27;
    if ( IsEnabledDeviceUsage )
    {
      if ( v29 )
        goto LABEL_41;
      v30 = *((_QWORD *)v27 + 1) == 0LL;
    }
    else
    {
      v30 = v29 == 0;
    }
    if ( v30 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v27);
LABEL_41:
    *((_BYTE *)v4 + 168) = 1;
    v31 = *(unsigned int *)(v22 + 1616);
    if ( (unsigned int)v31 >= 4 )
    {
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v22 + 1312), v4);
    }
    else
    {
      *(_QWORD *)(v22 + 8 * v31 + 1624) = v4;
      ++*(_DWORD *)(v22 + 1616);
    }
    if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
      --*(_DWORD *)(v22 + 1688);
    if ( v4 == a3 )
      break;
    v7 = v62;
    v4 = v14;
  }
  v32 = (_QWORD *)*((_QWORD *)this + 10);
  v33 = *(_QWORD *)(v32[4] + 8LL);
  v34 = *(_DWORD *)(v33 + 1616);
  if ( v34 )
  {
    v35 = (unsigned int)(v34 - 1);
    v36 = *(_QWORD **)(v33 + 8 * v35 + 1624);
    *(_QWORD *)(v33 + 8 * v35 + 1624) = 0LL;
    --*(_DWORD *)(v33 + 1616);
  }
  else
  {
    v36 = ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v33 + 1312));
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
  {
    if ( v36 )
    {
      ++*(_DWORD *)(v33 + 1688);
LABEL_56:
      v36[4] = v65;
      v36[5] = v66;
      *((_DWORD *)v36 + 6) = 0;
      v36[9] = v32;
      *((_DWORD *)v36 + 16) = 0;
      v36[11] = 3LL;
      v36[12] = 0LL;
      ++*v32;
      LeastSignificantBit = RtlFindLeastSignificantBit(v36[4]);
      if ( LeastSignificantBit < 0 )
        v38 = 0LL;
      else
        v38 = 1LL << LeastSignificantBit;
      v36[7] = v38;
      v39 = v36[9];
      v36[6] = 0LL;
      *((_DWORD *)v36 + 20) = 0;
      v36[13] = 0LL;
      v36[14] = 0LL;
      v36[15] = 0LL;
      v36[16] = 0LL;
      v36[17] = 0LL;
      v36[18] = 0LL;
      v36[19] = 0LL;
      v36[20] = 0LL;
      *((_BYTE *)v36 + 168) = 0;
      v40 = *(_QWORD **)(v39 + 136);
      if ( v40 )
      {
        v41 = *v40 + 144LL * v40[1];
        *(_DWORD *)v41 = 0;
        *(_QWORD *)(v41 + 8) = v36;
        RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v41 + 16), 0LL);
        ++*(_QWORD *)(*(_QWORD *)(v39 + 136) + 8LL);
        v42 = *(_QWORD *)(v39 + 136);
        if ( *(_QWORD *)(v42 + 8) == *(_QWORD *)(v42 + 48) )
        {
          *(_QWORD *)(v42 + 8) = 0LL;
          *(_BYTE *)(*(_QWORD *)(v39 + 136) + 16LL) = 1;
        }
      }
    }
  }
  else if ( v36 )
  {
    goto LABEL_56;
  }
  v43 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 10);
  --*(_QWORD *)v43;
  v44 = Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
  v45 = *(_QWORD *)v43;
  if ( v44 )
  {
    if ( !v45 )
    {
      v46 = *((_QWORD *)v43 + 1) == 0LL;
      goto LABEL_66;
    }
  }
  else
  {
    v46 = v45 == 0;
LABEL_66:
    if ( v46 )
      VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v43);
  }
  v47 = v68;
  v48 = v69;
  v49 = v70;
  *((_DWORD *)v36 + 23) = v64;
  *((_DWORD *)v36 + 20) = v63;
  v50 = v67;
  v36[17] = v67;
  *((_DWORD *)v36 + 16) = v62;
  v36[18] = v47;
  v36[19] = v48;
  v36[20] = v49;
  if ( v73 )
    *(_QWORD *)(v50 + 64) = v36;
  if ( v58 )
    *(_QWORD *)(v50 + 72) = v36;
  if ( v74 )
    *(_QWORD *)(v47 + 64) = v36;
  if ( v59 )
    *(_QWORD *)(v47 + 72) = v36;
  if ( v75 )
    *(_QWORD *)(v48 + 64) = v36;
  if ( v60 )
    *(_QWORD *)(v48 + 72) = v36;
  if ( v76 )
    v49[8] = v36;
  if ( v61 )
    v49[9] = v36;
  v51 = v71;
  v36[16] = v71;
  *v51 = v36 + 15;
  v52 = v72;
  v36[15] = v72;
  *(_QWORD *)(v52 + 8) = v36 + 15;
  if ( v62 - 3 <= 1 )
  {
    v53 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL);
    v36[12] = *(_QWORD *)(v53 + 1576) + (unsigned int)dword_1C007647C;
    v54 = v36 + 13;
    v49 = *(_QWORD **)(v53 + 1552);
    if ( *v49 != v53 + 1544 )
      __fastfail(3u);
    *v54 = v53 + 1544;
    v36[14] = v49;
    *v49 = v54;
    *(_QWORD *)(v53 + 1552) = v54;
    if ( !_InterlockedExchange((volatile __int32 *)(v53 + 1536), 1) && !*(_DWORD *)(v53 + 1584) )
      KeSetTimer((PKTIMER)(v53 + 1376), (LARGE_INTEGER)-2000000LL, (PKDPC)(v53 + 1440));
    v55 = v36[5] - v36[4];
    if ( (__int64)(v55 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v55)) < 0
      && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
  }
  else if ( v62 == 5 )
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
      (struct VIDMM_RECYCLE_RANGE *)v36);
  }
  if ( (byte_1C00769C2 & 2) != 0 )
  {
    v56 = *((_QWORD *)this + 10);
    v57 = *(_QWORD *)(v56 + 32);
    McTemplateK0pppppppqq_EtwWriteTransfer(
      v57,
      v56,
      (__int64)v49,
      **(_QWORD **)(*(_QWORD *)(v57 + 8) + 8LL),
      v36,
      v56,
      *(_QWORD *)(v56 + 56),
      v57,
      v36[4],
      v36[5],
      *(_DWORD *)v57,
      *((_DWORD *)v36 + 16));
  }
}
