/*
 * XREFs of ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801E6C40
 * Callers:
 *     ?InitializeDeviceTransform@CVirtualMonitorCaptureRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801EB490 (-InitializeDeviceTransform@CVirtualMonitorCaptureRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800583E0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::InitializeDeviceTransform(COffScreenRenderTarget *this, struct CMILMatrix *a2)
{
  CTransform3D *v4; // rcx
  const struct CMILMatrix *Matrix; // rax

  v4 = (CTransform3D *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    Matrix = CTransform3D::GetMatrix(
               v4,
               (const struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 12) + 64LL) + 140LL));
    *(_OWORD *)a2 = *(_OWORD *)Matrix;
    *((_OWORD *)a2 + 1) = *((_OWORD *)Matrix + 1);
    *((_OWORD *)a2 + 2) = *((_OWORD *)Matrix + 2);
    *((_OWORD *)a2 + 3) = *((_OWORD *)Matrix + 3);
    *((_DWORD *)a2 + 16) = *((_DWORD *)Matrix + 16);
  }
  else
  {
    CMILMatrix::SetToIdentity(a2);
  }
  CMILMatrix::Translate(a2, *((float *)this + 44), *((float *)this + 45));
}
