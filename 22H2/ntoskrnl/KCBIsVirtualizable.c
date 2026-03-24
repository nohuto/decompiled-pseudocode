/*
 * XREFs of KCBIsVirtualizable @ 0x140345580
 * Callers:
 *     KCBNeedsVirtualImage @ 0x140314E3C (KCBNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     CmpIsKcbInsideVirtualizedHive @ 0x1406CE8D0 (CmpIsKcbInsideVirtualizedHive.c)
 */

bool __fastcall KCBIsVirtualizable(__int64 a1)
{
  return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive();
}
