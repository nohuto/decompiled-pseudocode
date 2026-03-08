/*
 * XREFs of ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180008928
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180008350 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180008AEC (--0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x180008B48 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008BB8 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

bool __fastcall CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        const struct CProjectedShadowScene::CasterEntry *a3,
        const struct CProjectedShadowScene::ReceiverEntry *a4,
        unsigned int a5)
{
  __int64 v7; // r9
  int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  float v14; // [rsp+28h] [rbp-E0h] BYREF
  float v15[13]; // [rsp+2Ch] [rbp-DCh] BYREF
  __int128 v16; // [rsp+68h] [rbp-A0h]
  int v17; // [rsp+78h] [rbp-90h]
  _OWORD v18[4]; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+C8h] [rbp-40h]
  _OWORD v20[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v21; // [rsp+118h] [rbp+10h]
  _BYTE v22[32]; // [rsp+128h] [rbp+20h] BYREF
  int v23; // [rsp+148h] [rbp+40h]
  _BYTE v24[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v25; // [rsp+1F8h] [rbp+F0h]

  CVisual::GetEffectiveSize(*(CVisual **)(*(_QWORD *)a3 + 64LL), &v14, v15);
  v17 = 5888;
  v8 = *(_DWORD *)(v7 + 96);
  LODWORD(v16) = a5 ^ _xmm;
  *(_QWORD *)((char *)&v16 + 4) = a5 ^ (unsigned __int64)(unsigned int)_xmm;
  v14 = v14 + (float)(*(float *)&a5 + *(float *)&a5);
  v15[0] = v15[0] + (float)(*(float *)&a5 + *(float *)&a5);
  v9 = *(_OWORD *)(v7 + 32);
  LOBYTE(v17) = 84;
  HIDWORD(v16) = (_DWORD)FLOAT_1_0;
  v10 = *(_OWORD *)(v7 + 48);
  v19 = v8;
  v18[0] = v9;
  v11 = *(_OWORD *)(v7 + 64);
  v18[1] = v10;
  v12 = *(_OWORD *)(v7 + 80);
  v18[2] = v11;
  v18[3] = v12;
  CMILMatrix::Multiply((CMILMatrix *)v18, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
  v20[3] = v16;
  v20[0] = _xmm;
  v20[1] = _xmm;
  v20[2] = _xmm;
  v21 = v17;
  CMILMatrix::Multiply((CMILMatrix *)v20, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 16));
  CVisualDepthGeometry::CVisualDepthGeometry(
    (CVisualDepthGeometry *)v22,
    *(struct CVisual **)(*(_QWORD *)a4 + 64LL),
    (const struct CMILMatrix *)v18);
  CVisualDepthGeometry::CVisualDepthGeometry(
    (CVisualDepthGeometry *)v24,
    (const struct Windows::Foundation::Numerics::float2 *)&v14,
    (const struct CMILMatrix *)v20);
  v23 = 2;
  v25 = 1;
  return (unsigned int)CVisualDepthGeometry::GetRelativeOrder(v24, v22) == 0;
}
