/*
 * XREFs of ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C02159E0
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0215AB0 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C006AEA4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C02156C4 (-Convert3dTo2dMatrix@CPalmRejectZoneInfo@@AEAAJPEBUtagINPUT_TRANSFORM@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C0216DDC (-TransformRect@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        const struct CompositionInputObject *a3,
        struct tagRECT *a4)
{
  CPalmRejectZoneInfo *v6; // rcx
  int v8; // [rsp+20h] [rbp-19h] BYREF
  __int128 v9; // [rsp+24h] [rbp-15h]
  int v10; // [rsp+34h] [rbp-5h]
  __int128 v11; // [rsp+38h] [rbp-1h]
  int v12; // [rsp+48h] [rbp+Fh]
  __int128 v13; // [rsp+4Ch] [rbp+13h]
  int v14; // [rsp+5Ch] [rbp+23h]
  struct tagRECT v15; // [rsp+60h] [rbp+27h] BYREF
  __int128 v16; // [rsp+70h] [rbp+37h] BYREF
  int v17; // [rsp+80h] [rbp+47h]
  int v18; // [rsp+84h] [rbp+4Bh]

  v8 = 1065353216;
  v10 = 1065353216;
  v12 = 1065353216;
  v14 = 1065353216;
  v9 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  if ( a3 )
    CompositionInputObject::QueryTransform(a3, (struct tagINPUT_TRANSFORM *)&v8);
  v17 = 0;
  v18 = 0;
  v16 = _xmm;
  CPalmRejectZoneInfo::Convert3dTo2dMatrix(
    this,
    (const struct tagINPUT_TRANSFORM *)&v8,
    (struct D2D_MATRIX_3X2_F *)&v16);
  v15 = *a4;
  CPalmRejectZoneInfo::TransformRect(v6, retstr, &v15, (struct D2D_MATRIX_3X2_F *)&v16);
  return retstr;
}
