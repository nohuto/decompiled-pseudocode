/*
 * XREFs of ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800D44F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B5CC (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C876C (-Release@CShapePtr@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionGeometry::GetShapeDataCore(
        CRegionGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v4; // esi
  void *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rcx

  v4 = 0;
  v6 = operator new(0x60uLL);
  v8 = (__int64)v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x60uLL);
    *(_QWORD *)v8 = &CRegionShape::`vftable';
    *(_QWORD *)(v8 + 16) = v8 + 24;
    *(_DWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 88) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 17);
    v10 = (*((_QWORD *)this + 18) - v9) >> 4;
    if ( v10 )
    {
      CRegionShape::BuildFromRects(v8, v9, v10);
    }
    else
    {
      **(_DWORD **)(v8 + 16) = 0;
      v12 = *(_QWORD *)(v8 + 88);
      *(_QWORD *)(v8 + 88) = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v8;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v4;
}
