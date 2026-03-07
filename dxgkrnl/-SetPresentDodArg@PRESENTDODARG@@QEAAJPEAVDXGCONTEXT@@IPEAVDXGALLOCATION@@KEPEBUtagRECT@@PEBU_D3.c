__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        unsigned int a5,
        char a6,
        const struct tagRECT *a7,
        const struct _D3DKMT_PRESENT *a8,
        const struct _DXGKARG_PRESENT *a9,
        struct COREDEVICEACCESS *a10)
{
  const struct _D3DKMT_PRESENT *v10; // r14
  __int64 v12; // r15
  D3DKMT_PRESENTFLAGS *p_Flags; // rdi
  D3DKMT_HANDLE hSource; // eax
  __int64 v16; // r9
  int v17; // edx
  DXGDEVICE *v18; // r9
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdi
  DXGDEVICE *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdi
  __int64 Format; // rdx
  bool v30; // zf
  unsigned int v31; // eax
  const struct _DXGKARG_PRESENT *v32; // r15
  unsigned int DirtyRectCount; // ecx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const RECT *pDirtyRects; // r14
  const struct tagRECT *v36; // rdi
  int left; // r9d
  int right; // r8d
  int top; // r10d
  int bottom; // r11d
  int v41; // edx
  unsigned int v42; // edx
  void *v43; // rax
  unsigned int MoveRectCount; // edx
  void *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdx
  UINT Height; // eax
  void *v50; // rax
  struct _D3DKMT_UNLOCK v51; // [rsp+58h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v52; // [rsp+68h] [rbp-59h] BYREF
  struct _D3DKMT_LOCK v53; // [rsp+98h] [rbp-29h] BYREF
  int v54; // [rsp+100h] [rbp+3Fh] BYREF
  struct DXGALLOCATION *v55; // [rsp+110h] [rbp+4Fh]

  v55 = a4;
  v30 = *((_BYTE *)a2 + 442) == 0;
  v10 = a8;
  v12 = a3;
  memset(&v52, 0, sizeof(v52));
  p_Flags = &a8->Flags;
  if ( v30 )
  {
    if ( (p_Flags->Value & 4) != 0 )
      hSource = a8->hSource;
    else
      hSource = a8->hDestination;
    v16 = *((_QWORD *)a2 + 2);
    memset(&v53, 0, sizeof(v53));
    v54 = hSource;
    v53.hAllocation = hSource;
    v53.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 9;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL)) )
      v53.Flags.Value = v17 | 4;
    v19 = DXGDEVICE::Lock(v18, &v53, a10);
    v20 = v19;
    if ( v19 < 0 )
    {
      v21 = (__int64)v55;
      WdLogSingleEntry5(2LL, v19, a2, *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL), v53.hAllocation, v55);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DOD Present 0x%I64x Lock failed 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
        v20,
        (__int64)a2,
        *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL),
        v53.hAllocation,
        v21);
      return (unsigned int)v20;
    }
    v51.hDevice = 0;
    *((_QWORD *)this + 1) = v53.pData;
    v23 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
    v51.phAllocations = (const D3DKMT_HANDLE *)&v54;
    v51.NumAllocations = 1;
    DXGDEVICE::Unlock(v23, &v51, 0);
    v24 = (__int64)v55;
    v25 = *((_QWORD *)a2 + 2);
    v52.hAllocation = *(HANDLE *)(*((_QWORD *)v55 + 6) + 16LL);
    v27 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v25 + 16), &v52, v26);
    if ( v27 < 0 )
    {
      v28 = v27;
      WdLogSingleEntry5(2LL, v27, a2, *(unsigned int *)(v24 + 16), v24, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
        v28,
        (__int64)a2,
        *(unsigned int *)(v24 + 16),
        v24,
        v12);
      return -1073741811LL;
    }
    Format = v52.Format;
    *(_DWORD *)this = v12;
    if ( (int)Format > 32 )
    {
      if ( (_DWORD)Format != 33 )
      {
        if ( (_DWORD)Format == 41 )
        {
          *((_DWORD *)this + 4) = 1;
        }
        else
        {
          if ( (_DWORD)Format != 113 )
          {
            v30 = (_DWORD)Format == 119;
LABEL_24:
            if ( !v30 )
            {
              WdLogSingleEntry2(2LL, -1073741811LL, Format);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DOD Present : 0x%I64x is returned for invalid primary format 0x%I64x",
                -1073741811LL,
                v52.Format,
                0LL,
                0LL,
                0LL);
              return 3221225485LL;
            }
            goto LABEL_28;
          }
          *((_DWORD *)this + 4) = 8;
        }
LABEL_29:
        v31 = a5;
        goto LABEL_31;
      }
    }
    else if ( (_DWORD)Format != 32 )
    {
      if ( (_DWORD)Format == 20 )
      {
        *((_DWORD *)this + 4) = 3;
        goto LABEL_29;
      }
      if ( (_DWORD)Format != 21 && (_DWORD)Format != 22 )
      {
        if ( (_DWORD)Format != 23 )
        {
          v30 = (_DWORD)Format == 31;
          goto LABEL_24;
        }
        *((_DWORD *)this + 4) = 2;
        goto LABEL_29;
      }
    }
