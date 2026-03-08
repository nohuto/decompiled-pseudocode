/*
 * XREFs of ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0228AA4
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 * Callees:
 *     xxxResetTooltip @ 0x1C00164F0 (xxxResetTooltip.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C02282E0 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0228330 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02287C0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTooltipHandleTimer(struct tagTOOLTIPWND *a1, int a2)
{
  unsigned int v2; // ebx
  int v4; // edx
  int v5; // edx
  struct tagWND *DesktopWindow; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = 1;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 && (unsigned int)TooltipAnimate(a1) )
        SetTooltipTimer(a1, 2, *((_DWORD *)a1 + 3));
    }
    else
    {
      xxxResetTooltip(a1);
    }
  }
  else
  {
    DesktopWindow = (struct tagWND *)GetDesktopWindow(*(_QWORD *)a1);
    v12 = 0LL;
    v11 = 0LL;
    ThreadLockAlways(DesktopWindow, &v11);
    if ( xxxSetParentWorker(*(struct tagWND **)a1, DesktopWindow, 0LL, 0) )
      v2 = xxxShowTooltip(a1);
    else
      v2 = 0;
    ThreadUnlock1(v8, v7, v9);
  }
  return v2;
}
