/*
 * XREFs of PspSiloInitializeSuiteMask @ 0x1409AA6D8
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1409AA8E8 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExGetSuiteMask @ 0x140810AB8 (ExGetSuiteMask.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1409AA4F0 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x1409AA58C (PspSiloGetSuiteMaskStringFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeSuiteMask(__int64 a1)
{
  int SuiteMaskStringFromRegistry; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  UnicodeString = 0LL;
  SuiteMaskStringFromRegistry = PspSiloGetSuiteMaskStringFromRegistry(&UnicodeString);
  if ( SuiteMaskStringFromRegistry >= 0 )
  {
    SuiteMaskStringFromRegistry = PspSiloGetMultiUserTsFromRegistry(&v5);
    if ( SuiteMaskStringFromRegistry >= 0 )
      *(_DWORD *)(a1 + 20) = ExGetSuiteMask((__int64)UnicodeString.Buffer, v5);
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
  }
  return (unsigned int)SuiteMaskStringFromRegistry;
}
