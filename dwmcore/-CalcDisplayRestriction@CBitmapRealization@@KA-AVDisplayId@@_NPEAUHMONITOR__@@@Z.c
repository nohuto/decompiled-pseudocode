_DWORD *__fastcall CBitmapRealization::CalcDisplayRestriction(_DWORD *a1, char a2, __int64 a3)
{
  if ( a2 && a3 )
    *a1 = a3;
  else
    *a1 = DisplayId::None;
  return a1;
}
