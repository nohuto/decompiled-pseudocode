/*
 * XREFs of ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E00F4
 * Callers:
 *     ?GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DC460 (-GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180051B20 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180051B68 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180054E94 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800577C0 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180057AA8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180067490 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180092A8C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180094C7C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180094CBC (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180094D28 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801DF64C (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::GenerateDrawList(
        CParticleEmitterVisual *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int DrawList; // eax
  struct CDrawListPrimitive *v9; // rcx
  int ParticlesPrimitive; // ebx
  bool v11; // bl
  unsigned int i; // edi
  _BYTE *v13; // rsi
  __int64 v14; // rcx
  CGeometryOnlyDrawListBrush *v15; // r8
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  CGeometryOnlyDrawListBrush *v18; // rax
  __int128 v19; // xmm1
  int v20; // r9d
  __int64 v21; // rdi
  __int64 v22; // rdi
  int v23; // eax
  struct CDrawListPrimitive *v24; // rdx
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // r8d
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  struct CDrawListPrimitive *v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v32; // [rsp+40h] [rbp-C0h]
  CGeometryOnlyDrawListBrush *v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v34[2])(_QWORD, __int64); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+70h] [rbp-90h]
  _BYTE v37[3]; // [rsp+BCh] [rbp-44h]
  _BYTE v38[72]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v39; // [rsp+108h] [rbp+8h]
  struct CDrawListEntry **v40[5]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v41; // [rsp+138h] [rbp+38h]
  __int64 v42; // [rsp+140h] [rbp+40h]

  v33 = 0LL;
  v34[0] = 0LL;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v38, a2, a3);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v40);
  v36 = 0;
  v35 = 0LL;
  *(_WORD *)v37 = 1;
  v37[2] = 0;
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v38);
  DrawList = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 90) + 320LL))(
               *((_QWORD *)this + 90),
               a2,
               a3);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v30 = 252;
    goto LABEL_39;
  }
  DrawList = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 90) + 328LL))(
               *((_QWORD *)this + 90),
               v38);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v30 = 253;
    goto LABEL_39;
  }
  v11 = 0;
  for ( i = 0; i < v39; ++i )
  {
    v13 = *(_BYTE **)&v38[8 * i + 40];
    if ( v13 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)&v38[8 * i + 40], 3LL) )
      {
        ParticlesPrimitive = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147467259, 0x108u, 0LL);
        goto LABEL_41;
      }
      v11 = v11 || v13[52];
    }
  }
  *(_WORD *)&v37[1] = 257;
  v37[0] = 0;
  if ( !v11 )
  {
    v31[1] = 0LL;
    v31[0] = (struct CDrawListPrimitive *)&v33;
    v32 = 1;
    ParticlesPrimitive = CGeometryOnlyDrawListBrush::Create(&v31[1]);
    if ( v32 )
    {
      v9 = v31[0];
      v15 = *(CGeometryOnlyDrawListBrush **)v31[0];
      *(_QWORD *)v31[0] = v31[1];
      if ( v15 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v15, 1, (unsigned int)v15);
    }
    if ( ParticlesPrimitive < 0 )
    {
      v30 = 279;
LABEL_22:
      v20 = ParticlesPrimitive;
LABEL_40:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, v20, v30, 0LL);
      goto LABEL_41;
    }
    width = a3->width;
    height = a3->height;
    v18 = v33;
    v31[0] = 0LL;
    v31[1] = (struct CDrawListPrimitive *)__PAIR64__(LODWORD(height), LODWORD(width));
    v19 = *(_OWORD *)v31;
    *((_BYTE *)v33 + 52) = 1;
    *((_DWORD *)v18 + 12) = 50529027;
    *((_OWORD *)v18 + 2) = v19;
    *(_QWORD *)&v35 = v33;
  }
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)v38,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v35,
               (struct CDrawListEntryBuilder *)v40);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v30 = 287;
LABEL_39:
    v20 = DrawList;
    goto LABEL_40;
  }
  if ( (unsigned int)((v42 - (__int64)v41) >> 3) != 1 )
  {
    ParticlesPrimitive = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v41, 0LL, 0, -2147467259, 0x122u, 0LL);
    goto LABEL_41;
  }
  v21 = (*v41 + 16LL) & -(__int64)(*v41 != 0LL);
  if ( v21 )
    v22 = v21 - 16;
  else
    v22 = 0LL;
  v23 = *(_DWORD *)(v22 + 168);
  if ( (v23 & 8) != 0 )
    *(_DWORD *)(v22 + 168) = v23 & 0xFFFFFFF7;
  v24 = *(struct CDrawListPrimitive **)(v22 + 184);
  v31[0] = (struct CDrawListPrimitive *)v34;
  v31[1] = 0LL;
  v32 = 1;
  ParticlesPrimitive = CParticleEmitterVisual::CreateParticlesPrimitive(this, v24, &v31[1]);
  if ( v32 )
  {
    v9 = v31[0];
    v25 = *(__int64 (__fastcall ****)(_QWORD, __int64))v31[0];
    *(_QWORD *)v31[0] = v31[1];
    if ( v25 )
      std::default_delete<CShape>::operator()((__int64)v9, v25);
  }
  if ( ParticlesPrimitive < 0 )
  {
    v30 = 300;
    goto LABEL_22;
  }
  CHWDrawListEntry::ReplacePrimitive((_QWORD *)v22, v31, (__int64)v34, *(_QWORD *)(v22 + 64) + 8LL);
  if ( v31[0] )
    std::default_delete<CShape>::operator()(v26, (__int64 (__fastcall ***)(_QWORD, __int64))v31[0]);
  CDrawListCache::Update(a4, a2, v40);
LABEL_41:
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v40);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v38);
  if ( v34[0] )
    std::default_delete<CShape>::operator()(v27, v34[0]);
  if ( v33 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v33, 1, v28);
  return (unsigned int)ParticlesPrimitive;
}
