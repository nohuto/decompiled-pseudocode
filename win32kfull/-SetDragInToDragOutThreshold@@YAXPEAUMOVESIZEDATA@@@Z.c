/*
 * XREFs of ?SetDragInToDragOutThreshold@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C01EB980
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01EAB38 (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1C01F230C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDragInToDragOutThreshold(struct MOVESIZEDATA *a1)
{
  if ( (*((_DWORD *)a1 + 50) & 0x38000) == 0 || (*((_DWORD *)a1 + 50) & 0x38000) == 0x8000 )
    *((_DWORD *)a1 + 50) ^= (*((_DWORD *)a1 + 50) ^ (*((_DWORD *)a1 + 50) + 0x10000)) & 0x38000;
}
