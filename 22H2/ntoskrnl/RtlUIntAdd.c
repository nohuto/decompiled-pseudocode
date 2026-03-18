/*
 * XREFs of RtlUIntAdd @ 0x1402504BC
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     CmpCheckKey @ 0x1406E07C0 (CmpCheckKey.c)
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     sub_140763458 @ 0x140763458 (sub_140763458.c)
 *     sub_140764274 @ 0x140764274 (sub_140764274.c)
 *     VrpUpdateKeyInformation @ 0x1407E06A0 (VrpUpdateKeyInformation.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084C6F0 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax
  UINT v4; // edx
  NTSTATUS result; // eax

  v3 = uAugend + uAddend;
  v4 = -1;
  if ( v3 >= uAugend )
    v4 = v3;
  result = v3 < uAugend ? 0xC0000095 : 0;
  *puResult = v4;
  return result;
}
