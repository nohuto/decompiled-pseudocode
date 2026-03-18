/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1402A07F0
 * Callers:
 *     PopEtGetProcessVersionInfo @ 0x1406744E0 (PopEtGetProcessVersionInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1406746F0 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14070BACC (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
