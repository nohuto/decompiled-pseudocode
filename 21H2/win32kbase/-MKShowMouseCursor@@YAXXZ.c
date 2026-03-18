/*
 * XREFs of ?MKShowMouseCursor@@YAXXZ @ 0x1C01B9570
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0060150 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C00BE010 (-SetGlobalCursorLevel@@YAXH@Z.c)
 */

void MKShowMouseCursor(void)
{
  if ( (gdwGTERMFlags & 1) == 0 )
  {
    gdwPUDFlags |= 0x1000u;
    gdwGTERMFlags |= 1u;
    *((_DWORD *)gpsi + 493) = 1;
    *((_DWORD *)gpsi + 517) = 2;
    SetGlobalCursorLevel(0);
  }
}
