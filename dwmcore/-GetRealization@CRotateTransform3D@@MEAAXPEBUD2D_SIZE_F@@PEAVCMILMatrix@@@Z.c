/*
 * XREFs of ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18024B010
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005F090 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D8418 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18026D270 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 */

void __fastcall CRotateTransform3D::GetRealization(
        CRotateTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  int v4; // xmm1_4
  float v6; // xmm2_4
  int v7; // xmm0_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  _DWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *((_DWORD *)this + 42);
  v6 = *((float *)this + 40) * 0.017453292;
  v11[0] = *((_DWORD *)this + 41);
  v7 = *((_DWORD *)this + 43);
  v11[1] = v4;
  v11[2] = v7;
  CMILMatrix::SetRotation(a3, (const struct Windows::Foundation::Numerics::float3 *)v11, v6);
  v8 = *((float *)this + 44);
  v9 = *((float *)this + 45);
  v10 = *((float *)this + 46);
  if ( v8 != 0.0 || v9 != 0.0 || v10 != 0.0 )
  {
    CMILMatrix::PrependTranslate(
      a3,
      COERCE_FLOAT(LODWORD(v8) ^ _xmm),
      COERCE_FLOAT(LODWORD(v9) ^ _xmm),
      COERCE_FLOAT(LODWORD(v10) ^ _xmm));
    CMILMatrix::Translate(a3, v8, v9, v10);
  }
}
