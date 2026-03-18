/*
 * XREFs of ?SHData_StoreSafetyZone@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1C024AA14
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020CF7C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x1C004C854 (PhysicalToLogicalInPlaceRect.c)
 */

void __fastcall MOVESIZEDATA::SHData_StoreSafetyZone(MOVESIZEDATA *this, const struct tagRECT *a2)
{
  int *v2; // rbx
  __int64 v4; // rcx

  v2 = (int *)((char *)this + 312);
  v4 = *((_QWORD *)this + 2);
  *(struct tagRECT *)v2 = *a2;
  PhysicalToLogicalInPlaceRect(v4, v2);
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 216LL) )
  {
    --*v2;
    ++v2[2];
    --v2[1];
    ++v2[3];
  }
  *((_DWORD *)this + 83) |= 1u;
}
