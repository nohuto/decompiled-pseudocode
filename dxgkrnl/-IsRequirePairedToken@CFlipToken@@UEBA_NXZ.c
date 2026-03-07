bool __fastcall CFlipToken::IsRequirePairedToken(CFlipToken *this)
{
  return *((_BYTE *)this + 565);
}
