/*
 * XREFs of MNGetpItem @ 0x1C0236BFC
 * Callers:
 *     xxxMNKeyDown @ 0x1C0238A98 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxMNSetGapState @ 0x1C0249E4C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024A138 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0048164 (MNGetpItemFromIndex.c)
 */

__int64 __fastcall MNGetpItem(__int64 a1, unsigned int a2)
{
  if ( **(_QWORD **)a1 )
    return MNGetpItemFromIndex(*(_QWORD *)(**(_QWORD **)a1 + 40LL), a2);
  else
    return 0LL;
}
