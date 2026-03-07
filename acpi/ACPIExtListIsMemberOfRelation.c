char __fastcall ACPIExtListIsMemberOfRelation(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  _QWORD *i; // rdx

  v2 = 0;
  if ( !a2 )
    return 0;
  v3 = *a2;
  if ( !*a2 )
    return 0;
  for ( i = a2 + 2; *i != a1; ++i )
  {
    if ( ++v2 >= v3 )
      return 0;
  }
  return 1;
}
