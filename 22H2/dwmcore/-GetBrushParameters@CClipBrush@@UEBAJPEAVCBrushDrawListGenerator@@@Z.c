/*
 * XREFs of ?GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B7A10
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180007454 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180051B20 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180051B68 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180094ABC (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180094D28 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClipBrush::GetBrushParameters(CClipBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  CGeometryOnlyDrawListBrush *v7; // rcx
  unsigned int v8; // r8d
  struct CGeometryOnlyDrawListBrush *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // rax
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  unsigned int v17; // r8d
  __int128 v18; // xmm0
  CGeometryOnlyDrawListBrush *v20; // [rsp+30h] [rbp-20h] BYREF
  struct CGeometryOnlyDrawListBrush *v21[2]; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+48h] [rbp-8h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 328LL))(*((_QWORD *)this + 10));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xDEu, 0LL);
    goto LABEL_28;
  }
  if ( !*((_DWORD *)a2 + 18) )
  {
    v20 = 0LL;
    v21[1] = 0LL;
    v21[0] = (struct CGeometryOnlyDrawListBrush *)&v20;
    v22 = 1;
    v6 = CGeometryOnlyDrawListBrush::Create(&v21[1]);
    if ( v22 )
    {
      v7 = *(CGeometryOnlyDrawListBrush **)v21[0];
      *(_QWORD *)v21[0] = v21[1];
      if ( v7 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v7, 1, v8);
    }
    if ( v6 >= 0 )
    {
      v9 = v20;
      v20 = 0LL;
      v21[0] = v9;
      CBrushDrawListGenerator::AttachInput((__int64)a2, 0, v21);
      if ( v21[0] )
        std::default_delete<CShape>::operator()(v10, (__int64 (__fastcall ***)(_QWORD, __int64))v21[0]);
      if ( v20 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v20, 1, v11);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, v6, 0xE4u, 0LL);
    if ( v20 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v20, 1, v17);
LABEL_28:
    CBrushDrawListGenerator::Reset(a2);
    return (unsigned int)v6;
  }
LABEL_11:
  v12 = *((_QWORD *)a2 + 5);
  if ( *(_BYTE *)(v12 + 52) )
  {
    v13 = *(float *)(v12 + 32);
    v14 = *(float *)(v12 + 36);
    v15 = *(float *)(v12 + 40);
    v16 = *(float *)(v12 + 44);
    if ( *((float *)this + 22) > v13 )
      v13 = *((float *)this + 22);
    if ( *((float *)this + 23) > v14 )
      v14 = *((float *)this + 23);
    if ( v15 > *((float *)this + 24) )
      v15 = *((float *)this + 24);
    if ( v16 > *((float *)this + 25) )
      v16 = *((float *)this + 25);
    if ( v15 <= v13 || v16 <= v14 )
    {
      v13 = 0.0;
      v16 = 0.0;
      v15 = 0.0;
      v14 = 0.0;
    }
  }
  else
  {
    v13 = *((float *)this + 22);
    v14 = *((float *)this + 23);
    v15 = *((float *)this + 24);
    v16 = *((float *)this + 25);
  }
  v21[0] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v14), LODWORD(v13));
  v6 = 0;
  v21[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v16), LODWORD(v15));
  v18 = *(_OWORD *)v21;
  *(_BYTE *)(v12 + 52) = 1;
  *(_DWORD *)(v12 + 48) = 50529027;
  *(_OWORD *)(v12 + 32) = v18;
  return (unsigned int)v6;
}
