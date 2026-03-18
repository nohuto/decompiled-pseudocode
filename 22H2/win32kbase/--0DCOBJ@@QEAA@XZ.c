/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x1C003BC08
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C003BBC0 (--1DCMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00D1520 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 16);
  *(_QWORD *)this = 0LL;
  return this;
}
