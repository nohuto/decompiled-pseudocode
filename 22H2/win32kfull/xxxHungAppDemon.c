/*
 * XREFs of xxxHungAppDemon @ 0x1C00416E0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessHungWindow @ 0x1C00037AC (ProcessHungWindow.c)
 *     IsHungWindow @ 0x1C0041810 (IsHungWindow.c)
 *     IdleTimerProc @ 0x1C0041968 (IdleTimerProc.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C004F044 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ClearHungFlag @ 0x1C007BE28 (ClearHungFlag.c)
 *     zzzCalcStartCursorHide @ 0x1C007FBF0 (zzzCalcStartCursorHide.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxRedrawHungWindow @ 0x1C0240D14 (xxxRedrawHungWindow.c)
 */

struct tagWND *xxxHungAppDemon()
{
  unsigned __int64 v0; // rdx
  struct tagWND *result; // rax
  struct tagWND *v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v6; // [rsp+28h] [rbp-30h]
  unsigned int v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  v9 = 0LL;
  IdleTimerProc();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    zzzCalcStartCursorHide(0LL, 0LL);
  result = (struct tagWND *)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    result = *(struct tagWND **)(grpdeskRitInput + 8LL);
    if ( *((_QWORD *)result + 3) )
    {
      v7 = 0;
      v2 = 0LL;
      while ( 1 )
      {
        result = VWPLNextBase((struct tagVWPL *)gpvwplHungRedraw, v0, v2, &v7, v5, v6);
        v2 = result;
        if ( !result )
          break;
        if ( (unsigned int)IsHungWindow(result) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v8 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v8;
          *((_QWORD *)&v8 + 1) = v2;
          HMLockObject(v2);
          v4 = *((_QWORD *)v2 + 5);
          if ( (*(_BYTE *)(v4 + 19) & 0x10) != 0 )
          {
            ClearHungFlag(v2);
            ProcessHungWindow();
            v4 = *((_QWORD *)v2 + 5);
          }
          if ( (*(_BYTE *)(v4 + 19) & 8) != 0 )
          {
            ClearHungFlag(v2);
            xxxRedrawHungWindow(v2);
          }
          ThreadUnlock1(v4);
        }
      }
    }
  }
  return result;
}
