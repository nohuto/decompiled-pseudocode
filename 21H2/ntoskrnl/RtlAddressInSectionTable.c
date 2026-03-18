/*
 * XREFs of RtlAddressInSectionTable @ 0x1402D6EE8
 * Callers:
 *     RtlpImageDirectoryEntryToData64 @ 0x1402D6DC0 (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1402D6E58 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140757C9C (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1402D6F40 (RtlSectionTableFromVirtualAddress.c)
 */

unsigned __int64 __fastcall RtlAddressInSectionTable(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 result; // rax

  v3 = a3;
  v5 = RtlSectionTableFromVirtualAddress();
  if ( !v5 )
    return 0LL;
  result = v3 + a2 + *(unsigned int *)(v5 + 20) - (unsigned __int64)*(unsigned int *)(v5 + 12);
  if ( a2 < 0x7FFFFFFEFFFFLL && result >= 0x7FFFFFFEFFFFLL )
    return 0LL;
  return result;
}
