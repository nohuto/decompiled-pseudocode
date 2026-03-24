/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x1C003B4A4
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C003B430 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     GreRestoreDCInternal @ 0x1C00CC090 (GreRestoreDCInternal.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00C7C10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
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
