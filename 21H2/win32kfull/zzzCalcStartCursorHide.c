/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C007FC90
 * Callers:
 *     xxxHungAppDemon @ 0x1C0041780 (xxxHungAppDemon.c)
 *     xxxGetInputEvent @ 0x1C00530F0 (xxxGetInputEvent.c)
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00588D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzWakeInputIdle @ 0x1C00DA374 (zzzWakeInputIdle.c)
 *     zzzShowStartGlass @ 0x1C01D3520 (zzzShowStartGlass.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0080F20 (zzzUpdateCursorImage.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00A8434 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2)
{
  int v3; // ebp
  unsigned __int64 v4; // rsi
  struct _W32PROCESS **v5; // r8
  struct _W32PROCESS *v6; // rcx
  _DWORD *v8; // r10
  unsigned int v9; // r9d
  struct _W32PROCESS **v10; // r11
  PVOID v11; // rbx
  bool v12; // bl
  struct _W32PROCESS *i; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v11 = *(PVOID *)a1;
    AutoSharedPushLock::AutoSharedPushLock(
      (AutoSharedPushLock *)&v14,
      (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
    v12 = UmfdHostLifeTimeManager::s_UmfdHostProcess == v11;
    if ( v14 )
    {
      GreReleasePushLockShared(v14);
      KeLeaveCriticalRegion();
    }
    if ( v12 )
      __debugbreak();
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    {
      for ( i = gpwpCalcFirst; i; i = (struct _W32PROCESS *)*((_QWORD *)i + 4) )
      {
        if ( i == (struct _W32PROCESS *)a1 )
          goto LABEL_24;
      }
      if ( a1 )
      {
        *(_QWORD *)(a1 + 32) = gpwpCalcFirst;
        gpwpCalcFirst = (struct _W32PROCESS *)a1;
      }
    }
LABEL_24:
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 24) = v4 + v3;
  }
  *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) = 0;
  v5 = &gpwpCalcFirst;
  v6 = gpwpCalcFirst;
  if ( gpwpCalcFirst )
  {
    while ( 1 )
    {
      v8 = (_DWORD *)((char *)v6 + 12);
      a2 = *((unsigned int *)v6 + 3);
      if ( (*((_DWORD *)v6 + 3) & 6) != 4 )
        break;
      v9 = *((_DWORD *)v6 + 6);
      if ( *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) < v9 )
        *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) = *((_DWORD *)v6 + 6);
      v10 = (struct _W32PROCESS **)((char *)v6 + 32);
      v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
      if ( (int)(v4 - v9) > 0 )
      {
        a2 = (unsigned int)a2 & 0xFFFFFFFB;
        *v8 = a2;
        goto LABEL_11;
      }
      v5 = v10;
LABEL_12:
      if ( !v6 )
      {
        if ( *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) > (unsigned int)v4 )
          return zzzUpdateCursorImage(v6, a2, v5);
        goto LABEL_3;
      }
    }
    v6 = (struct _W32PROCESS *)*((_QWORD *)v6 + 4);
LABEL_11:
    *v5 = v6;
    goto LABEL_12;
  }
LABEL_3:
  *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) = 0;
  return zzzUpdateCursorImage(v6, a2, v5);
}
