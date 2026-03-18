/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0074D40
 * Callers:
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00FF018 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C007383C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     SetDeepDelayableVisRITTimer @ 0x1C0074EF0 (SetDeepDelayableVisRITTimer.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagCURSOR *v4; // rax
  struct tagCURSOR *v5; // rbx
  signed int v6; // esi
  __int64 v7; // r9
  int v8; // eax
  int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // edi
  int v16; // r10d
  unsigned int v17; // eax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v18[2] = 0LL;
  v4 = FixupCursorForMonitor(gpcurLogCurrent);
  v5 = v4;
  if ( v4 && (*((_DWORD *)v4 + 20) & 8) != 0 && *((_QWORD *)v4 + 14) )
  {
    if ( gdwLastAniTick )
    {
      v6 = 0;
      v7 = *((int *)v4 + 30);
      v8 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - 100 * *(_DWORD *)(*((_QWORD *)v4 + 14) + 4 * v7) / 6u
         - gdwLastAniTick;
      if ( v8 >= 0 )
        v6 = v8;
    }
    else
    {
      LODWORD(v7) = *((_DWORD *)v4 + 30);
      v6 = 0;
    }
    v9 = 0;
    if ( (int)v7 + 1 < *((_DWORD *)v5 + 23) )
      v9 = v7 + 1;
    *((_DWORD *)v5 + 30) = v9;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v18;
    v18[1] = v5;
    HMLockObject(v5);
    if ( a3 )
      zzzUpdateCursorImage();
    v13 = *((_QWORD *)v5 + 14);
    v14 = (unsigned int)(100 * *(_DWORD *)(v13 + 4LL * v9));
    LODWORD(v11) = (2863311531u * (unsigned __int64)(unsigned int)v14) >> 32;
    v15 = (unsigned int)v14 / 6;
    if ( (int)((unsigned int)v14 / 6) <= v6 )
    {
      v16 = *((_DWORD *)v5 + 23);
      LODWORD(v12) = *((_DWORD *)v5 + 30);
      do
      {
        v17 = v12 + 1;
        v6 -= v15;
        v12 = 0LL;
        if ( (int)v17 < v16 )
          v12 = v17;
        *((_DWORD *)v5 + 30) = v12;
        v14 = (unsigned int)(100 * *(_DWORD *)(v13 + 4LL * (int)v12));
        LODWORD(v11) = (2863311531u * (unsigned __int64)(unsigned int)v14) >> 32;
        v15 = (unsigned int)v14 / 6;
      }
      while ( (int)((unsigned int)v14 / 6) <= v6 );
    }
    ThreadUnlock1(v14, v11, v12);
    gdwLastAniTick = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v6;
    WPP_MAIN_CB.Dpc.DeferredContext = (PVOID)SetDeepDelayableVisRITTimer(gdwLastAniTick, v15 - v6);
  }
  else
  {
    gdwLastAniTick = 0;
  }
}
