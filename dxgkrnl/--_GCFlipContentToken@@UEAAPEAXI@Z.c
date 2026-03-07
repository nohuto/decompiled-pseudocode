CFlipContentToken *__fastcall CFlipContentToken::`scalar deleting destructor'(CFlipContentToken *P, char a2)
{
  CFlipContentToken::~CFlipContentToken(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
