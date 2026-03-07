__int64 __fastcall DXGPRESENT::CopyPresentArgs(DXGPRESENT *this, struct DXGCONTEXT *a2, struct _D3DKMT_PRESENT *a3)
{
  char CurrentThreadPreviousMode; // al
  bool v7; // r13
  _OWORD *p_DirtyRectCount; // rdx
  __int64 SubRectCnt; // rdx
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // r12d
  RECT *v13; // rax
  const RECT *v14; // r12
  const RECT *pSrcSubRects; // rdx
  D3DKMT_PRESENT_RGNS *v16; // r13
  unsigned __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned int v22; // r15d
  unsigned int v23; // ecx
  int v24; // eax
  void *v25; // rax
  void *v26; // r12
  struct _D3DKMT_MOVE_RECT *v27; // r11
  char *v28; // rdx
  ULONG64 v29; // rdx
  ULONG64 v30; // r8
  __int64 v31; // r11
  unsigned int Size; // [rsp+50h] [rbp-48h]
  unsigned int Sizea; // [rsp+50h] [rbp-48h]
  struct _D3DKMT_MOVE_RECT *v35; // [rsp+58h] [rbp-40h]
  bool v36; // [rsp+B8h] [rbp+20h]

  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v7 = CurrentThreadPreviousMode == 1;
  v36 = CurrentThreadPreviousMode == 1;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    p_DirtyRectCount = &a3->pPresentRegions->DirtyRectCount;
    if ( CurrentThreadPreviousMode == 1 )
    {
      if ( (unsigned __int64)p_DirtyRectCount >= MmUserProbeAddress )
        p_DirtyRectCount = (_OWORD *)MmUserProbeAddress;
      *((_OWORD *)this + 28) = *p_DirtyRectCount;
      *((_OWORD *)this + 29) = p_DirtyRectCount[1];
    }
    else
    {
      *((_OWORD *)this + 28) = *p_DirtyRectCount;
      *((_OWORD *)this + 29) = p_DirtyRectCount[1];
    }
  }
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v10 = 16 * SubRectCnt;
    v11 = -1;
    if ( (unsigned __int64)(16 * SubRectCnt) <= 0xFFFFFFFF )
      v11 = 16 * SubRectCnt;
    Size = v11;
    v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v10 > 0xFFFFFFFF )
    {
      WdLogSingleEntry4(2LL, (int)v12, a2, SubRectCnt, 16LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x from 0x%I64x due to multiplication overflow 0x%I64d x 0x%I64d",
        (int)v12,
        (__int64)a2,
        a3->SubRectCnt,
        16LL,
        0LL);
      return v12;
    }
    v13 = (RECT *)CCachedData<tagRECT,16>::Get((__int64)this + 480, SubRectCnt);
    v14 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry3(6LL, -1073741801LL, a2, a3->SubRectCnt);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"0x%I64x from 0x%I64x SubRectCnt = 0x%I64d",
        -1073741801LL,
        (__int64)a2,
        a3->SubRectCnt,
        0LL,
        0LL);
      return 3221225495LL;
    }
    pSrcSubRects = a3->pSrcSubRects;
    if ( v7
      && ((const RECT *)((char *)pSrcSubRects + Size) < pSrcSubRects
       || (unsigned __int64)pSrcSubRects + Size > MmUserProbeAddress) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v13, pSrcSubRects, Size);
    a3->pSrcSubRects = v14;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
    v16 = 0LL;
LABEL_46:
    a3->pPresentRegions = v16;
    return 0LL;
  }
  v16 = (D3DKMT_PRESENT_RGNS *)((char *)this + 448);
  v17 = 16LL * *((unsigned int *)this + 112);
  v18 = -1;
  if ( v17 <= 0xFFFFFFFF )
    v18 = 16 * *((_DWORD *)this + 112);
  Sizea = v18;
  v19 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v17 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11584LL);
    return v19;
  }
  v20 = *((unsigned int *)this + 116);
  v21 = 24 * v20;
  v22 = -1;
  if ( (unsigned __int64)(24 * v20) <= 0xFFFFFFFF )
    v22 = 24 * v20;
  v12 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v21 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11592LL);
    return v12;
  }
  v23 = v22 + v18;
  v24 = -1;
  if ( v23 >= v22 )
    v24 = v23;
  v12 = v23 < v22 ? 0xC0000095 : 0;
  if ( v23 < v22 )
  {
    WdLogSingleEntry1(3LL, 11600LL);
    return v12;
  }
  if ( !v24 )
  {
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
    goto LABEL_46;
  }
  v35 = (struct _D3DKMT_MOVE_RECT *)CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 752, v20);
  v25 = CCachedData<tagRECT,16>::Get((__int64)this + 864, v16->DirtyRectCount);
  v26 = v25;
  v27 = v35;
  if ( v35 && v25 )
  {
    if ( v16->DirtyRectCount )
    {
      v28 = (char *)*((_QWORD *)this + 57);
      if ( v36 && (&v28[Sizea] < v28 || (unsigned __int64)&v28[Sizea] > MmUserProbeAddress) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v25, v28, Sizea);
      *((_QWORD *)this + 57) = v26;
      v27 = v35;
    }
    else
    {
      *((_QWORD *)this + 57) = 0LL;
    }
    if ( *((_DWORD *)this + 116) )
    {
      if ( v36 )
      {
        if ( v22 )
        {
          v29 = *((_QWORD *)this + 59);
          v30 = v29 + v22;
          if ( v30 > MmUserProbeAddress || v30 < v29 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(
        *((_DWORD *)this + 116),
        *((const struct _D3DKMT_MOVE_RECT **)this + 59),
        v27);
      *((_QWORD *)this + 59) = v31;
    }
    else
    {
      *((_QWORD *)this + 59) = 0LL;
    }
    goto LABEL_46;
  }
  WdLogSingleEntry1(6LL, 11613LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
    11613LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return -1073741801LL;
}
