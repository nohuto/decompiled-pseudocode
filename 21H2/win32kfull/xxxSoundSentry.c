/*
 * XREFs of xxxSoundSentry @ 0x1C011B3AC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     NtUserSoundSentry @ 0x1C011B370 (NtUserSoundSentry.c)
 *     xxxMessageBeep @ 0x1C014C6C4 (xxxMessageBeep.c)
 *     xxxOldMessageBeep @ 0x1C02128F8 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C0214878 (UserBeep.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 *     GreTransformPoints @ 0x1C00E2F9C (GreTransformPoints.c)
 *     GetPrimaryMonitorRect @ 0x1C00F266C (GetPrimaryMonitorRect.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C02714B4 (GreEnableAppContainerRestriction.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 *v4; // rbx
  signed int v5; // r8d
  __int64 v6; // rax
  HDC v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v15; // rcx
  HDC v16; // rcx
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int128 v25; // [rsp+30h] [rbp-40h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h]
  _BYTE v27[16]; // [rsp+48h] [rbp-28h] BYREF
  int v28[4]; // [rsp+58h] [rbp-18h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v28 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v2 = 50LL;
LABEL_3:
    UserSetLastError(v2, a2);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v4 = *(unsigned __int64 **)(gpqForeground + 120LL);
    if ( v4 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1) <= 2 )
        {
          gdwCurrentEffect = *((_DWORD *)&gSoundSentry + 8);
          v5 = *(_DWORD *)(gpsi + 4984LL);
          if ( v5 < 1 )
            v5 = 1200;
          ghwndSoundSentry = (HWND)*v4;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v5, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v2 = 170LL;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&gSoundSentry + 8) )
        {
          case 1:
            ThreadLock((__int64)v4, (__int64 *)&v25);
            xxxFlashWindow(v4, 3u, 0);
            ThreadUnlock1(v23, v22, v24);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v4) )
            {
              *(_OWORD *)v28 = *(_OWORD *)(v4[5] + 88);
              LogicalToPhysicalDPIRect(v28, v28, *(unsigned int *)(v4[5] + 288), 0LL);
              grcScreenFlash = *(struct tagRECT *)v28;
              DesktopWindow = GetDesktopWindow((__int64)v4);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              UserSessionSwitchLeaveCrit(v15);
              NtGdiPatBlt(DCEx, v28[0], v28[1], v28[2] - v28[0], v28[3] - v28[1], 5570569);
              EnterCrit(1LL, 0LL);
              GreEnableAppContainerRestriction(1LL);
              v16 = DCEx;
LABEL_23:
              _ReleaseDC(v16);
              return 1LL;
            }
            v18 = _GetDCEx(v4, 0LL, 65537LL);
            v21 = v4[5];
            v7 = (HDC)v18;
            if ( (*(_WORD *)(v21 + 42) & 0x2FFF) == 0x29D )
              v17 = *(_OWORD *)GetPrimaryMonitorRect((__int64)v27, v21, v19, v20);
            else
              v17 = *(_OWORD *)(v21 + 88);
            v28[2] = DWORD2(v17) - v17;
            v28[3] = HIDWORD(v17) - DWORD1(v17);
            v28[1] = 0;
            v28[0] = 0;
            GreTransformPoints(v7, (struct _POINTL *)v28, (struct _POINTL *)v28, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_21;
          case 3:
            v6 = GetDesktopWindow((__int64)v4);
            v7 = (HDC)_GetDCEx(v6, 0LL, 3LL);
            *(_OWORD *)v28 = *(_OWORD *)(*(_QWORD *)GetDispInfo(v9, v8, v10, v11) + 24LL);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v4) )
            {
              UserSessionSwitchLeaveCrit(v12);
              NtGdiPatBlt(v7, v28[0], v28[1], v28[2] - v28[0], v28[3] - v28[1], 5570569);
              EnterCrit(1LL, 0LL);
LABEL_22:
              GreEnableAppContainerRestriction(1LL);
              v16 = v7;
              goto LABEL_23;
            }
LABEL_21:
            NtGdiPatBlt(v7, v28[0], v28[1], v28[2] - v28[0], v28[3] - v28[1], 5570569);
            goto LABEL_22;
        }
      }
    }
  }
  return 1LL;
}