LABEL_28:
    *((_DWORD *)this + 4) = 4;
    goto LABEL_29;
  }
  *((_QWORD *)this + 1) = 0LL;
  v31 = 0;
LABEL_31:
  v32 = a9;
  DirtyRectCount = 0;
  *((_DWORD *)this + 5) = v31;
  *((_DWORD *)this + 6) = a6 & 1;
  pPresentRegions = v10->pPresentRegions;
  pDirtyRects = 0LL;
  v54 = p_Flags->Value & 4;
  if ( v54 )
  {
    if ( !pPresentRegions )
    {
      v36 = 0LL;
      goto LABEL_37;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = v32->SubRectCnt;
    pDirtyRects = v32->pDstSubRects;
  }
  v36 = a7;
LABEL_37:
  if ( !v36 )
    goto LABEL_52;
  left = v36->left;
  right = v36->right;
  if ( v36->left < right )
  {
    top = v36->top;
    bottom = v36->bottom;
    if ( top < bottom && right <= (int)v52.Width && bottom <= (int)v52.Height && left >= 0 && top >= 0 )
    {
      v41 = 0;
      if ( !DirtyRectCount )
        goto LABEL_52;
      while ( left < pDirtyRects[v41].left
           || right > pDirtyRects[v41].right
           || top < pDirtyRects[v41].top
           || bottom > pDirtyRects[v41].bottom )
      {
        if ( ++v41 >= DirtyRectCount )
          goto LABEL_52;
      }
    }
  }
  v36 = 0LL;
LABEL_52:
  v42 = DirtyRectCount + 1;
  if ( !v36 )
    v42 = DirtyRectCount;
  if ( v54 )
  {
    if ( pPresentRegions && (v42 || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = v42;
      if ( v42 )
      {
        v43 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v42);
        *((_QWORD *)this + 6) = v43;
        if ( !v43 )
        {
LABEL_60:
          WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 10));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"PRESENTDODARG 0x%I64x: failed to allocate 0x%I64x dirty rects",
            (__int64)this,
            *((unsigned int *)this + 10),
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v43, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v36 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v36;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v45 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        v46 = *((unsigned int *)this + 7);
        *((_QWORD *)this + 4) = v45;
        if ( !v45 )
        {
          WdLogSingleEntry2(2LL, this, (unsigned int)v46);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"PRESENTDODARG 0x%I64x: failed to allocate 0x%I64x move rects",
            (__int64)this,
            *((unsigned int *)this + 7),
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        memmove(v45, pPresentRegions->pMoveRects, 24 * v46);
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_QWORD *)this + 22) = 0LL;
      v47 = *((_QWORD *)this + 6);
      if ( *((_BYTE *)a2 + 442) )
      {
        v48 = *((_QWORD *)v55 + 6);
        *(_DWORD *)(v47 + 8) = *(_DWORD *)(v48 + 72);
        Height = *(_DWORD *)(v48 + 76);
      }
      else
      {
        *(_DWORD *)(v47 + 8) = v52.Width;
        Height = v52.Height;
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = v42;
  v50 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v42);
  *((_QWORD *)this + 6) = v50;
  if ( !v50 )
    goto LABEL_60;
  memmove(v50, v32->pDstSubRects, 16LL * v32->SubRectCnt);
  if ( v36 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v32->SubRectCnt) = *v36;
  return 0LL;
}
