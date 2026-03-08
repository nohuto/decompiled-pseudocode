/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00A2160
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00E86E8 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00B2114 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        bool a7,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a8)
{
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v12; // r15
  __int64 v13; // r13
  int v14; // r11d
  unsigned int v15; // r10d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  _QWORD *v18; // r14
  int v19; // r8d
  char v20; // r8
  unsigned __int8 v21; // bp
  unsigned int v22; // edx
  __int64 v23; // r9
  unsigned int v24; // r11d
  unsigned int v25; // r8d
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v26; // r8
  UINT Value; // eax
  int v28; // r10d
  int v29; // r9d
  unsigned __int8 result; // al
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  unsigned int i; // edx
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  char v50; // [rsp+98h] [rbp+10h]

  v9 = a2;
  v10 = *((_QWORD *)this + 5028);
  v12 = 1616LL * a2;
  v13 = v10 + v12;
  if ( (~*(_DWORD *)(v10 + v12 + 24) & a3) != 0 )
  {
    WdLogSingleEntry1(1LL, 12648LL);
    DxgkLogInternalTriageEvent(v31, 0x40000LL);
    return 0;
  }
  v14 = 0;
  v15 = *(_DWORD *)(v13 + 28);
  v16 = a3;
  v17 = v15;
  v18 = (_QWORD *)((char *)this + 3712);
  if ( (~*(_DWORD *)(v10 + 24) & a3) != 0 )
  {
    v20 = 0;
  }
  else
  {
    if ( a3 )
    {
      v19 = 1;
      do
      {
        if ( (v16 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*v18 + 8LL * v17) + 80LL) & 0x1001) == 0 )
          v14 |= v19;
        v19 = __ROL4__(v19, 1);
        ++v17;
        v16 >>= 1;
      }
      while ( v16 );
      if ( v14 )
      {
        v20 = 0;
        v16 = a3;
        v50 = 0;
        goto LABEL_12;
      }
    }
    v20 = 1;
    v16 = a3;
  }
  v50 = v20;
  if ( a3 )
  {
LABEL_12:
    while ( (v16 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*v18 + 8LL * v15) + 80LL) & 0x1001) == 0 )
    {
      ++v15;
      v16 >>= 1;
      if ( !v16 )
        goto LABEL_42;
    }
    v21 = 1;
  }
  else
  {
LABEL_42:
    v21 = 0;
  }
  if ( (a4->Value & 0x40000) != 0 && !v20 )
  {
    WdLogSingleEntry1(1LL, 12662LL);
    DxgkLogInternalTriageEvent(v32, 0x40000LL);
    return 0;
  }
  if ( (a4->Value & 0x20000) != 0 )
  {
    if ( VIDMM_GLOBAL::VerifySegmentSet(this, v9, a3, 0x10000u, 0LL) )
    {
      if ( v21 )
      {
        WdLogSingleEntry1(1LL, 12709LL);
        DxgkLogInternalTriageEvent(v35, 0x40000LL);
        return 0;
      }
      v36 = *(_DWORD *)(v13 + 28);
      for ( i = a3; i; i >>= 1 )
      {
        if ( (i & 1) != 0 )
        {
          v38 = *(_QWORD *)(*v18 + 8LL * v36);
          if ( a5 > *(_QWORD *)(v38 + 392) )
          {
            WdLogSingleEntry1(1LL, 12722LL);
            DxgkLogInternalTriageEvent(v40, 0x40000LL);
            return 0;
          }
          if ( (*(_DWORD *)(v38 + 80) & 0x20) != 0 )
          {
            WdLogSingleEntry1(1LL, 12727LL);
            DxgkLogInternalTriageEvent(v39, 0x40000LL);
            return 0;
          }
        }
        ++v36;
      }
    }
    else
    {
      v33 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2808LL) + 344 * v9 + 16);
      if ( (v33 & 0x10) == 0 )
      {
        WdLogSingleEntry1(1LL, 12701LL);
        DxgkLogInternalTriageEvent(v34, 0x40000LL);
        return 0;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v33);
      if ( *(_DWORD *)(*((_QWORD *)this + 3) + 412LL) != 1297040209 )
        a4->Value &= ~0x20000u;
    }
  }
  v22 = a3;
  v23 = *((_QWORD *)this + 5028);
  v24 = *(_DWORD *)(v23 + v12 + 28);
  v25 = v24;
  if ( (~*(_DWORD *)(v23 + v12 + 24) & a3) != 0 || !a3 )
  {
LABEL_25:
    v26 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( (v22 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*v18 + 8LL * v25) + 80LL) & 0x20) == 0 )
    {
      ++v25;
      v22 >>= 1;
      if ( !v22 )
        goto LABEL_25;
    }
    if ( !a6 )
    {
      WdLogSingleEntry1(1LL, 12749LL);
      DxgkLogInternalTriageEvent(v41, 0x40000LL);
      return 0;
    }
    if ( a6 < a5 )
    {
      WdLogSingleEntry1(1LL, 12755LL);
      DxgkLogInternalTriageEvent(v42, 0x40000LL);
      return 0;
    }
    v26 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  Value = a4->Value;
  if ( (a4->Value & 0x800004) == 4 )
  {
    if ( *((_BYTE *)this + 7089) )
    {
      v28 = 0;
      if ( (~*(_DWORD *)(v23 + 24) & a3) != 0 )
        goto LABEL_72;
      if ( a3 )
      {
        v29 = 1;
        do
        {
          if ( (a3 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*v18 + 8LL * v24) + 80LL) & 0x10) == 0 )
            v28 |= v29;
          v29 = __ROL4__(v29, 1);
          ++v24;
          a3 >>= 1;
        }
        while ( a3 );
        if ( v28 )
        {
LABEL_72:
          WdLogSingleEntry1(1LL, 12785LL);
          DxgkLogInternalTriageEvent(v43, 0x40000LL);
          return 0;
        }
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 8) == 0 && !v50 )
    {
      WdLogSingleEntry1(1LL, 12792LL);
      DxgkLogInternalTriageEvent(v44, 0x40000LL);
      return 0;
    }
  }
  if ( (Value & 0x20000001) != 0x20000001 || v50 || (Value & 0x200) != 0 )
  {
    if ( (Value & 0x100000) == 0 || v50 )
    {
      if ( (Value & 0x4000) == 0 || v50 )
      {
        if ( a7 && (Value & 1) != 0 && !v50 )
        {
          WdLogSingleEntry1(1LL, 12829LL);
          DxgkLogInternalTriageEvent(v48, 0x40000LL);
          return 0;
        }
        else
        {
          result = 1;
          *(_DWORD *)v26 = (2 * v21) | v50 & 0xFD | *(_DWORD *)v26 & 0xFFFFFFFC;
        }
      }
      else
      {
        WdLogSingleEntry1(1LL, 12817LL);
        DxgkLogInternalTriageEvent(v47, 0x40000LL);
        return 0;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 12810LL);
      DxgkLogInternalTriageEvent(v46, 0x40000LL);
      return 0;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 12803LL);
    DxgkLogInternalTriageEvent(v45, 0x40000LL);
    return 0;
  }
  return result;
}
