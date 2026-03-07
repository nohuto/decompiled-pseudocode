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
