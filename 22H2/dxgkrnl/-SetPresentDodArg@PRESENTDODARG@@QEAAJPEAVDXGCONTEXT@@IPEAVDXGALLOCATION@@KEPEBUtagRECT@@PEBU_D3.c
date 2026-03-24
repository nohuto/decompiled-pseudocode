/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FF9E0
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C02FFF9C (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000903C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C0048014 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C0048098 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010C850 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0152CF0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

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
  bool v10; // zf
  const struct _D3DKMT_PRESENT *v11; // rdi
  __int64 v13; // r14
  D3DKMT_HANDLE hSource; // eax
  __int64 v17; // r9
  int v18; // edx
  DXGDEVICE *v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rsi
  _QWORD *v25; // rax
  DXGDEVICE *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  _QWORD *v34; // rax
  D3DDDIFORMAT Format; // eax
  unsigned int v36; // eax
  const RECT *pDirtyRects; // r14
  unsigned int DirtyRectCount; // ecx
  const struct _DXGKARG_PRESENT *v39; // r15
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const struct tagRECT *v41; // rdi
  int left; // r9d
  int right; // r8d
  int top; // r10d
  int bottom; // r11d
  int v46; // edx
  unsigned int v47; // edx
  void *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int MoveRectCount; // edx
  void *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  UINT Height; // eax
  void *v59; // rax
  struct _D3DKMT_UNLOCK v60; // [rsp+28h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v61; // [rsp+38h] [rbp-59h] BYREF
  struct _D3DKMT_LOCK v62; // [rsp+68h] [rbp-29h] BYREF
  int v63; // [rsp+D0h] [rbp+3Fh] BYREF

  v10 = *((_BYTE *)a2 + 457) == 0;
  v11 = a8;
  memset(&v61, 0, sizeof(v61));
  v13 = a3;
  if ( v10 )
  {
    if ( (a8->Flags.Value & 4) != 0 )
      hSource = a8->hSource;
    else
      hSource = a8->hDestination;
    v17 = *((_QWORD *)a2 + 2);
    memset(&v62, 0, sizeof(v62));
    v63 = hSource;
    v62.hAllocation = hSource;
    v62.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 9;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL)) )
      v62.Flags.Value = v18 | 4;
    v20 = DXGDEVICE::Lock(v19, &v62, a10);
    v24 = v20;
    if ( v20 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v25[3] = v24;
      v25[4] = a2;
      v25[5] = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
      v25[6] = v62.hAllocation;
      v25[7] = a4;
      WdLogEvent5_WdError(v25);
      return (unsigned int)v24;
    }
    v60.hDevice = 0;
    *((_QWORD *)this + 1) = v62.pData;
    v27 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
    v60.phAllocations = (const D3DKMT_HANDLE *)&v63;
    v60.NumAllocations = 1;
    DXGDEVICE::Unlock(v27, &v60, 0LL, v23);
    v28 = *((_QWORD *)a2 + 2);
    v61.hAllocation = *(HANDLE *)(*((_QWORD *)a4 + 6) + 16LL);
    v30 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v28 + 16), &v61, v29);
    v33 = v30;
    if ( v30 < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
      v34[3] = v33;
      v34[4] = a2;
      v34[5] = *((unsigned int *)a4 + 4);
      v34[6] = a4;
      v34[7] = v13;
LABEL_11:
      WdLogEvent5_WdError(v34);
      return 3221225485LL;
    }
    Format = v61.Format;
    *(_DWORD *)this = v13;
    if ( Format == D3DDDIFMT_R8G8B8 )
    {
      *((_DWORD *)this + 4) = 3;
      goto LABEL_27;
    }
    if ( Format > D3DDDIFMT_R8G8B8 )
    {
      if ( Format <= D3DDDIFMT_X8R8G8B8 )
        goto LABEL_25;
      if ( Format == D3DDDIFMT_R5G6B5 )
      {
        *((_DWORD *)this + 4) = 2;
        goto LABEL_27;
      }
      if ( Format > D3DDDIFMT_X4R4G4B4 )
      {
        if ( Format > D3DDDIFMT_X8B8G8R8 )
        {
          switch ( Format )
          {
            case D3DDDIFMT_P8:
              *((_DWORD *)this + 4) = 1;
              break;
            case D3DDDIFMT_A16B16G16R16F:
              *((_DWORD *)this + 4) = 8;
              break;
            case D3DDDIFMT_A2B10G10R10_XR_BIAS:
              goto LABEL_25;
            default:
              goto LABEL_21;
          }
LABEL_27:
          v36 = a5;
          goto LABEL_29;
        }
LABEL_25:
        *((_DWORD *)this + 4) = 4;
        goto LABEL_27;
      }
    }
