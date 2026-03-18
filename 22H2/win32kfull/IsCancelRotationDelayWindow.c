/*
 * XREFs of IsCancelRotationDelayWindow @ 0x1C00C5D7C
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCancelRotationDelayWindow(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 304LL) == a1;
}
