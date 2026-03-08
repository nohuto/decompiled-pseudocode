/*
 * XREFs of ?AddInvalidRects@CDDisplayRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1801E4F40
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180049844 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800FDBD0 (-AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CDDisplayRenderTarget::AddInvalidRects(
        CDDisplayRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  FastRegion::Internal::CRgnData **v4; // rbx
  __int64 v5; // rdx
  FastRegion::Internal::CRgnData *v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-50h]
  _DWORD *v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+40h] [rbp-38h]
  _DWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 14) )
  {
    v4 = (FastRegion::Internal::CRgnData **)((char *)this + 18488);
    if ( *((_BYTE *)this + 69) )
    {
      CRenderTarget::AddInvalidRects(this, a2, a3);
    }
    else if ( *(_DWORD *)*v4 )
    {
      FastRegion::Internal::CRgnData::BeginIterator(*v4, (struct FastRegion::CRegion::Iterator *)v7);
      while ( (unsigned __int64)v9 < v8 )
      {
        v12[1] = *v9;
        v12[3] = v9[2];
        v5 = 2 * v11;
        v12[0] = *(_DWORD *)(v10 + 4 * v5);
        v12[2] = *(_DWORD *)(v10 + 4 * v5 + 4);
        CDirtyRegion::Add((__int64)a3, (__int64)v12);
        FastRegion::Internal::CRgnData::StepIterator(v6, (struct FastRegion::CRegion::Iterator *)v7);
      }
    }
    *(_DWORD *)*v4 = 0;
  }
}
