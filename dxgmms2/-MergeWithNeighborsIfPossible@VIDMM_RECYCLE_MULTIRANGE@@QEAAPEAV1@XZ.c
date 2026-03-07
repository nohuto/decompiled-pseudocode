// write access to const memory has been detected, the output may be wrong!
struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        VIDMM_RECYCLE_MULTIRANGE *this)
{
  _QWORD *v1; // r14
  _QWORD *v3; // r9
  int v4; // ecx
  VIDMM_RECYCLE_MULTIRANGE *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rax
  _QWORD *v10; // r8
  VIDMM_RECYCLE_MULTIRANGE *v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // r15d
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  VIDMM_RECYCLE_MULTIRANGE *v27; // rbx
  int v28; // r12d
  __int64 v29; // r9
  __int64 v31; // rbp
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // r13
  void *v37; // rcx
  __int64 v38; // r15
  _QWORD *v39; // rdi
  __int64 v40; // rbp
  int IsEnabledDeviceUsage; // eax
  VIDMM_RECYCLE_BLOCK *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  void *v45; // rcx
  __int64 v46; // rsi
  int v47; // eax
  VIDMM_RECYCLE_BLOCK *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rsi
  int v52; // eax
  __int64 v53; // rax
  int v54; // ecx
  int v55; // ecx
  CCHAR LeastSignificantBit; // al
  __int64 v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rcx
  __int64 v62; // rcx
  _QWORD *v63; // rdi
  __int64 v64; // r8
  __int64 v65; // rax
  _QWORD *v66; // rsi
  struct _RTL_BALANCED_NODE *v67; // rdi
  struct _RTL_BALANCED_NODE *v68; // rax
  struct VIDMM_RECYCLE_RANGE *v69; // rdi
  _QWORD v70[2]; // [rsp+30h] [rbp-58h] BYREF
  char v71; // [rsp+40h] [rbp-48h]
  int v72; // [rsp+90h] [rbp+8h]
  __int64 v73; // [rsp+98h] [rbp+10h]
  int v74; // [rsp+98h] [rbp+10h]
  __int64 v75; // [rsp+A0h] [rbp+18h]

  v1 = (_QWORD *)*((_QWORD *)this + 10);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 54);
  v5 = 0LL;
  v72 = v4;
  v6 = *((_QWORD *)this + 8);
  v7 = *(_QWORD *)(v6 + 128);
  if ( v7 != *(_QWORD *)(v6 + 72) + 72LL )
    v3 = (_QWORD *)(v7 - 120);
  if ( v3 )
  {
    if ( v4 )
    {
      v8 = v4 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v5 = (VIDMM_RECYCLE_MULTIRANGE *)v3[19];
        }
        else
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
        }
      }
      else
      {
        v5 = (VIDMM_RECYCLE_MULTIRANGE *)v3[18];
      }
    }
    else
    {
      v5 = (VIDMM_RECYCLE_MULTIRANGE *)v3[17];
    }
  }
  v9 = *((_QWORD *)this + 9);
  v10 = 0LL;
  v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 120);
  if ( v12 != *(_QWORD *)(v9 + 72) + 72LL )
    v10 = (_QWORD *)(v12 - 120);
  if ( v10 )
  {
    v13 = *((_DWORD *)this + 54);
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v11 = (VIDMM_RECYCLE_MULTIRANGE *)v10[19];
        }
        else
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
        }
      }
      else
      {
        v11 = (VIDMM_RECYCLE_MULTIRANGE *)v10[18];
      }
    }
    else
    {
      v11 = (VIDMM_RECYCLE_MULTIRANGE *)v10[17];
    }
  }
  if ( v5 )
  {
    if ( v11 )
    {
      v15 = *((_DWORD *)this + 22);
      v73 = *((_QWORD *)v5 + 8);
      v75 = *((_QWORD *)v11 + 9);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v15, v5);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v15, this);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v15, v11);
      v16 = *((_QWORD *)v5 + 4);
      v17 = *((_QWORD *)v11 + 5);
      v18 = *(_QWORD *)(v1[4] + 8LL);
      VIDMM_RECYCLE_MULTIRANGE::Destroy(v5);
      v19 = *(unsigned int *)(v18 + 1620);
      if ( (unsigned int)v19 >= 4 )
      {
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v18 + 1320), v5);
      }
      else
      {
        *(_QWORD *)(v18 + 8 * v19 + 1656) = v5;
        ++*(_DWORD *)(v18 + 1620);
      }
      if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
        --*(_DWORD *)(v18 + 1688);
      v20 = *(_QWORD *)(v1[4] + 8LL);
      VIDMM_RECYCLE_MULTIRANGE::Destroy(this);
      v21 = *(unsigned int *)(v20 + 1620);
      if ( (unsigned int)v21 >= 4 )
      {
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v20 + 1320), this);
      }
      else
      {
        *(_QWORD *)(v20 + 8 * v21 + 1656) = this;
        ++*(_DWORD *)(v20 + 1620);
      }
      if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
        --*(_DWORD *)(v20 + 1688);
      v22 = *(_QWORD *)(v1[4] + 8LL);
      VIDMM_RECYCLE_MULTIRANGE::Destroy(v11);
      v23 = *(unsigned int *)(v22 + 1620);
      if ( (unsigned int)v23 >= 4 )
      {
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v22 + 1320), v11);
      }
      else
      {
        *(_QWORD *)(v22 + 8 * v23 + 1656) = v11;
        ++*(_DWORD *)(v22 + 1620);
      }
      if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
        --*(_DWORD *)(v22 + 1688);
      v24 = *(_QWORD *)(v1[4] + 8LL);
      v25 = *(_DWORD *)(v24 + 1620);
      if ( v25 )
      {
        v26 = (unsigned int)(v25 - 1);
        v27 = *(VIDMM_RECYCLE_MULTIRANGE **)(v24 + 8 * v26 + 1656);
        *(_QWORD *)(v24 + 8 * v26 + 1656) = 0LL;
        --*(_DWORD *)(v24 + 1620);
      }
      else
      {
        v27 = (VIDMM_RECYCLE_MULTIRANGE *)ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v24 + 1320));
      }
      if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
      {
        if ( !v27 )
          goto LABEL_43;
        ++*(_DWORD *)(v24 + 1688);
      }
      else if ( !v27 )
      {
LABEL_43:
        v28 = v72;
LABEL_44:
        *((_QWORD *)v27 + 8) = v73;
        *((_QWORD *)v27 + 9) = v75;
        VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(v27);
        VIDMM_RECYCLE_HEAP::AddMultirangeToTree((_QWORD *)v1[4], v15, (__int64)v27);
        goto LABEL_139;
      }
      v29 = v16;
      v28 = v72;
      VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v27, v72, (__int64)v1, v29, v17);
      goto LABEL_44;
    }
    v11 = this;
  }
  else
  {
    if ( !v11 )
      return this;
    v5 = this;
  }
  v74 = *((_DWORD *)this + 22);
  v31 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
  WdLogSingleEntry2(4LL, v5, v74);
  if ( v74 )
  {
    if ( v74 == 1 )
    {
      v32 = v31 + 56;
    }
    else
    {
      if ( v74 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v74, 0LL);
        goto LABEL_60;
      }
      v32 = v31 + 64;
    }
  }
  else
  {
    v32 = v31 + 48;
  }
  RtlAvlRemoveNode(v32, v5);
