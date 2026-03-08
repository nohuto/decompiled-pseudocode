/*
 * XREFs of MNGetpItem @ 0x1C02194AC
 * Callers:
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxMNSetGapState @ 0x1C0234718 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0234910 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 */

__int64 __fastcall MNGetpItem(__int64 a1, unsigned int a2)
{
  if ( **(_QWORD **)a1 )
    return MNGetpItemFromIndex(*(_QWORD *)(**(_QWORD **)a1 + 40LL), a2);
  else
    return 0LL;
}
