CFlipToken *__fastcall CFlipToken::`vector deleting destructor'(CFlipToken *P, char a2)
{
  CFlipToken::~CFlipToken(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
