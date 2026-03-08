/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x140299400
 * Callers:
 *     PopEtGetProcessImageInfo @ 0x140701304 (PopEtGetProcessImageInfo.c)
 *     PopEtGetProcessVersionInfo @ 0x140701360 (PopEtGetProcessVersionInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14071DD1C (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 1312);
}
