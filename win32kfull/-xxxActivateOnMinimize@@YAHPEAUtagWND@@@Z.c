/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008920
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C02278C0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z @ 0x1C0008C3C (-ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     GetLastTopMostWindow @ 0x1C0044610 (GetLastTopMostWindow.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     SkipWindowOnMonitor @ 0x1C00C8DE0 (SkipWindowOnMonitor.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v1; // r14d
  BOOL v3; // ebp
  int v4; // r13d
  __int64 LastTopMostWindow; // rax
  const struct tagWND *v6; // rdi
  const struct tagWND *v7; // rbx
  const struct tagWND *v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // ebp
  bool v11; // al
  int v12; // edx
  _UNKNOWN **v13; // r8
  bool v14; // di
  bool v15; // si
  char ThreadId; // al
  int v17; // r8d
  int v18; // edx
  __int64 v20; // rcx
  __int64 ThreadDesktopWindow; // rax
  __int128 v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+60h] [rbp-38h]

  v1 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 136LL) != 0LL;
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  v22 = 0LL;
  v23 = 0LL;
  if ( v4 != 1 || (LastTopMostWindow = GetLastTopMostWindow()) == 0 )
  {
    ThreadDesktopWindow = *((_QWORD *)a1 + 13);
    goto LABEL_41;
  }
  v6 = *(const struct tagWND **)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v7 = v3 ? *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 136LL) : v6;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v7) + 25) & 1) == 0 )
        {
          v9 = *((_QWORD *)v7 + 5);
          if ( (*(_BYTE *)(v9 + 27) & 8) == 0 && (*(_BYTE *)(v9 + 31) & 0x18) == 0x10 && !GetWindowCloakState(v7) )
          {
            v20 = *((_QWORD *)v7 + 5);
            if ( (*(_BYTE *)(v20 + 31) & 0x20) == 0
              && (v4 != 1 || *(_DWORD *)(v20 + 236) == 1)
              && !(unsigned int)SkipWindowOnMonitor(v7) )
            {
              if ( *(char *)(*((_QWORD *)v7 + 5) + 24LL) >= 0 )
                break;
              if ( !v8 )
                v8 = v7;
            }
          }
        }
        if ( v3 )
        {
          v3 = 0;
          v7 = v6;
        }
        else
        {
          v7 = (const struct tagWND *)*((_QWORD *)v7 + 11);
        }
      }
      while ( v7 );
      if ( v7 )
        break;
    }
    if ( v1 )
    {
      v7 = v8;
      if ( !v8 )
        return 0LL;
      break;
    }
    v1 = 1;
    if ( v6 )
    {
      ThreadDesktopWindow = *((_QWORD *)v6 + 13);
      goto LABEL_41;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_41:
      v6 = *(const struct tagWND **)(ThreadDesktopWindow + 112);
    else
      v6 = 0LL;
  }
  *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
  v10 = 3;
  *(_QWORD *)(gptiCurrent + 416LL) = &v22;
  *((_QWORD *)&v22 + 1) = v7;
  HMLockObject(v7);
  v11 = ForceForegroundChangeOnMinimize(a1, v7);
  v13 = &WPP_RECORDER_INITIALIZED;
  if ( v11 )
  {
    v10 = 7;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*gptiCurrent);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v17,
        (_DWORD)gFullLog,
        4,
        2,
        10,
        (__int64)&WPP_ed1e6af35bd8314bede5e951feb0d948_Traceguids,
        ThreadId);
      v13 = &WPP_RECORDER_INITIALIZED;
    }
  }
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      (_DWORD)v13,
      (_DWORD)gFullLog,
      4,
      2,
      11,
      (__int64)&WPP_ed1e6af35bd8314bede5e951feb0d948_Traceguids,
      *(_QWORD *)v7,
      *(_QWORD *)a1);
  }
  xxxSetForegroundWindowWithOptions(v7, v10, 0LL, 0LL);
  ThreadUnlock1();
  return 1LL;
}
