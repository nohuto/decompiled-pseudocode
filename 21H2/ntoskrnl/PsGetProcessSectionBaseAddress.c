/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1402F4B00
 * Callers:
 *     PopEtGetProcessImageInfo @ 0x1405F7684 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1406F2088 (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
