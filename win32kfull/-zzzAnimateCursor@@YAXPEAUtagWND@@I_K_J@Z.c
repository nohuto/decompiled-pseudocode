/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0061410
 * Callers:
 *     ?Cursor_DaemonTimeRateChanged@@YAXW4RitTimerRate@@@Z @ 0x1C00F5260 (-Cursor_DaemonTimeRateChanged@@YAXW4RitTimerRate@@@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0061830 (InternalSetTimer.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagCURSOR *v3; // rbp
  CCursorSizes *v5; // rdi
  struct tagCURSOR *v6; // rsi
  int v7; // r14d
  char *v8; // rbx
  __int64 v9; // r8
  int v10; // edi
  __int64 v11; // r9
  signed int v12; // r8d
  int v13; // eax
  struct tagCURSOR *v14; // rcx
  signed int v15; // eax
  struct tagCURSOR *v16; // r14
  int *v17; // r14
  signed int v18; // edi
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // ebx
  int v26; // ebx
  int v27; // r10d
  unsigned int v28; // eax
  __int128 v29; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-28h]

  v3 = gpcurLogCurrent;
  v29 = 0LL;
  v30 = 0LL;
  if ( !gpcurLogCurrent )
    goto LABEL_31;
  v5 = gpCursorSizes;
  v6 = 0LL;
  v7 = 0x7FFFFFFF;
  v8 = (char *)gpCursorSizes + 64;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v8, 0LL);
  v10 = *(_DWORD *)v5;
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)v8 + 1) )
  {
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v8, 0LL, v9);
  }
  KeLeaveCriticalRegion();
  v11 = *((_QWORD *)v3 + 6);
  if ( !v11 )
    goto LABEL_31;
  do
  {
    v12 = v7;
    v13 = *(_DWORD *)(v11 + 76) - v10;
    v14 = (struct tagCURSOR *)v11;
    v11 = *(_QWORD *)(v11 + 40);
    v15 = abs32(v13);
    if ( v15 < v7 )
      v7 = v15;
    if ( v15 >= v12 )
      v14 = v6;
    v6 = v14;
  }
  while ( v11 );
  if ( v14 )
  {
    v16 = v14;
  }
  else
  {
LABEL_31:
    v6 = v3;
    v16 = v3;
    if ( !v3 )
    {
LABEL_32:
      gdwLastAniTick = 0;
      return;
    }
  }
  if ( (*((_DWORD *)v6 + 20) & 8) == 0 || !*((_QWORD *)v6 + 14) )
    goto LABEL_32;
  if ( gdwLastAniTick )
  {
    v17 = (int *)((char *)v6 + 120);
    v18 = 0;
    if ( (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - 100 * *(_DWORD *)(*((_QWORD *)v6 + 14) + 4LL * *((int *)v6 + 30)) / 6u
             - gdwLastAniTick) >= 0 )
      v18 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - 100 * *(_DWORD *)(*((_QWORD *)v6 + 14) + 4LL * *((int *)v6 + 30)) / 6u
          - gdwLastAniTick;
  }
  else
  {
    v18 = 0;
    v17 = (int *)((char *)v16 + 120);
  }
  v19 = 0;
  if ( *v17 + 1 < *((_DWORD *)v6 + 23) )
    v19 = *v17 + 1;
  *v17 = v19;
  ThreadLockAlways(v6, &v29);
  if ( a3 )
    zzzUpdateCursorImage(v21, v20, v22);
  v23 = *((_QWORD *)v6 + 14);
  v24 = (unsigned int)(100 * *(_DWORD *)(v23 + 4LL * v19));
  LODWORD(v20) = (2863311531u * (unsigned __int64)(unsigned int)v24) >> 32;
  v25 = (unsigned int)v24 / 6;
  if ( (int)((unsigned int)v24 / 6) <= v18 )
  {
    v27 = *((_DWORD *)v6 + 23);
    LODWORD(v22) = *v17;
    do
    {
      v28 = v22 + 1;
      v18 -= v25;
      v22 = 0LL;
      if ( (int)v28 < v27 )
        v22 = v28;
      *v17 = v22;
      v24 = (unsigned int)(100 * *(_DWORD *)(v23 + 4LL * (int)v22));
      LODWORD(v20) = (2863311531u * (unsigned __int64)(unsigned int)v24) >> 32;
      v25 = (unsigned int)v24 / 6;
    }
    while ( (int)((unsigned int)v24 / 6) <= v18 );
  }
  ThreadUnlock1(v24, v20, v22);
  v26 = v25 - v18;
  gdwLastAniTick = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v18;
  if ( (gdwRITdaemonLockState & 1) != 0 )
    v26 = 864000000;
  WPP_MAIN_CB.DeviceQueue.Lock = InternalSetTimer(
                                   0,
                                   WPP_MAIN_CB.DeviceQueue.Lock,
                                   v26,
                                   (unsigned int)zzzAnimateCursor,
                                   (gdwRITdaemonLockState & 1) != 0 ? 0x36EE80 : 0,
                                   20);
}
