/*
 * XREFs of CmpBounceContextCleanup @ 0x1407ACEB8
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1406B8CB0 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x1407AB260 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x1407AC4B0 (NtEnumerateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExFreeToLookasideListEx @ 0x1402C0A60 (ExFreeToLookasideListEx.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  struct _PRIVILEGE_SET *v2; // rcx

  v2 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v2 && v2 != *(struct _PRIVILEGE_SET **)a1 && v2 != (struct _PRIVILEGE_SET *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, v2);
    else
      CmSiFreeMemory(v2);
  }
}
