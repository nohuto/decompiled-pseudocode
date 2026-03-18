/*
 * XREFs of MNGetpItem @ 0x1C02168EC
 * Callers:
 *     xxxMNKeyDown @ 0x1C0218038 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     xxxMNSetGapState @ 0x1C0231A04 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C0231BFC (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00652C8 (MNGetpItemFromIndex.c)
 */

__int64 __fastcall MNGetpItem(__int64 a1, unsigned int a2)
{
  if ( **(_QWORD **)a1 )
    return MNGetpItemFromIndex(*(_QWORD *)(**(_QWORD **)a1 + 40LL), a2);
  else
    return 0LL;
}
