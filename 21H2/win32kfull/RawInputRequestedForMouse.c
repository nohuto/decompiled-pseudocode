/*
 * XREFs of RawInputRequestedForMouse @ 0x1C0031434
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x1C0030E60 (EditionPostRawMouseInputMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C003145C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     <none>
 */

__int64 RawInputRequestedForMouse()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gHidCounters[1] || LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    return 1;
  return v0;
}
