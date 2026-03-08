/*
 * XREFs of ?GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18021DD00
 * Callers:
 *     <none>
 * Callees:
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18002FFF8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18007E788 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18007EFB0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800945A4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CClipBrush::GetBrushParameters(CClipBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  CGeometryOnlyDrawListBrush *v7; // rcx
  struct CGeometryOnlyDrawListBrush *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  __int128 v15; // xmm0
  CGeometryOnlyDrawListBrush *v17; // [rsp+30h] [rbp-20h] BYREF
  struct CGeometryOnlyDrawListBrush *v18[2]; // [rsp+38h] [rbp-18h] BYREF
  char v19; // [rsp+48h] [rbp-8h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 312LL))(*((_QWORD *)this + 11));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xC5u, 0LL);
    goto LABEL_28;
  }
  if ( !*((_DWORD *)a2 + 18) )
  {
    v17 = 0LL;
    v18[1] = 0LL;
    v18[0] = (struct CGeometryOnlyDrawListBrush *)&v17;
    v19 = 1;
    v6 = CGeometryOnlyDrawListBrush::Create(&v18[1]);
    if ( v19 )
    {
      v7 = *(CGeometryOnlyDrawListBrush **)v18[0];
      *(_QWORD *)v18[0] = v18[1];
      if ( v7 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v7, 1);
    }
    if ( v6 >= 0 )
    {
      v8 = v17;
      v17 = 0LL;
      v18[0] = v8;
      CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)v18);
      if ( v18[0] )
        std::default_delete<CDrawListBrush>::operator()(v9, (__int64 (__fastcall ***)(_QWORD, __int64))v18[0]);
      if ( v17 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v17, 1);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, v6, 0xCBu, 0LL);
    if ( v17 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v17, 1);
LABEL_28:
    CBrushDrawListGenerator::Reset(a2);
    return (unsigned int)v6;
  }
LABEL_11:
  v10 = *((_QWORD *)a2 + 5);
  if ( *(_BYTE *)(v10 + 52) )
  {
    v11 = *(float *)(v10 + 32);
    v12 = *(float *)(v10 + 36);
    v13 = *(float *)(v10 + 40);
    v14 = *(float *)(v10 + 44);
    if ( *((float *)this + 24) > v11 )
      v11 = *((float *)this + 24);
    if ( *((float *)this + 25) > v12 )
      v12 = *((float *)this + 25);
    if ( v13 > *((float *)this + 26) )
      v13 = *((float *)this + 26);
    if ( v14 > *((float *)this + 27) )
      v14 = *((float *)this + 27);
    if ( v13 <= v11 || v14 <= v12 )
    {
      v11 = 0.0;
      v14 = 0.0;
      v13 = 0.0;
      v12 = 0.0;
    }
  }
  else
  {
    v11 = *((float *)this + 24);
    v12 = *((float *)this + 25);
    v13 = *((float *)this + 26);
    v14 = *((float *)this + 27);
  }
  v18[0] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v12), LODWORD(v11));
  v6 = 0;
  v18[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v14), LODWORD(v13));
  v15 = *(_OWORD *)v18;
  *(_BYTE *)(v10 + 52) = 1;
  *(_DWORD *)(v10 + 48) = 50529027;
  *(_OWORD *)(v10 + 32) = v15;
  return (unsigned int)v6;
}