LABEL_60:
  *((_DWORD *)v5 + 22) = 3;
  v33 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
  WdLogSingleEntry2(4LL, v11, v74);
  if ( v74 )
  {
    if ( v74 == 1 )
    {
      v34 = v33 + 56;
    }
    else
    {
      if ( v74 != 2 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 16LL, v74, 0LL);
        goto LABEL_68;
      }
      v34 = v33 + 64;
    }
  }
  else
  {
    v34 = v33 + 48;
  }
  RtlAvlRemoveNode(v34, v11);
LABEL_68:
  v35 = *((_QWORD *)v11 + 5);
  v36 = *((_QWORD *)v11 + 9);
  *((_DWORD *)v11 + 22) = 3;
  v37 = (void *)*((_QWORD *)v5 + 12);
  v38 = *((_QWORD *)v5 + 4);
  v39 = (_QWORD *)*((_QWORD *)v5 + 8);
  v40 = *(_QWORD *)(v1[4] + 8LL);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *((_QWORD *)v5 + 12) = 0LL;
  }
  IsEnabledDeviceUsage = Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
  v42 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v5 + 10);
  if ( IsEnabledDeviceUsage )
  {
    VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v42, 1, (__int64)v5);
    VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(*((VIDMM_RECYCLE_BLOCK **)v5 + 10));
    *((_BYTE *)v5 + 232) = 1;
    *((_QWORD *)v5 + 28) = 0LL;
  }
  else
  {
    VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(v42);
    v43 = *((_QWORD *)v5 + 10);
    *((_BYTE *)v5 + 232) = 1;
    *((_QWORD *)v5 + 28) = 0LL;
    VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v43, 1, (__int64)v5);
  }
  v44 = *(unsigned int *)(v40 + 1620);
  if ( (unsigned int)v44 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v40 + 1320), v5);
  }
  else
  {
    *(_QWORD *)(v40 + 8 * v44 + 1656) = v5;
    ++*(_DWORD *)(v40 + 1620);
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
    --*(_DWORD *)(v40 + 1688);
  v45 = (void *)*((_QWORD *)v11 + 12);
  v46 = *(_QWORD *)(v1[4] + 8LL);
  if ( v45 )
  {
    ExFreePoolWithTag(v45, 0);
    *((_QWORD *)v11 + 12) = 0LL;
  }
  v47 = Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
  v48 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v11 + 10);
  if ( v47 )
  {
    VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent((__int64)v48, 1, (__int64)v11);
    VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(*((VIDMM_RECYCLE_BLOCK **)v11 + 10));
    *((_BYTE *)v11 + 232) = 1;
    *((_QWORD *)v11 + 28) = 0LL;
  }
  else
  {
    VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(v48);
    v49 = *((_QWORD *)v11 + 10);
    *((_BYTE *)v11 + 232) = 1;
    *((_QWORD *)v11 + 28) = 0LL;
    VIDMM_RECYCLE_BLOCK::NotifyMultirangeEvent(v49, 1, (__int64)v11);
  }
  v50 = *(unsigned int *)(v46 + 1620);
  if ( (unsigned int)v50 >= 4 )
  {
    ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v46 + 1320), v11);
  }
  else
  {
    *(_QWORD *)(v46 + 8 * v50 + 1656) = v11;
    ++*(_DWORD *)(v46 + 1620);
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
    --*(_DWORD *)(v46 + 1688);
  v51 = *(_QWORD *)(v1[4] + 8LL);
  v52 = *(_DWORD *)(v51 + 1620);
  if ( v52 )
  {
    v53 = (unsigned int)(v52 - 1);
    v27 = *(VIDMM_RECYCLE_MULTIRANGE **)(v51 + 8 * v53 + 1656);
    *(_QWORD *)(v51 + 8 * v53 + 1656) = 0LL;
    --*(_DWORD *)(v51 + 1620);
  }
  else
  {
    v27 = (VIDMM_RECYCLE_MULTIRANGE *)ExAllocateFromLookasideListEx(*(PLOOKASIDE_LIST_EX *)(v51 + 1320));
  }
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage() )
  {
    if ( !v27 )
      goto LABEL_93;
    ++*(_DWORD *)(v51 + 1688);
  }
  else if ( !v27 )
  {
LABEL_93:
    v28 = v72;
    goto LABEL_94;
  }
  WdLogSingleEntry1(4LL, v27);
  *((_QWORD *)v27 + 5) = v35;
  v28 = v72;
  *((_QWORD *)v27 + 4) = v38;
  *((_DWORD *)v27 + 54) = v72;
  *((_DWORD *)v27 + 6) = 1;
  *((_QWORD *)v27 + 8) = 0LL;
  *((_QWORD *)v27 + 9) = 0LL;
  *((_QWORD *)v27 + 10) = v1;
  *((_QWORD *)v27 + 6) = v38;
  *((_WORD *)v27 + 64) = 0;
  ++v1[1];
  LeastSignificantBit = RtlFindLeastSignificantBit(*((_QWORD *)v27 + 4));
  if ( LeastSignificantBit < 0 )
    v57 = 0LL;
  else
    v57 = 1LL << LeastSignificantBit;
  *((_QWORD *)v27 + 7) = v57;
  v58 = *((_QWORD *)v27 + 10);
  *((_QWORD *)v27 + 11) = 3LL;
  *((_QWORD *)v27 + 12) = 0LL;
  *((_QWORD *)v27 + 13) = 0LL;
  *((_QWORD *)v27 + 14) = 0LL;
  *((_QWORD *)v27 + 15) = 0LL;
  *((_BYTE *)v27 + 130) = 0;
  *((_QWORD *)v27 + 17) = 0LL;
  *((_QWORD *)v27 + 18) = 0LL;
  *((_QWORD *)v27 + 24) = 0LL;
  *((_WORD *)v27 + 76) = 0;
  *((_QWORD *)v27 + 20) = 0LL;
  *((_QWORD *)v27 + 21) = 0LL;
  *((_QWORD *)v27 + 23) = 0LL;
  *((_QWORD *)v27 + 22) = 0LL;
  *((_QWORD *)v27 + 25) = 0LL;
  *((_QWORD *)v27 + 26) = 0LL;
  *((_BYTE *)v27 + 232) = 0;
  *((_QWORD *)v27 + 28) = 0LL;
  v59 = *(_QWORD *)(v58 + 136);
  if ( v59 )
  {
    v60 = *(_QWORD *)(v59 + 24) + 144LL * *(_QWORD *)(v59 + 32);
    *(_DWORD *)v60 = 0;
    *(_QWORD *)(v60 + 8) = v27;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v60 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v58 + 136) + 32LL);
    v61 = *(_QWORD *)(v58 + 136);
    if ( *(_QWORD *)(v61 + 32) == *(_QWORD *)(v61 + 48) )
    {
      *(_QWORD *)(v61 + 32) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v58 + 136) + 40LL) = 1;
    }
  }
