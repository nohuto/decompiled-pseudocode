/*
 * XREFs of SepFilterPrivilegeAudits @ 0x14076FBA8
 * Callers:
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14069976C (SepAdtAuditPrivilegeUseWithContext.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140699B5C (SePrivilegedServiceAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepFilterPrivilegeAudits(char a1, unsigned int *a2)
{
  int v2; // r9d
  unsigned int v4; // r8d
  _DWORD *v5; // rcx
  __int64 v6; // r11
  __int64 **v7; // r10
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // r11
  LUID **v11; // r10
  LUID *v12; // rax

  v2 = 0;
  if ( !a2 )
    return 0;
  v4 = *a2;
  if ( !*a2 )
    return 0;
  v5 = a2 + 2;
  v6 = v4;
  do
  {
    v7 = SepFilterPrivileges;
    v8 = *SepFilterPrivileges;
    while ( *v5 != *v8 || v5[1] != v8[1] )
    {
      v8 = *++v7;
      if ( !*v7 )
        goto LABEL_10;
    }
    ++v2;
LABEL_10:
    v5 += 3;
    --v6;
  }
  while ( v6 );
  v9 = a2 + 2;
  if ( (a1 & 1) != 0 )
  {
    v10 = *a2;
    do
    {
      v11 = &SepServicesFilterPrivileges;
      v12 = SepServicesFilterPrivileges;
      while ( *v9 != v12->LowPart || v9[1] != v12->HighPart )
      {
        v12 = *++v11;
        if ( !*v11 )
          goto LABEL_16;
      }
      ++v2;
LABEL_16:
      v9 += 3;
      --v10;
    }
    while ( v10 );
  }
  return v2 != v4;
}
