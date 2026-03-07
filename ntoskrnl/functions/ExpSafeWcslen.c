__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  while ( *v2 )
  {
    if ( (unsigned __int64)++v2 >= a2 )
      return 0xFFFFFFFFLL;
  }
  return v2 - a1;
}
