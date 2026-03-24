/*
 * XREFs of ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801858A0
 * Callers:
 *     ?InitializeDeviceTransform@CVirtualMonitorCaptureRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180188650 (-InitializeDeviceTransform@CVirtualMonitorCaptureRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18007B128 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::InitializeDeviceTransform(COffScreenRenderTarget *this, struct CMILMatrix *a2)
{
  CTransform3D *v4; // rcx
  const struct CMILMatrix *Matrix; // rax

  v4 = (CTransform3D *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    Matrix = CTransform3D::GetMatrix(
               v4,
               (const struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 13) + 56LL) + 132LL));
    *(_OWORD *)a2 = *(_OWORD *)Matrix;
    *((_OWORD *)a2 + 1) = *((_OWORD *)Matrix + 1);
    *((_OWORD *)a2 + 2) = *((_OWORD *)Matrix + 2);
    *((_OWORD *)a2 + 3) = *((_OWORD *)Matrix + 3);
    *((_DWORD *)a2 + 16) = *((_DWORD *)Matrix + 16);
  }
  else
  {
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_WORD *)a2 + 32) = 32085;
  }
  CMILMatrix::Translate(a2, *((float *)this + 39), *((float *)this + 40));
}
