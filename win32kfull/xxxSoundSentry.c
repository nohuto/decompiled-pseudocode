__int64 xxxSoundSentry()
{
  int v0; // ecx
  __int64 v2; // rbx
  signed int v3; // r8d
  __int64 v4; // rax
  HDC v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v10; // rcx
  HDC v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h]
  _BYTE v20[16]; // [rsp+48h] [rbp-28h] BYREF
  int v21[4]; // [rsp+58h] [rbp-18h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  *(_OWORD *)v21 = 0LL;
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
          LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) = *((_DWORD *)&gSoundSentry + 8);
          v3 = *(_DWORD *)(gpsi + 4984LL);
          if ( v3 < 1 )
            v3 = 1200;
          WPP_MAIN_CB.Queue.Wcb.DeviceContext = *(PVOID *)v2;
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
            ThreadLock(v2, &v18);
            xxxFlashWindow((struct tagWND *)v2, 3u, 0);
            ThreadUnlock1(v16, v15, v17);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v2) )
            {
              *(_OWORD *)v21 = *(_OWORD *)(*(_QWORD *)(v2 + 40) + 88LL);
              LogicalToPhysicalDPIRect(v21, v21, *(unsigned int *)(*(_QWORD *)(v2 + 40) + 288LL), 0LL);
              WPP_MAIN_CB.Queue.ListEntry = *(LIST_ENTRY *)v21;
              DesktopWindow = GetDesktopWindow(v2);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              UserSessionSwitchLeaveCrit(v10);
              NtGdiPatBlt(DCEx, v21[0], v21[1], v21[2] - v21[0], v21[3] - v21[1], 5570569);
              EnterCrit(1LL, 0LL);
              GreEnableAppContainerRestriction(1LL);
              v11 = DCEx;
LABEL_20:
              _ReleaseDC(v11);
              return 1LL;
            }
            v12 = _GetDCEx(v2, 0LL, 65537LL);
            v13 = *(_QWORD *)(v2 + 40);
            v5 = (HDC)v12;
            if ( (*(_WORD *)(v13 + 42) & 0x2FFF) == 0x29D )
              v14 = *(_OWORD *)GetPrimaryMonitorRect((__int64)v20);
            else
              v14 = *(_OWORD *)(v13 + 88);
            v21[2] = DWORD2(v14) - v14;
            v21[3] = HIDWORD(v14) - DWORD1(v14);
            v21[1] = 0;
            v21[0] = 0;
            GreTransformPoints(v5, (struct _POINTL *)v21, (struct _POINTL *)v21, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_25;
          case 3:
            v4 = GetDesktopWindow(v2);
            v5 = (HDC)_GetDCEx(v4, 0LL, 3LL);
            *(_OWORD *)v21 = *(_OWORD *)(*(_QWORD *)GetDispInfo(v6) + 24LL);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v2) )
            {
              UserSessionSwitchLeaveCrit(v7);
              NtGdiPatBlt(v5, v21[0], v21[1], v21[2] - v21[0], v21[3] - v21[1], 5570569);
              EnterCrit(1LL, 0LL);
LABEL_26:
              GreEnableAppContainerRestriction(1LL);
              v11 = v5;
              goto LABEL_20;
            }
LABEL_25:
            NtGdiPatBlt(v5, v21[0], v21[1], v21[2] - v21[0], v21[3] - v21[1], 5570569);
            goto LABEL_26;
        }
      }
    }
  }
  return 1LL;
}
