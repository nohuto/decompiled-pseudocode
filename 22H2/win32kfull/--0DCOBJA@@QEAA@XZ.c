/*
 * XREFs of ??0DCOBJA@@QEAA@XZ @ 0x1C013FF48
 * Callers:
 *     GreCancelDC @ 0x1C02AA280 (GreCancelDC.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C013E478 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>((_OWORD *)this + 1);
  *(_QWORD *)this = 0LL;
  return this;
}
