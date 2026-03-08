/*
 * XREFs of ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C02282E0
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 *     ?xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z @ 0x1C0228484 (-xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0228AA4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0016540 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

void __fastcall SetTooltipTimer(struct tagTOOLTIPWND *a1, int a2, int a3)
{
  __int64 v6; // rcx

  KillTooltipTimer(a1);
  v6 = *(_QWORD *)a1;
  *((_DWORD *)a1 + 9) = a2;
  SetSystemTimer(v6, a2, a3, 0, 1);
}
