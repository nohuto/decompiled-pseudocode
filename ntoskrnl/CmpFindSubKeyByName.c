/*
 * XREFs of CmpFindSubKeyByName @ 0x1407FE71C
 * Callers:
 *     CmpLoadServicesNode @ 0x140B32FF0 (CmpLoadServicesNode.c)
 *     CmpSortDriverList @ 0x140B330B4 (CmpSortDriverList.c)
 *     CmpFindGroupOrderList @ 0x140B332CC (CmpFindGroupOrderList.c)
 *     CmpGetSystemControlValues @ 0x140B33800 (CmpGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x140B3493C (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B34C18 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpLoadManufacturingModeNode @ 0x140B95DEC (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140B95F14 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140B96004 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1407FE740 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1)
{
  CmpFindSubKeyByNameWithStatus(a1);
  return 0LL;
}