LABEL_94:
  *((_QWORD *)v27 + 8) = v39;
  *((_QWORD *)v27 + 9) = v36;
  while ( 1 )
  {
    v54 = *((_DWORD *)v27 + 54);
    if ( v54 )
    {
      v55 = v54 - 1;
      if ( v55 )
      {
        if ( v55 == 1 )
        {
          v39[19] = v27;
        }
        else
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
        }
      }
      else
      {
        v39[18] = v27;
      }
    }
    else
    {
      v39[17] = v27;
    }
    if ( v39 == *((_QWORD **)v27 + 9) )
      break;
    v62 = v39[15];
    if ( v62 == v39[9] + 72LL )
      v39 = 0LL;
    else
      v39 = (_QWORD *)(v62 - 120);
  }
  v63 = (_QWORD *)v1[4];
  WdLogSingleEntry2(4LL, v27, v74);
  v65 = *((_QWORD *)v27 + 7);
  v70[0] = *((_QWORD *)v27 + 5) - *((_QWORD *)v27 + 4);
  v70[1] = v65;
  v71 = 0;
  switch ( v74 )
  {
    case 0:
      v66 = v63 + 6;
      LOBYTE(v64) = 0;
      v67 = (struct _RTL_BALANCED_NODE *)v63[6];
      if ( v67 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v70, v67) < 0 )
          {
            if ( !v67->Children[0] )
              goto LABEL_136;
            v67 = v67->Children[0];
          }
          if ( !v67->Children[1] )
            break;
          v67 = v67->Children[1];
        }
