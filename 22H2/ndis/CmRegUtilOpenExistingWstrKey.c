/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1C0129F2C
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C0129788 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C0129B18 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0035BD0 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilOpenExistingUcKey @ 0x1C0129EB8 (CmRegUtilOpenExistingUcKey.c)
 */

int __fastcall CmRegUtilOpenExistingWstrKey(__int64 a1, const WCHAR *a2)
{
  int result; // eax
  _QWORD *v3; // r9
  ACCESS_MASK v4; // r10d
  void *v5; // r11
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilOpenExistingUcKey(v5, &DestinationString, v4, v3);
  return result;
}
