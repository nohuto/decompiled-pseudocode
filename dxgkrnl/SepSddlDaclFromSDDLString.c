/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1C0392994
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C0393064 (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1C0392A80 (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(_WORD *a1, __int64 a2, int *a3, PVOID *a4)
{
  _WORD *v6; // rcx
  _WORD *v7; // rdx
  __int16 v8; // ax
  int v9; // ebp
  __int64 v10; // rcx
  unsigned int AclForString; // ebx
  _WORD *i; // rcx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF
  _WORD *v15; // [rsp+60h] [rbp+18h]

  P = 0LL;
  v15 = 0LL;
  *a4 = 0LL;
  *a3 = 0;
  while ( *a1 == 32 )
    ++a1;
  if ( *a1 == 68 )
  {
    v6 = a1 + 1;
    v7 = v6;
    if ( *v6 == 58 )
    {
      v8 = v6[1];
      v9 = 4104;
      if ( v8 != 80 )
        v9 = 8;
      v10 = 2LL;
      if ( v8 != 80 )
        v10 = 1LL;
      AclForString = SepSddlGetAclForString(&v7[v10], (int)&P);
      if ( !AclForString )
      {
        for ( i = v15; *i == 32; ++i )
          ;
        if ( !*i )
        {
          *a4 = P;
          *a3 = v9;
          return AclForString;
        }
        AclForString = -1073741811;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      return AclForString;
    }
  }
  return 3221225485LL;
}
