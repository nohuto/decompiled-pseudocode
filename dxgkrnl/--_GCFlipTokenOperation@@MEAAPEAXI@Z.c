CFlipTokenOperation *__fastcall CFlipTokenOperation::`scalar deleting destructor'(CFlipTokenOperation *P, char a2)
{
  CFlipTokenOperation::~CFlipTokenOperation(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
