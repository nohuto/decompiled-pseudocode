/*
 * XREFs of SepAdtCheckPrivilegeForSensitivity @ 0x1405970C0
 * Callers:
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140693B00 (SepAdtAuditPrivilegeUseWithContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepAdtCheckPrivilegeForSensitivity(unsigned int *a1, _BYTE *a2, _BYTE *a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  LUID *v6; // rcx
  LUID **v7; // rbx
  __int64 result; // rax

  *a2 = 0;
  *a3 = 0;
  if ( a1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = 0LL;
      do
      {
        if ( *a2 && *a3 )
          break;
        v6 = SepSensitivePrivileges;
        v7 = &SepSensitivePrivileges;
        do
        {
          if ( a1[3 * v5 + 2] == v6->LowPart )
          {
            result = (unsigned int)v6->HighPart;
            if ( a1[3 * v5 + 3] == (_DWORD)result )
              break;
          }
          v6 = *++v7;
        }
        while ( *v7 );
        if ( v6 )
          *a2 = 1;
        else
          *a3 = 1;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v4 );
    }
  }
  return result;
}
