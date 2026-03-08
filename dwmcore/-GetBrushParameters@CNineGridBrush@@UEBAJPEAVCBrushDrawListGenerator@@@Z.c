/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18002E360
 * Callers:
 *     <none>
 * Callees:
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002ECEC (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18002EEE0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18002EF40 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800803C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800945A4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180094614 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18021EFC8 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  const struct D2D_SIZE_F *v2; // r15
  float v3; // xmm0_4
  struct CDrawingContext *v6; // rdx
  struct CGeometryOnlyDrawListBrush *v7; // rbx
  char v8; // r12
  CComponentTransform2D *v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edi
  int v13; // r9d
  int v14; // xmm1_4
  unsigned int v15; // xmm0_4
  int v16; // r15d
  CNineGridDrawListBrush *v17; // rcx
  struct CGeometryOnlyDrawListBrush *v18; // rdx
  const struct D2D1::Matrix3x2F *v19; // rcx
  __int64 v20; // rcx
  CGeometryOnlyDrawListBrush *v22; // rcx
  FLOAT v23; // xmm1_4
  int v24; // xmm0_4
  CGeometryOnlyDrawListBrush *v25; // rax
  unsigned int v26; // ecx
  FLOAT width; // xmm1_4
  unsigned int v28; // xmm0_4
  __int128 v29; // xmm1
  __int64 v30; // xmm1_8
  __int64 v31; // rdx
  CGeometryOnlyDrawListBrush *v32[2]; // [rsp+30h] [rbp-99h] BYREF
  struct CGeometryOnlyDrawListBrush *v33[2]; // [rsp+40h] [rbp-89h] BYREF
  char v34; // [rsp+50h] [rbp-79h]
  __int128 v35; // [rsp+58h] [rbp-71h] BYREF
  __int128 v36; // [rsp+68h] [rbp-61h] BYREF
  __int64 v37; // [rsp+78h] [rbp-51h]
  __int128 v38; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v39[16]; // [rsp+90h] [rbp-39h] BYREF
  int v40; // [rsp+A0h] [rbp-29h]
  __int128 v41; // [rsp+A4h] [rbp-25h]
  CGeometryOnlyDrawListBrush *v42; // [rsp+B8h] [rbp-11h]

  v2 = (const struct D2D_SIZE_F *)((char *)a2 + 8);
  v3 = *((float *)this + 25) * *((float *)this + 24);
  v6 = *(struct CDrawingContext **)a2;
  v7 = 0LL;
  v33[0] = 0LL;
  *(float *)&v35 = v3;
  v8 = 0;
  *((float *)&v35 + 1) = *((float *)this + 27) * *((float *)this + 26);
  *((float *)&v35 + 2) = *((float *)this + 29) * *((float *)this + 28);
  *((float *)&v35 + 3) = *((float *)this + 31) * *((float *)this + 30);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v39, v6, v2);
  if ( !*((_BYTE *)this + 153) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 56LL))(
           *((_QWORD *)this + 11),
           181LL) )
    {
      v9 = *(CComponentTransform2D **)(*((_QWORD *)this + 11) + 120LL);
      if ( v9 )
      {
        if ( !CComponentTransform2D::IsIdentity(v9) )
        {
          v12 = -2147022876;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
            McTemplateU0q_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT,
              2147944420LL);
          MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_180354720, 2u, -2147022876, 0x268u, 0LL);
          goto LABEL_43;
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 312LL))(*((_QWORD *)this + 11), v39);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180354720, 2u, v10, 0x26Du, 0LL);
LABEL_43:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_19;
  }
  v32[0] = v42;
  v42 = 0LL;
  std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(v33, v32);
  if ( v32[0] )
    ((void (*)(void))std::default_delete<CDrawListBrush>::operator())();
  v7 = v33[0];
  if ( v33[0] )
  {
    if ( *((_BYTE *)v33[0] + 52) )
    {
      v8 = 1;
      v14 = *((_DWORD *)this + 26);
      LODWORD(v32[0]) = *((_DWORD *)this + 24);
      v15 = *((_DWORD *)this + 28);
      HIDWORD(v32[0]) = v14;
      v32[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 30), v15);
      v38 = *(_OWORD *)v32;
    }
    else if ( *((_BYTE *)this + 152) )
    {
      width = v2->width;
      v8 = 1;
      v32[0] = 0LL;
      v38 = v35;
      v28 = *((_DWORD *)a2 + 3);
      *((_BYTE *)v33[0] + 52) = 1;
      v32[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(v28, LODWORD(width));
      v29 = *(_OWORD *)v32;
      *((_DWORD *)v7 + 12) = 50529027;
      *((_OWORD *)v7 + 2) = v29;
    }
    v16 = v40;
    if ( !v8 )
      goto LABEL_16;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 20) = v41;
    if ( !*((_BYTE *)this + 152) )
    {
      v16 = v40;
      goto LABEL_16;
    }
    v32[0] = 0LL;
    v33[0] = (struct CGeometryOnlyDrawListBrush *)v32;
    v38 = v35;
    v33[1] = 0LL;
    v34 = 1;
    v12 = CGeometryOnlyDrawListBrush::Create(&v33[1]);
    if ( v34 )
    {
      v22 = *(CGeometryOnlyDrawListBrush **)v33[0];
      *(_QWORD *)v33[0] = v33[1];
      if ( v22 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v22, 1u);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, &dword_180354720, 2u, v12, 0x27Eu, 0LL);
      if ( v32[0] )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v32[0], 1u);
      goto LABEL_43;
    }
    v23 = v2->width;
    v24 = *((_DWORD *)a2 + 3);
    v25 = v32[0];
    v33[0] = 0LL;
    *(FLOAT *)&v33[1] = v23;
    *((_BYTE *)v32[0] + 52) = 1;
    *((_DWORD *)v25 + 12) = 50529027;
    HIDWORD(v33[1]) = v24;
    *((_OWORD *)v25 + 2) = *(_OWORD *)v33;
    v16 = v40;
    v33[0] = v32[0];
  }
  LOBYTE(v13) = *((_BYTE *)this + 152);
  *(_QWORD *)&v36 = v32;
  v32[0] = 0LL;
  *((_QWORD *)&v36 + 1) = 0LL;
  LOBYTE(v37) = 1;
  v12 = CNineGridDrawListBrush::Create(
          (unsigned int)v33,
          (unsigned int)&v38,
          (unsigned int)&v35,
          v13,
          (__int64)&v36 + 8);
  if ( (_BYTE)v37 )
  {
    v17 = *(CNineGridDrawListBrush **)v36;
    *(_QWORD *)v36 = *((_QWORD *)&v36 + 1);
    if ( v17 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v17, 1u);
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v17, &dword_180354720, 2u, v12, 0x2AEu, 0LL);
    if ( v32[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v32[0], 1u);
    v7 = v33[0];
    goto LABEL_43;
  }
  v18 = v33[0];
  v7 = v32[0];
  v32[0] = 0LL;
  v33[0] = v7;
  if ( v18 )
  {
    ((void (*)(void))std::default_delete<CDrawListBrush>::operator())();
    if ( v32[0] )
      CNineGridDrawListBrush::`scalar deleting destructor'(v32[0], 1u);
  }
LABEL_16:
  if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 128)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v36, (struct CGeometryOnlyDrawListBrush *)((char *)v7 + 8), v19);
    v30 = v37;
    *(_OWORD *)v31 = v36;
    *(_QWORD *)(v31 + 16) = v30;
  }
  CBrushDrawListGenerator::AttachInput(a2, 0LL, v33);
  v7 = v33[0];
  v12 = 0;
  *((_DWORD *)a2 + 4) = v16;
LABEL_19:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v39);
  if ( v7 )
    std::default_delete<CDrawListBrush>::operator()(v20, v7);
  return (unsigned int)v12;
}
