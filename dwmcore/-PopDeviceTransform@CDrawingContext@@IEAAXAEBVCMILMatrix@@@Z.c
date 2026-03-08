/*
 * XREFs of ?PopDeviceTransform@CDrawingContext@@IEAAXAEBVCMILMatrix@@@Z @ 0x1800196E4
 * Callers:
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800DBC00 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x180019744 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

void __fastcall CDrawingContext::PopDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  _OWORD v6[4]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]

  v3 = *((_OWORD *)a2 + 1);
  v6[0] = *(_OWORD *)a2;
  v4 = *((_OWORD *)a2 + 2);
  v6[1] = v3;
  v5 = *((_OWORD *)a2 + 3);
  v6[2] = v4;
  v6[3] = v5;
  v7 = *((_DWORD *)a2 + 16);
  CMILMatrix::Invert((CMILMatrix *)v6);
  CDrawingContext::UpdateDeviceTransform(this, (const struct CMILMatrix *)v6, 0LL);
  CDrawingContext::PopTransformInternal(this, 0);
}
