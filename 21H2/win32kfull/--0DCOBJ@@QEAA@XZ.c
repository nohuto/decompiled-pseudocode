/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x1C0123E40
 * Callers:
 *     GreDrawStream @ 0x1C003C990 (GreDrawStream.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
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
