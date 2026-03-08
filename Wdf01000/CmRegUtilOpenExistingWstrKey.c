/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1C00B1B24
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C00B1280 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00B1610 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0087408 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilOpenExistingUcKey @ 0x1C00B1AAC (CmRegUtilOpenExistingUcKey.c)
 */

NTSTATUS __fastcall CmRegUtilOpenExistingWstrKey(
        void *BaseHandle,
        wchar_t *KeyName,
        unsigned int DesiredAccess,
        void **Handle)
{
  NTSTATUS result; // eax
  void **v5; // r9
  ACCESS_MASK v6; // r10d
  void *v7; // r11
  _UNICODE_STRING unicodeStringKeyName; // [rsp+20h] [rbp-18h] BYREF

  unicodeStringKeyName = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringKeyName, KeyName);
  if ( result >= 0 )
    return CmRegUtilOpenExistingUcKey(v7, &unicodeStringKeyName, v6, v5);
  return result;
}
