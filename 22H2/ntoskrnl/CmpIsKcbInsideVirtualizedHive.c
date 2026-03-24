/*
 * XREFs of CmpIsKcbInsideVirtualizedHive @ 0x1406CE8D0
 * Callers:
 *     KCBIsVirtualizable @ 0x140345580 (KCBIsVirtualizable.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404EC8B0 (KCBNeedsVirtualImage_0.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbInsideVirtualizedHive(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4152LL) & 0x10) != 0;
}