LABEL_21:
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v34[3] = -1073741811LL;
    v34[4] = v61.Format;
    goto LABEL_11;
  }
  *((_QWORD *)this + 1) = 0LL;
  v36 = 0;
LABEL_29:
  *((_DWORD *)this + 5) = v36;
  pDirtyRects = 0LL;
  DirtyRectCount = 0;
  v39 = a9;
  *((_DWORD *)this + 6) = a6 & 1;
  pPresentRegions = v11->pPresentRegions;
  v63 = v11->Flags.Value & 4;
  if ( v63 )
  {
    if ( !pPresentRegions )
    {
      v41 = 0LL;
      goto LABEL_35;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = v39->SubRectCnt;
    pDirtyRects = v39->pDstSubRects;
  }
  v41 = a7;
LABEL_35:
  if ( !v41 )
    goto LABEL_50;
  left = v41->left;
  right = v41->right;
  if ( v41->left < right )
  {
    top = v41->top;
    bottom = v41->bottom;
    if ( top < bottom && right <= (int)v61.Width && bottom <= (int)v61.Height && left >= 0 && top >= 0 )
    {
      v46 = 0;
      if ( !DirtyRectCount )
        goto LABEL_50;
      while ( left < pDirtyRects[v46].left
           || right > pDirtyRects[v46].right
           || top < pDirtyRects[v46].top
           || bottom > pDirtyRects[v46].bottom )
      {
        if ( ++v46 >= DirtyRectCount )
          goto LABEL_50;
      }
    }
  }
  v41 = 0LL;
LABEL_50:
  v47 = DirtyRectCount + 1;
  if ( !v41 )
    v47 = DirtyRectCount;
  if ( v63 )
  {
    if ( pPresentRegions && (v47 || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = v47;
      if ( v47 )
      {
        v48 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v47);
        *((_QWORD *)this + 6) = v48;
        if ( !v48 )
        {
LABEL_58:
          v51 = WdLogNewEntry5_WdError(v50, v49);
          *(_QWORD *)(v51 + 24) = this;
          v52 = *((unsigned int *)this + 10);
LABEL_59:
          *(_QWORD *)(v51 + 32) = v52;
          WdLogEvent5_WdError(v51);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v48, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v41 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v41;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v54 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        *((_QWORD *)this + 4) = v54;
        if ( !v54 )
        {
          v51 = WdLogNewEntry5_WdError(0LL, v55);
          *(_QWORD *)(v51 + 24) = this;
          v52 = *((unsigned int *)this + 7);
          goto LABEL_59;
        }
        memmove(v54, pPresentRegions->pMoveRects, 24LL * *((unsigned int *)this + 7));
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_DWORD *)this + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 0;
      v56 = *((_QWORD *)this + 6);
      if ( *((_BYTE *)a2 + 457) )
      {
        v57 = *((_QWORD *)a4 + 6);
        *(_DWORD *)(v56 + 8) = *(_DWORD *)(v57 + 72);
        Height = *(_DWORD *)(v57 + 76);
      }
      else
      {
        *(_DWORD *)(v56 + 8) = v61.Width;
        Height = v61.Height;
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = v47;
  v59 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v47);
  *((_QWORD *)this + 6) = v59;
  if ( !v59 )
    goto LABEL_58;
  memmove(v59, v39->pDstSubRects, 16LL * v39->SubRectCnt);
  if ( v41 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v39->SubRectCnt) = *v41;
  return 0LL;
}
