/*
 * XREFs of RawInputRequestedForMouse @ 0x1C009B988
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     EditionPostRawMouseInputMessage @ 0x1C009B5F0 (EditionPostRawMouseInputMessage.c)
 * Callees:
 *     <none>
 */

__int64 RawInputRequestedForMouse()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gHidCounters[1] || LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) )
    return 1;
  return v0;
}
