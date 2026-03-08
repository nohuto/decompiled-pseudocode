/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C033C530
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        int a4)
{
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  UINT v5; // r11d
  UINT MoveRectCount; // edi
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  int *p_bottom; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ecx
  int v15; // r9d
  __int64 x; // rbp
  __int64 v17; // rsi
  int v18; // edx
  int v19; // ecx
  UINT v20; // r9d
  const RECT *i; // rbx
  LONG *p_right; // rdi
  LONG v23; // edx
  LONG *v24; // rcx
  __int64 bottom; // rax
  const wchar_t *v26; // r9
  __int64 v27; // rcx
  __int64 top; // rdx
  __int64 left; // r8
  __int64 v30; // rbx
  __int64 v31; // rdi

  pPresentRegions = a2->pPresentRegions;
  v5 = 0;
  MoveRectCount = pPresentRegions->MoveRectCount;
  pMoveRects = pPresentRegions->pMoveRects;
  if ( MoveRectCount )
  {
    p_bottom = &pMoveRects->DestRect.bottom;
    while ( 1 )
    {
      v12 = *(p_bottom - 1);
      v13 = *(p_bottom - 3);
      if ( (int)v12 <= (int)v13 )
        break;
      v14 = *p_bottom;
      v15 = *(p_bottom - 2);
      if ( *p_bottom <= v15 || (int)v12 > a3 || v14 > a4 || (int)v13 < 0 || v15 < 0 )
        break;
      x = pMoveRects->SourcePoint.x;
      v17 = *(p_bottom - 4);
      v18 = x + v12 - v13;
      v19 = v17 + v14 - v15;
      if ( v18 > a3 || v19 > a4 || (int)x < 0 || (int)v17 < 0 )
      {
        v30 = v19;
        v31 = v18;
        WdLogSingleEntry5(2LL, -1073741811LL, x, v17, v18, v19);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x Invalid Source Point [0x%I64x 0x%I64x : 0x%I64x 0x%I64x] in Move Rect",
          -1073741811LL,
          x,
          v17,
          v31,
          v30);
        return 3221225485LL;
      }
      ++v5;
      ++pMoveRects;
      p_bottom += 6;
      if ( v5 >= MoveRectCount )
        goto LABEL_14;
    }
    WdLogSingleEntry5(2LL, -1073741811LL, v13, *(p_bottom - 2), v12, *p_bottom);
    bottom = *p_bottom;
    v26 = L"0x%I64x Invalid Dest Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x] in Move Rect";
    v27 = *(p_bottom - 1);
    top = *(p_bottom - 2);
    left = *(p_bottom - 3);
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v26, -1073741811LL, left, top, v27, bottom);
    return 3221225485LL;
  }
  else
  {
LABEL_14:
    v20 = 0;
    for ( i = pPresentRegions->pDirtyRects; v20 < pPresentRegions->DirtyRectCount; ++i )
    {
      p_right = &i->right;
      if ( (a2->Flags.Value & 0x10000000) != 0 )
      {
        v23 = *p_right;
        if ( *p_right < i->left )
          goto LABEL_18;
        v24 = &i->right;
        if ( i->bottom < i->top )
          goto LABEL_18;
      }
      else
      {
        v24 = &i->right;
        v23 = *p_right;
        if ( *p_right <= i->left || i->bottom <= i->top )
        {
LABEL_18:
          WdLogSingleEntry5(2LL, -1073741811LL, i->left, i->top, v23, i->bottom);
          bottom = i->bottom;
          v26 = L"0x%I64x Invalid Dirty Rect [0x%I64x 0x%I64x 0x%I64x 0x%I64x]";
          v27 = *p_right;
          top = i->top;
          left = i->left;
          goto LABEL_21;
        }
      }
      v23 = *v24;
      p_right = v24;
      if ( *v24 > a3 || i->bottom > a4 || i->left < 0 || i->top < 0 )
        goto LABEL_18;
      ++v20;
    }
    return 0LL;
  }
}
