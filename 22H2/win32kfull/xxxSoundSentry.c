/*
 * XREFs of xxxSoundSentry @ 0x1C01F6208
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 *     NtUserSoundSentry @ 0x1C01DED70 (NtUserSoundSentry.c)
 *     xxxMessageBeep @ 0x1C01F6D88 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C01F6E18 (xxxOldMessageBeep.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01F902C (-xxxUserBeep@@YAHKK_N@Z.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     GreTransformPoints @ 0x1C0006CF4 (GreTransformPoints.c)
 *     GetPrimaryMonitorRect @ 0x1C00C4674 (GetPrimaryMonitorRect.c)
 *     NtGdiPatBlt @ 0x1C00DBEF0 (NtGdiPatBlt.c)
 *     InternalSetTimer @ 0x1C00E6510 (InternalSetTimer.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C026BD8C (GreEnableAppContainerRestriction.c)
 */

__int64 xxxSoundSentry()
{
  int v0; // ecx
  __int64 v2; // rbx
  signed int v3; // r8d
  __int64 v4; // rax
  HDC v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  HDC v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int128 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h]
  _BYTE v26[16]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v27; // [rsp+58h] [rbp-18h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v0 = 50;
LABEL_3:
    UserSetLastError(v0);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v2 = *(_QWORD *)(gpqForeground + 128LL);
    if ( v2 )
    {
      if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      {
        if ( *((_DWORD *)&gSoundSentry + 8) == 1 || (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 2) <= 1 )
        {
          LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = *((_DWORD *)&gSoundSentry + 8);
          v3 = *(_DWORD *)(gpsi + 4984LL);
          if ( v3 < 1 )
            v3 = 1200;
          WPP_MAIN_CB.Queue.ListEntry.Flink = *(struct _LIST_ENTRY **)v2;
          *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = InternalSetTimer(
                                                                 0LL,
                                                                 0LL,
                                                                 v3,
                                                                 (__int64)xxxSoundSentryTimer,
                                                                 0,
                                                                 20);
          if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
          {
            v0 = 170;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&gSoundSentry + 8) )
        {
          case 1:
            ThreadLock(v2, &v24);
            xxxFlashWindow((unsigned __int64 *)v2, 3u, 0);
            ThreadUnlock1(v22, v21, v23);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v2) )
            {
              v27 = *(_OWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
              LogicalToPhysicalDPIRect(&v27, &v27, *(unsigned int *)(*(_QWORD *)(v2 + 40) + 288LL), 0LL);
              *(_OWORD *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = v27;
              DesktopWindow = GetDesktopWindow(v2);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
              NtGdiPatBlt(DCEx, v27, SDWORD1(v27), DWORD2(v27) - v27, HIDWORD(v27) - DWORD1(v27), 5570569);
              EnterCrit(1LL, 0LL);
              GreEnableAppContainerRestriction(1LL);
              v17 = DCEx;
LABEL_20:
              _ReleaseDC(v17);
              return 1LL;
            }
            v18 = _GetDCEx(v2, 0LL, 65537LL);
            v19 = *(_QWORD *)(v2 + 40);
            v5 = (HDC)v18;
            if ( (*(_WORD *)(v19 + 42) & 0x2FFF) == 0x29D )
              v20 = *(_OWORD *)GetPrimaryMonitorRect((__int64)v26);
            else
              v20 = *(_OWORD *)(v19 + 88);
            DWORD2(v27) = DWORD2(v20) - v20;
            HIDWORD(v27) = HIDWORD(v20) - DWORD1(v20);
            *(_QWORD *)&v27 = 0LL;
            GreTransformPoints(v5, (struct _POINTL *)&v27, (struct _POINTFIX *)&v27, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_25;
          case 3:
            v4 = GetDesktopWindow(v2);
            v5 = (HDC)_GetDCEx(v4, 0LL, 3LL);
            v27 = *(_OWORD *)(*(_QWORD *)GetDispInfo(v6) + 24LL);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v2) )
            {
              UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
              NtGdiPatBlt(v5, v27, SDWORD1(v27), DWORD2(v27) - v27, HIDWORD(v27) - DWORD1(v27), 5570569);
              EnterCrit(1LL, 0LL);
LABEL_26:
              GreEnableAppContainerRestriction(1LL);
              v17 = v5;
              goto LABEL_20;
            }
LABEL_25:
            NtGdiPatBlt(v5, v27, SDWORD1(v27), DWORD2(v27) - v27, HIDWORD(v27) - DWORD1(v27), 5570569);
            goto LABEL_26;
        }
      }
    }
  }
  return 1LL;
}
