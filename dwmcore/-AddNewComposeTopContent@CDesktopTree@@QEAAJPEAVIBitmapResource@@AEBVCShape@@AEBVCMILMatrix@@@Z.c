/*
 * XREFs of ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18001D508
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800498F0 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix.c)
 * Callees:
 *     ??$make_unique@VCComposeTop@@$$V$0A@@std@@YA?AV?$unique_ptr@VCComposeTop@@U?$default_delete@VCComposeTop@@@std@@@0@XZ @ 0x18001D5B0 (--$make_unique@VCComposeTop@@$$V$0A@@std@@YA-AV-$unique_ptr@VCComposeTop@@U-$default_delete@VCCo.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x18001D60C (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     ??1CComposeTop@@QEAA@XZ @ 0x18001FEC0 (--1CComposeTop@@QEAA@XZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800627D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180092FF0 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800DF1AC (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopTree::AddNewComposeTopContent(
        CDesktopTree *this,
        struct IBitmapResource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  CComposeTop **v4; // rbx
  CComposeTop *v6; // rdi
  CComposeTop **v9; // rax
  unsigned int v10; // ecx
  CComposeTop *v11; // rdx
  CComposeTop *v12; // rdi
  CComposeTop *v13; // rdi
  unsigned int v14; // ebx
  CComposeTop **v16; // rsi
  CComposeTop *v17; // rdx
  int v18; // eax
  unsigned int v19; // ecx
  CComposeTop *v20; // rdx
  unsigned int v21; // ecx
  CComposeTop *v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = (CComposeTop **)((char *)this + 4744);
  v6 = (CComposeTop *)*((_QWORD *)this + 593);
  if ( v6 )
    goto LABEL_8;
  v9 = (CComposeTop **)std::make_unique<CComposeTop,,0>(&v22);
  if ( v4 != v9 )
  {
    v11 = *v9;
    *v9 = 0LL;
    v12 = *v4;
    *v4 = v11;
    if ( v12 )
    {
      CComposeTop::~CComposeTop(v12);
      operator delete(v12, 0xA8uLL);
    }
  }
  v13 = v22;
  if ( v22 )
  {
    CComposeTop::~CComposeTop(v22);
    operator delete(v13, 0xA8uLL);
  }
  v6 = *v4;
  if ( *v4 )
  {
LABEL_8:
    v14 = 0;
    if ( !ShapeBoundsEmpty(a3) )
    {
      v16 = (CComposeTop **)((char *)v6 + 16);
      if ( *(_QWORD *)v6 != GetCurrentFrameId() )
      {
        v17 = *v16;
        *v16 = 0LL;
        if ( v17 )
          std::default_delete<CShape>::operator()();
        *(_QWORD *)v6 = GetCurrentFrameId();
      }
      v18 = CShape::CopyShape(a3, 0LL, &v22);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x33u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v14, 0x76u, 0LL);
      }
      else
      {
        v20 = *v16;
        *v16 = v22;
        if ( v20 )
          std::default_delete<CShape>::operator()();
        wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=((char *)v6 + 8, a2);
        *(_OWORD *)((char *)v6 + 24) = *(_OWORD *)a4;
        *(_OWORD *)((char *)v6 + 40) = *((_OWORD *)a4 + 1);
        *(_OWORD *)((char *)v6 + 56) = *((_OWORD *)a4 + 2);
        *(_OWORD *)((char *)v6 + 72) = *((_OWORD *)a4 + 3);
        *((_DWORD *)v6 + 22) = *((_DWORD *)a4 + 16);
        *(_OWORD *)((char *)v6 + 92) = *(_OWORD *)a4;
        *(_OWORD *)((char *)v6 + 108) = *((_OWORD *)a4 + 1);
        *(_OWORD *)((char *)v6 + 124) = *((_OWORD *)a4 + 2);
        *(_OWORD *)((char *)v6 + 140) = *((_OWORD *)a4 + 3);
        *((_DWORD *)v6 + 39) = *((_DWORD *)a4 + 16);
        CMILMatrix::Invert((CComposeTop *)((char *)v6 + 92));
      }
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x71u, 0LL);
  }
  return v14;
}
