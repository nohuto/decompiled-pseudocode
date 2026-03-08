/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1407B96F0
 * Callers:
 *     KCBIsVirtualizable @ 0x1402DD194 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x140614000 (KCBNeedsVirtualImage_0.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x10) != 0;
}
