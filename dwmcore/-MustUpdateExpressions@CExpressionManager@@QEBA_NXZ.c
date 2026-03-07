char __fastcall CExpressionManager::MustUpdateExpressions(CExpressionManager *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 64) || (*((_BYTE *)this + 448) & 2) != 0 || *((_DWORD *)this + 40) )
    return 1;
  return result;
}
