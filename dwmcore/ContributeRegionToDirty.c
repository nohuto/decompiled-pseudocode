/*
 * XREFs of ContributeRegionToDirty @ 0x180297600
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800D6F70 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180049894 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall ContributeRegionToDirty(FastRegion::Internal::CRgnData **a1, __int64 a2, CMILMatrix *a3)
{
  __int64 v5; // rdx
  __int64 i; // rax
  int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  unsigned int v9; // ebx
  _BYTE v11[8]; // [rsp+20h] [rbp-29h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-21h]
  _DWORD *v13; // [rsp+30h] [rbp-19h]
  __int64 v14; // [rsp+38h] [rbp-11h]
  int v15; // [rsp+40h] [rbp-9h]
  _DWORD v16[4]; // [rsp+50h] [rbp+7h]
  __int128 v17; // [rsp+60h] [rbp+17h] BYREF
  _DWORD v18[4]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  FastRegion::Internal::CRgnData::BeginIterator(*a1, (struct FastRegion::CRegion::Iterator *)v11);
  while ( (unsigned __int64)v13 < v12 )
  {
    v16[1] = *v13;
    v16[3] = v13[2];
    v5 = 2 * v15;
    v16[0] = *(_DWORD *)(v14 + 4 * v5);
    v16[2] = *(_DWORD *)(v14 + 4 * v5 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)&v18[i] = (float)(int)v16[i];
    v17 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a3, (struct MilRectF *)v18, (float *)&v17);
    v7 = CDirtyRegion::Add(a2, (__int64)&v17);
    v9 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A2,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)v7);
      return v9;
    }
    FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
  }
  return 0LL;
}
