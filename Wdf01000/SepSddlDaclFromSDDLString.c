/*
 * XREFs of SepSddlDaclFromSDDLString @ 0x1C00B09F4
 * Callers:
 *     SepSddlSecurityDescriptorFromSDDLString @ 0x1C00B10DC (SepSddlSecurityDescriptorFromSDDLString.c)
 * Callees:
 *     SepSddlGetAclForString @ 0x1C00B0AE0 (SepSddlGetAclForString.c)
 */

__int64 __fastcall SepSddlDaclFromSDDLString(
        const wchar_t *SecurityDescriptorString,
        unsigned int SecurityDescriptorControlFlags,
        unsigned int *DiscretionaryAcl,
        _ACL **a4)
{
  const wchar_t *v6; // rcx
  const wchar_t *v7; // rdx
  wchar_t v8; // ax
  unsigned int v9; // ebp
  __int64 v10; // rcx
  unsigned int AclForString; // ebx
  wchar_t *i; // rcx
  _ACL *Dacl; // [rsp+50h] [rbp+8h] BYREF
  wchar_t *End; // [rsp+60h] [rbp+18h] BYREF

  Dacl = 0LL;
  End = 0LL;
  *a4 = 0LL;
  *DiscretionaryAcl = 0;
  while ( *SecurityDescriptorString == 32 )
    ++SecurityDescriptorString;
  if ( *SecurityDescriptorString == 68 )
  {
    v6 = SecurityDescriptorString + 1;
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
      AclForString = SepSddlGetAclForString((wchar_t *)&v7[v10], &Dacl, &End);
      if ( !AclForString )
      {
        for ( i = End; *i == 32; ++i )
          ;
        if ( !*i )
        {
          *a4 = Dacl;
          *DiscretionaryAcl = v9;
          return AclForString;
        }
        AclForString = -1073741811;
      }
      if ( Dacl )
        ExFreePoolWithTag(Dacl, 0);
      return AclForString;
    }
  }
  return 3221225485LL;
}
