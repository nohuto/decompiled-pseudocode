__int64 __fastcall MiSanitizePage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8

  v1 = a1;
  v2 = 1LL << ((unsigned __int8)dword_140C65760 - 12);
  if ( a1 >= v2 )
    return (v2 - 1) & a1;
  return v1;
}
