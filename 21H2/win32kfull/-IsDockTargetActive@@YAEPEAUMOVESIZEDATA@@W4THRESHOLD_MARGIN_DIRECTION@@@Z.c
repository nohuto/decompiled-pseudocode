/*
 * XREFs of ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A9F8
 * Callers:
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020B688 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@UtagPOINT@@KPEAK@Z @ 0x1C020D334 (-xxxHandleNewDockTargetOrMonitorMove@@YAHPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtag.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDockTargetActive(__int64 a1, int a2)
{
  bool result; // al

  if ( (*(_DWORD *)(a1 + 200) & 0x100000) == 0 )
    return *((_BYTE *)&unk_1C032CF48 + a2 + 24) != 0;
  result = 0;
  if ( *((_BYTE *)&unk_1C032CF48 + a2) )
    return *((_BYTE *)&unk_1C032CF48 + a2 + 4) != 0;
  return result;
}
