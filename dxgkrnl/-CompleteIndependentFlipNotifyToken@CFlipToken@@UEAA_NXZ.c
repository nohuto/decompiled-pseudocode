char __fastcall CFlipToken::CompleteIndependentFlipNotifyToken(CFlipToken *this)
{
  if ( !*((_BYTE *)this + 560) )
    return 0;
  *((_BYTE *)this + 564) = 1;
  return 1;
}
