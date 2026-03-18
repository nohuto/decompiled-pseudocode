/*
 * XREFs of ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0016CD0
 * Callers:
 *     xxxResetTooltip @ 0x1C0016C80 (xxxResetTooltip.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C02255E8 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 */

void __fastcall KillTooltipTimer(struct tagTOOLTIPWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 9);
  if ( v1 )
  {
    *((_DWORD *)a1 + 9) = 0;
    FindTimer(*(_QWORD *)a1, v1, 2, 1, 0LL);
  }
}
