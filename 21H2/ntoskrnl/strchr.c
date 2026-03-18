/*
 * XREFs of strchr @ 0x1403E2AA0
 * Callers:
 *     MiSnapThunk @ 0x1407584B4 (MiSnapThunk.c)
 *     WmipSMBiosFindStringAndZero @ 0x1409DCCC0 (WmipSMBiosFindStringAndZero.c)
 *     EmpParseRuleTerm @ 0x140B0C230 (EmpParseRuleTerm.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140B0CFC8 (EmpParseTargetRuleStringIndexList.c)
 *     PipSmBiosGetString @ 0x140B102C0 (PipSmBiosGetString.c)
 *     CmpGetToken @ 0x140B18C50 (CmpGetToken.c)
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
