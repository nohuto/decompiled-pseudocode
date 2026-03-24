/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0080450
 * Callers:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0112224 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0080820 (InternalSetTimer.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0080E74 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0080F20 (zzzUpdateCursorImage.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagCURSOR *v4; // rax
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rdi
  signed int v7; // esi
  __int64 v8; // r9
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rbp
  struct _KTHREAD *CurrentThread; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // ebx
  int v23; // ebx
  int v24; // r10d
  int v25; // r8d
  int v26; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD v31[4]; // [rsp+30h] [rbp-38h] BYREF

  v31[2] = 0LL;
  v4 = FixupCursorForMonitor(gpcurLogCurrent);
  v6 = v4;
  if ( v4 && (*((_DWORD *)v4 + 20) & 8) != 0 && *((_QWORD *)v4 + 14) )
  {
    if ( gdwLastAniTick )
    {
      v7 = 0;
      v8 = *((int *)v4 + 30);
      v9 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - 100 * *(_DWORD *)(*((_QWORD *)v4 + 14) + 4 * v8) / 6u
         - gdwLastAniTick;
      if ( v9 >= 0 )
        v7 = v9;
    }
    else
    {
      LODWORD(v8) = *((_DWORD *)v4 + 30);
      v7 = 0;
    }
    v10 = 0;
    if ( (int)v8 + 1 < *((_DWORD *)v6 + 23) )
      v10 = v8 + 1;
    v11 = 0LL;
    *((_DWORD *)v6 + 30) = v10;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v5)
      || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v31[0] = *(_QWORD *)(v11 + 416);
    *(_QWORD *)(v11 + 416) = v31;
    v31[1] = v6;
    HMLockObject(v6);
    if ( a3 )
      zzzUpdateCursorImage(v18, v17, v19);
    v20 = *((_QWORD *)v6 + 14);
    v21 = (unsigned int)(100 * *(_DWORD *)(v20 + 4LL * v10));
    v22 = (unsigned int)v21 / 6;
    if ( (int)((unsigned int)v21 / 6) <= v7 )
    {
      v24 = *((_DWORD *)v6 + 23);
      v25 = *((_DWORD *)v6 + 30);
      do
      {
        v26 = v25 + 1;
        v7 -= v22;
        v25 = 0;
        if ( v26 < v24 )
          v25 = v26;
        *((_DWORD *)v6 + 30) = v25;
        v21 = (unsigned int)(100 * *(_DWORD *)(v20 + 4LL * v25));
        v22 = (unsigned int)v21 / 6;
      }
      while ( (int)((unsigned int)v21 / 6) <= v7 );
    }
    ThreadUnlock1(v21);
    v23 = v22 - v7;
    gdwLastAniTick = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v7;
    if ( (gdwRITdemonLockState & 1) != 0 )
      v23 = 864000000;
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)InternalSetTimer(
                                                                       0,
                                                                       WPP_MAIN_CB.Dpc.DpcListEntry.Next,
                                                                       v23,
                                                                       (unsigned int)zzzAnimateCursor,
                                                                       (gdwRITdemonLockState & 1) != 0 ? 0x36EE80 : 0,
                                                                       20);
  }
  else
  {
    gdwLastAniTick = 0;
  }
}