LABEL_121:
        LOBYTE(v64) = 1;
      }
      goto LABEL_137;
    case 1:
      v66 = v63 + 7;
      LOBYTE(v64) = 0;
      v67 = (struct _RTL_BALANCED_NODE *)v63[7];
      if ( v67 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v70, v67) >= 0 )
          {
            if ( !v67->Children[1] )
              goto LABEL_121;
            v67 = v67->Children[1];
          }
          if ( !v67->Children[0] )
            break;
          v67 = v67->Children[0];
        }
LABEL_136:
        LOBYTE(v64) = 0;
      }
      goto LABEL_137;
    case 2:
      v66 = v63 + 8;
      LOBYTE(v64) = 0;
      v67 = (struct _RTL_BALANCED_NODE *)v63[8];
      if ( v67 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v70, v67) < 0 )
          {
            v68 = v67->Children[0];
            if ( !v67->Children[0] )
              goto LABEL_136;
          }
          else
          {
            v68 = v67->Children[1];
            if ( !v68 )
              goto LABEL_121;
          }
          v67 = v68;
        }
      }
LABEL_137:
      RtlAvlInsertNodeEx(v66, v67, v64, v27);
      goto LABEL_138;
  }
  g_DxgMmsBugcheckExportIndex = 1;
  WdLogSingleEntry5(0LL, 270LL, 52LL, 15LL, v74, 0LL);
LABEL_138:
  *((_DWORD *)v27 + 22) = v74;
LABEL_139:
  if ( *v1 == 1LL && !v28 )
  {
    v69 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v27 + 8);
    if ( !*((_DWORD *)v69 + 16) )
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v1[4], 2LL, v27);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v1[4] + 8LL), v27);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v1[4] + 8LL), v69);
    }
  }
  return v27;
}
