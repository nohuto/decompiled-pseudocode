/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x14024FB50
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x140602928 (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x14067CDAC (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
