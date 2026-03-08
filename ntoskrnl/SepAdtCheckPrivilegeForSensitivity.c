/*
 * XREFs of SepAdtCheckPrivilegeForSensitivity @ 0x1405B6A00
 * Callers:
 *     SepAdtAuditPrivilegeUseWithContext @ 0x14069976C (SepAdtAuditPrivilegeUseWithContext.c)
 * Callees:
 *     <none>
 */

void __fastcall SepAdtCheckPrivilegeForSensitivity(unsigned int *a1, char *a2, _BYTE *a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r11
  char v6; // al
  LUID *v7; // rcx
  LUID **v8; // rbx

  *a2 = 0;
  *a3 = 0;
  if ( a1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = 0LL;
      v6 = 0;
      do
      {
        if ( v6 && *a3 )
          break;
        v7 = SepSensitivePrivileges;
        v8 = &SepSensitivePrivileges;
        while ( a1[3 * v5 + 2] != v7->LowPart || a1[3 * v5 + 3] != v7->HighPart )
        {
          v7 = *++v8;
          if ( !*v8 )
            goto LABEL_10;
        }
        if ( !v7 )
        {
LABEL_10:
          v6 = *a2;
          *a3 = 1;
          goto LABEL_11;
        }
        *a2 = 1;
        v6 = 1;
LABEL_11:
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v4 );
    }
  }
}
