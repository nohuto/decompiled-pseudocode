/*
 * XREFs of ??0SURFREFDC@@QEAA@XZ @ 0x1C028E8FC
 * Callers:
 *     GreDrawStream @ 0x1C00F9710 (GreDrawStream.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ @ 0x1C013F074 (--0-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@QEAA@XZ.c)
 */

SURFREFDC *__fastcall SURFREFDC::SURFREFDC(SURFREFDC *this)
{
  UnexpectedThreadTerminationHandler<SURFREFDC>::UnexpectedThreadTerminationHandler<SURFREFDC>(this);
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
