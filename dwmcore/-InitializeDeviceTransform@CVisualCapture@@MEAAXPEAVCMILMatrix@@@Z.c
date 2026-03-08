/*
 * XREFs of ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x1802529C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E7548 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 */

void __fastcall CVisualCapture::InitializeDeviceTransform(CVisual **this, struct CMILMatrix *a2)
{
  CVisual *v4; // rcx
  _BYTE v5[64]; // [rsp+20h] [rbp-58h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  if ( *((_BYTE *)this + 1900) )
  {
    CMILMatrix::SetToIdentity(a2);
  }
  else
  {
    CVisual::GetRootTransform(this[234], a2, 0);
    v4 = this[233];
    if ( v4 )
    {
      v6 = 0;
      CVisual::GetRootTransform(v4, (struct CMILMatrix *)v5, 0);
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v5);
    }
  }
}
