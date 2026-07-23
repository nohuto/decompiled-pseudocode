/*
 * XREFs of SdbpCheckMatchingWildcardRegistryEntry @ 0x14096567C
 * Callers:
 *     SdbpCheckMatchingWildcardRegistry @ 0x140965550 (SdbpCheckMatchingWildcardRegistry.c)
 * Callees:
 *     SdbpCheckMatchingRegistryValue @ 0x140964A2C (SdbpCheckMatchingRegistryValue.c)
 *     AslRegWildcardFindClose @ 0x140969B48 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindFirst @ 0x140969BCC (AslRegWildcardFindFirst.c)
 *     AslRegWildcardFindNext @ 0x140969C90 (AslRegWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardRegistryEntry(
        __int64 a1,
        wchar_t *a2,
        int a3,
        unsigned __int16 *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  HANDLE KeyHandle; // [rsp+50h] [rbp-38h] BYREF
  PVOID P; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  *a9 = 0;
  if ( (int)AslRegWildcardFindFirst(&KeyHandle, &P, a1) >= 0 )
  {
    while ( (!(unsigned int)SdbpCheckMatchingRegistryValue(KeyHandle, a2, a3, a4, a5, a6, Buf1, Size, a9) || !*a9)
         && (int)AslRegWildcardFindNext(&KeyHandle, P) >= 0 )
      ;
  }
  AslRegWildcardFindClose(P);
  return 1LL;
}
