/*
 * XREFs of ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x1802B5EC8
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013830 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180244E90 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800107E0 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180010C5C (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?RECTFromD2DRectF@@YA?AUtagRECT@@AEBUD2D_RECT_F@@@Z @ 0x180013A78 (-RECTFromD2DRectF@@YA-AUtagRECT@@AEBUD2D_RECT_F@@@Z.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x18001680C (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1801C06D0 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

const struct CRegion *__fastcall CPrimitiveGroupDrawListGenerator::GetContentRegion(
        CPrimitiveGroupDrawListGenerator *this)
{
  _DWORD *v2; // rax
  void **v3; // rcx
  void **v4; // rcx
  unsigned int i; // edi
  __int64 v7; // r11
  struct tagRECT *v8; // rax
  CRegion *v9; // rcx
  int v10; // eax
  struct tagRECT v11; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v12; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  struct D2D_RECT_F *v14; // [rsp+58h] [rbp-20h]
  const void *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_QWORD *)this + 12) )
  {
    v2 = DefaultHeap::Alloc(0x48uLL);
    if ( v2 )
    {
      *(_QWORD *)v2 = v2 + 2;
      v2[2] = 0;
    }
    v3 = (void **)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v2;
    if ( v3 )
      CRegion::`scalar deleting destructor'(v3, 1);
    if ( *((_QWORD *)this + 12) )
    {
      for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 2) + 8LL); ++i )
      {
        CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v13, i);
        if ( (*(_BYTE *)(v7 + 4) & 2) == 0 && *(_DWORD *)v7 && *(_DWORD *)(v7 + 40) < *((_DWORD *)this + 8) )
        {
          do
          {
            v8 = RECTFromD2DRectF(&v12, v14);
            v9 = (CRegion *)*((_QWORD *)this + 12);
            v11 = *v8;
            v10 = CRegion::TryAddRectangle(v9, &v11);
            if ( v10 < 0 )
              ModuleFailFastForHRESULT(v10, retaddr);
          }
          while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v13) );
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, 0LL, 0, -2147024882, 0x1F6u, 0LL);
      v4 = (void **)*((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = 0LL;
      if ( v4 )
        CRegion::`scalar deleting destructor'(v4, 1);
    }
  }
  return (const struct CRegion *)*((_QWORD *)this + 12);
}
