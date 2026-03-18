/*
 * XREFs of ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02B43F4
 * Callers:
 *     NtGdiSetColorSpace @ 0x1C014D430 (NtGdiSetColorSpace.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02B4B24 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015D33C (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

COLORSPACEREF *__fastcall COLORSPACEREF::COLORSPACEREF(COLORSPACEREF *this, HCOLORSPACE a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(this);
  LOBYTE(v4) = 9;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
