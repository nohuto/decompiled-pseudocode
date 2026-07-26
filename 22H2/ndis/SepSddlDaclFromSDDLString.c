/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1C0129090
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C010D3F8 (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1C012917C (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(_WORD *a1, __int64 a2, int *a3, _QWORD *a4)
{
  _WORD *v6; // rcx
  _WORD *v7; // rdx
  __int16 v8; // ax
  int v9; // ebp
  __int64 v10; // rcx
  unsigned int AclForString; // ebx
  _WORD *i; // rcx

  *a4 = 0LL;
  *a3 = 0;
  while ( *a1 == 32 )
    ++a1;
  if ( *a1 != 68 )
    return 3221225485LL;
  v6 = a1 + 1;
  v7 = v6;
  if ( *v6 != 58 )
    return 3221225485LL;
  v8 = v6[1];
  v9 = 4104;
  if ( v8 != 80 )
    v9 = 8;
  v10 = 2LL;
  if ( v8 != 80 )
    v10 = 1LL;
  AclForString = SepSddlGetAclForString(&v7[v10]);
  if ( !AclForString )
  {
    for ( i = 0LL; *i == 32; ++i )
      ;
    if ( *i )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *a4 = 0LL;
      *a3 = v9;
    }
  }
  return AclForString;
}
