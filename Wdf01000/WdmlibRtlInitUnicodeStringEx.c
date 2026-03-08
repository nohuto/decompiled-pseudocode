/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C0087408
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00B141C (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00B1610 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00B1A4C (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00B1B24 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00B1E74 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetFullBuffer @ 0x1C00B1EAC (CmRegUtilWstrValueSetFullBuffer.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00B1F08 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdmlibRtlInitUnicodeStringEx(_UNICODE_STRING *DestinationString, wchar_t *SourceString)
{
  unsigned __int16 v2; // r8
  unsigned __int64 v3; // rax
  __int64 result; // rax
  unsigned __int16 v5; // ax

  v2 = 0;
  if ( SourceString )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( SourceString[v3] );
    if ( v3 > 0x7FFE )
      return 3221225734LL;
    v5 = 2 * v3;
    v2 = v5 + 2;
  }
  else
  {
    SourceString = 0LL;
    v5 = 0;
  }
  DestinationString->Length = v5;
  result = 0LL;
  DestinationString->MaximumLength = v2;
  DestinationString->Buffer = SourceString;
  return result;
}
