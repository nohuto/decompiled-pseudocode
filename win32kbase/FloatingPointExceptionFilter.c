/*
 * XREFs of FloatingPointExceptionFilter @ 0x1C02110C4
 * Callers:
 *     ?D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z @ 0x1C0210474 (-D3DXMatrixDeterminant@@YAHPEAMPEBU_D3DMATRIX@@@Z.c)
 *     ?ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX@@PEAN@Z @ 0x1C0210F24 (-ValidateInertiaInfo@CInertiaManager@@QEBA_NPEAUINERTIA_INFO@@PEBUINERTIA_REGION@@PEAU_D3DMATRIX.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FloatingPointExceptionFilter(int a1)
{
  return a1 == -1073741683
      || a1 == -1073741682
      || a1 == -1073741681
      || a1 == -1073741680
      || a1 == -1073741679
      || a1 == -1073741678
      || a1 == -1073741677;
}
