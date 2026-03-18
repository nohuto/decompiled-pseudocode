/*
 * XREFs of PspSiloInitializeSuiteMask @ 0x1409AD758
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1409AD968 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     ExGetSuiteMask @ 0x14083B3C8 (ExGetSuiteMask.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1409AD570 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x1409AD60C (PspSiloGetSuiteMaskStringFromRegistry.c)
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
