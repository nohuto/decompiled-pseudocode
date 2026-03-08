/*
 * XREFs of strchr @ 0x1403D5520
 * Callers:
 *     MiSnapThunk @ 0x1407ECC30 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x1409DD298 (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x140B4D578 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140B4E30C (EmpParseTargetRuleStringIndexList.c)
 *     PipSmBiosGetString @ 0x140B56BA4 (PipSmBiosGetString.c)
 *     CmpGetToken @ 0x140B5BF5C (CmpGetToken.c)
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  char v2; // al
  char *v3; // r8
  char v4; // r9

  v2 = *Str;
  v3 = 0LL;
  if ( *Str )
  {
    v4 = *Str;
    do
    {
      v2 = v4;
      if ( v4 == (_BYTE)Val )
        break;
      v2 = *++Str;
      v4 = *Str;
    }
    while ( *Str );
  }
  if ( v2 == (_BYTE)Val )
    return (char *)Str;
  return v3;
}
