/*
 * XREFs of strchr @ 0x1403D2FF0
 * Callers:
 *     MiSnapThunk @ 0x14075CE50 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x14093212C (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x140A45F28 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140A46D1C (EmpParseTargetRuleStringIndexList.c)
 *     PipSmBiosGetString @ 0x140A5C8BC (PipSmBiosGetString.c)
 *     CmpGetToken @ 0x140A62394 (CmpGetToken.c)
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
