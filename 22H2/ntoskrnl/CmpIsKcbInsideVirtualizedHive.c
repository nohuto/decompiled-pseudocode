/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1406E2AF0
 * Callers:
 *     KCBIsVirtualizable @ 0x1403474D4 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x1406164B0 (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x10) != 0;
}
