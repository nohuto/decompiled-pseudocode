/*
 * XREFs of ??_EDXGPROCESSVMWP@@UEAAPEAXI@Z @ 0x1C00556B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C00555F4 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 */

DXGPROCESSVMWP *__fastcall DXGPROCESSVMWP::`vector deleting destructor'(DXGPROCESSVMWP *P, unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  DXGPROCESSVMWP::~DXGPROCESSVMWP(P, a2);
  if ( (v2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
