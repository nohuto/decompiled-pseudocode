/*
 * XREFs of ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180242048
 * Callers:
 *     ?GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18023E320 (-GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007CF6C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094528 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800945A4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180094614 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800946C0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1800EB2E0 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180117650 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@@Z @ 0x1801FED3C (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1802415C4 (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::GenerateDrawList(
        CParticleEmitterVisual *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int DrawList; // eax
  struct CGeometryOnlyDrawListBrush *v9; // rcx
  __int64 v10; // r9
  int ParticlesPrimitive; // ebx
  bool v12; // bl
  unsigned int i; // edi
  _BYTE *v14; // rsi
  __int64 v15; // rcx
  CGeometryOnlyDrawListBrush *v16; // r8
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  CGeometryOnlyDrawListBrush *v19; // rax
  __int128 v20; // xmm1
  int v21; // r9d
  __int64 v22; // rdi
  struct CDrawListPrimitive *v23; // rdx
  __int64 (__fastcall ***v24)(_QWORD, __int64); // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  struct CGeometryOnlyDrawListBrush *v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v30; // [rsp+40h] [rbp-C0h]
  CGeometryOnlyDrawListBrush *v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v32[2])(_QWORD, __int64); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+BCh] [rbp-44h]
  char v36; // [rsp+C0h] [rbp-40h]
  _BYTE v37[72]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v38; // [rsp+118h] [rbp+18h]
  _BYTE v39[88]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v40; // [rsp+178h] [rbp+78h]
  __int64 v41; // [rsp+180h] [rbp+80h]

  v31 = 0LL;
  v32[0] = 0LL;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v37, a2, a3);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v39);
  v34 = 0;
  v33 = 0LL;
  v35 = 257;
  v36 = 0;
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v37);
  DrawList = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 101) + 312LL))(
               *((_QWORD *)this + 101),
               v37);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v28 = 245;
    goto LABEL_32;
  }
  v12 = 0;
  for ( i = 0; i < v38; ++i )
  {
    v14 = *(_BYTE **)&v37[8 * i + 40];
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v14 + 8LL))(*(_QWORD *)&v37[8 * i + 40], 3LL) )
      {
        ParticlesPrimitive = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147467259, 0x100u, 0LL);
        goto LABEL_34;
      }
      v12 = v12 || v14[52];
    }
  }
  HIWORD(v35) = 257;
  LOBYTE(v35) = 0;
  if ( !v12 )
  {
    v29[1] = 0LL;
    v29[0] = (struct CGeometryOnlyDrawListBrush *)&v31;
    v30 = 1;
    ParticlesPrimitive = CGeometryOnlyDrawListBrush::Create(&v29[1]);
    if ( v30 )
    {
      v9 = v29[0];
      v16 = *(CGeometryOnlyDrawListBrush **)v29[0];
      *(_QWORD *)v29[0] = v29[1];
      if ( v16 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v16, 1);
    }
    if ( ParticlesPrimitive < 0 )
    {
      v28 = 271;
LABEL_21:
      v21 = ParticlesPrimitive;
LABEL_33:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v21, v28, 0LL);
      goto LABEL_34;
    }
    width = a3->width;
    height = a3->height;
    v19 = v31;
    v29[0] = 0LL;
    v29[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
    v20 = *(_OWORD *)v29;
    *((_BYTE *)v31 + 52) = 1;
    *((_DWORD *)v19 + 12) = 50529027;
    *((_OWORD *)v19 + 2) = v20;
    *(_QWORD *)&v33 = v31;
  }
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)v37,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v33,
               (struct CDrawListEntryBuilder *)v39,
               v10);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v28 = 279;
LABEL_32:
    v21 = DrawList;
    goto LABEL_33;
  }
  if ( (unsigned int)((v41 - (__int64)v40) >> 3) != 1 )
  {
    ParticlesPrimitive = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, -2147467259, 0x11Au, 0LL);
    goto LABEL_34;
  }
  v22 = *v40;
  v29[0] = (struct CGeometryOnlyDrawListBrush *)v32;
  v29[1] = 0LL;
  v30 = 1;
  v23 = *(struct CDrawListPrimitive **)(v22 + 64);
  *(_DWORD *)(v22 + 48) &= ~8u;
  ParticlesPrimitive = CParticleEmitterVisual::CreateParticlesPrimitive(this, v23, &v29[1]);
  if ( v30 )
  {
    v24 = *(__int64 (__fastcall ****)(_QWORD, __int64))v29[0];
    *(_QWORD *)v29[0] = v29[1];
    if ( v24 )
      std::default_delete<CDrawListPrimitive>::operator()((__int64)v9, v24);
  }
  if ( ParticlesPrimitive < 0 )
  {
    v28 = 292;
    goto LABEL_21;
  }
  CHWDrawListEntry::ReplacePrimitive(v22, (__int64 *)v29, (__int64 *)v32);
  if ( v29[0] )
    std::default_delete<CDrawListPrimitive>::operator()(v25, (__int64 (__fastcall ***)(_QWORD, __int64))v29[0]);
  CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v39);
LABEL_34:
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v39);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v37);
  if ( v32[0] )
    std::default_delete<CDrawListPrimitive>::operator()(v26, v32[0]);
  if ( v31 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v31, 1);
  return (unsigned int)ParticlesPrimitive;
}
