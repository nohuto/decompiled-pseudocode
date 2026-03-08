/*
 * XREFs of ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18021F064
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800DA170 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005F090 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DAF28 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18026D270 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z @ 0x18026D300 (-SetRotation@CMILMatrix@@QEAAXAEBUquaternion@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall CComponentTransform3D::GetScaleRotationTranslationRealization(
        CComponentTransform3D *this,
        struct CMILMatrix *a2)
{
  CMILMatrix *v4; // rcx
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  int v8; // xmm1_4
  float v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  float v13; // [rsp+28h] [rbp-19h] BYREF
  int v14; // [rsp+2Ch] [rbp-15h]
  int v15; // [rsp+30h] [rbp-11h]
  int v16; // [rsp+34h] [rbp-Dh]
  _BYTE v17[64]; // [rsp+38h] [rbp-9h] BYREF
  int v18; // [rsp+78h] [rbp+37h]

  CMILMatrix::SetToIdentity(a2);
  v5 = *((float *)this + 51);
  if ( v5 != 1.0 || *((float *)this + 52) != 1.0 || *((float *)this + 53) != 1.0 )
    CMILMatrix::Scale(v4, v5, *((float *)this + 52), *((float *)this + 53));
  v6 = *((float *)this + 58);
  if ( v6 != 0.0 )
  {
    v7 = *((float *)this + 48);
    v8 = *((_DWORD *)this + 49);
    v18 = 0;
    v13 = v7;
    v15 = *((_DWORD *)this + 50);
    v14 = v8;
    CMILMatrix::SetRotation((CMILMatrix *)v17, (const struct Windows::Foundation::Numerics::float3 *)&v13, v6);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v17);
  }
  v9 = *((float *)this + 54);
  if ( v9 != 0.0 || *((float *)this + 55) != 0.0 || *((float *)this + 56) != 0.0 || *((float *)this + 57) != 1.0 )
  {
    v10 = *((_DWORD *)this + 55);
    v18 = 0;
    v14 = v10;
    v11 = *((_DWORD *)this + 57);
    v13 = v9;
    v12 = *((_DWORD *)this + 56);
    v16 = v11;
    v15 = v12;
    CMILMatrix::SetRotation((CMILMatrix *)v17, (const struct Windows::Foundation::Numerics::quaternion *)&v13);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v17);
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 45) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 46) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.0000011920929 )
  {
    CMILMatrix::Translate(a2, *((float *)this + 45), *((float *)this + 46), *((float *)this + 47));
  }
}
