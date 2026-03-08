/*
 * XREFs of ??_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z @ 0x1C0081A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipTokenOperation@@MEAA@XZ @ 0x1C0084814 (--1CFlipTokenOperation@@MEAA@XZ.c)
 */

CFlipTokenOperation *__fastcall CFlipWaitedConsumerReturn::`vector deleting destructor'(
        CFlipTokenOperation *P,
        char a2)
{
  *(_QWORD *)P = &CFlipWaitedConsumerReturn::`vftable';
  CFlipTokenOperation::~CFlipTokenOperation(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
