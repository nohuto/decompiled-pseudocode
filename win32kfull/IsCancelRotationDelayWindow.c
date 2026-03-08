/*
 * XREFs of IsCancelRotationDelayWindow @ 0x1C009901C
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCancelRotationDelayWindow(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 296LL) == a1;
}
