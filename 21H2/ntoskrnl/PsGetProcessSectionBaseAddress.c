/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1402502F0
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x140602928 (EtwpQueryProcessOtherInfo.c)
 *     PopEtGetProcessImageInfo @ 0x14069898C (PopEtGetProcessImageInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
