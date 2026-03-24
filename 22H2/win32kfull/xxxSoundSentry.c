/*
 * XREFs of xxxSoundSentry @ 0x1C015D2B0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C015D220 (xxxMessageBeep.c)
 *     NtUserSoundSentry @ 0x1C0203720 (NtUserSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1C0213B68 (xxxOldMessageBeep.c)
 *     UserBeep @ 0x1C02196B8 (UserBeep.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C002AFD8 (xxxFlashWindow.c)
 *     GetScreenRectForDpi @ 0x1C0042590 (GetScreenRectForDpi.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     InternalSetTimer @ 0x1C0080790 (InternalSetTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00B3F50 (NtGdiPatBlt.c)
 *     GreTransformPoints @ 0x1C00FA30C (GreTransformPoints.c)
 *     GetPrimaryMonitorRect @ 0x1C00FF964 (GetPrimaryMonitorRect.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     GreEnableAppContainerRestriction @ 0x1C0273230 (GreEnableAppContainerRestriction.c)
 */

__int64 __fastcall xxxSoundSentry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  HDC v8; // rdi
  __int64 v9; // rcx
  __int64 DesktopWindow; // rax
  HDC DCEx; // rbx
  __int64 v12; // rcx
  HDC v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rcx
  _QWORD v19[3]; // [rsp+30h] [rbp-50h] BYREF
  __m128i v20; // [rsp+48h] [rbp-38h] BYREF
  __int128 v21; // [rsp+58h] [rbp-28h] BYREF
  int v22[4]; // [rsp+68h] [rbp-18h] BYREF

  v19[2] = 0LL;
  *(_OWORD *)v22 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    v3 = 50LL;
LABEL_3:
    UserSetLastError(v3, a2, a3);
    return 0LL;
  }
  if ( gpqForeground )
  {
    v5 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v5 )
    {
      if ( !gtmridSoundSentry )
      {
        if ( (unsigned int)(*((_DWORD *)&gSoundSentry + 8) - 1) <= 2 )
        {
          gdwCurrentEffect = *((_DWORD *)&gSoundSentry + 8);
          v6 = *(unsigned int *)(gpsi + 4984LL);
          if ( (int)v6 < 1 )
            v6 = 1200LL;
          ghwndSoundSentry = *(HWND *)v5;
          gtmridSoundSentry = InternalSetTimer(0LL, 0LL, v6, (__int64)SoundSentryTimer, 0, 20);
          if ( !gtmridSoundSentry )
          {
            v3 = 170LL;
            goto LABEL_3;
          }
        }
        switch ( *((_DWORD *)&gSoundSentry + 8) )
        {
          case 1:
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v19[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v19;
            v19[1] = v5;
            HMLockObject(v5);
            xxxFlashWindow(v5, 3u, 0);
            ThreadUnlock1(v18);
            return 1LL;
          case 2:
            if ( (unsigned int)IsWindowDesktopComposed(v5) )
            {
              *(_OWORD *)v22 = *(_OWORD *)(*(_QWORD *)(v5 + 40) + 88LL);
              LogicalToPhysicalDPIRect(v22, v22, *(unsigned int *)(*(_QWORD *)(v5 + 40) + 288LL), 0LL);
              grcScreenFlash = *(struct tagRECT *)v22;
              DesktopWindow = GetDesktopWindow(v5);
              DCEx = (HDC)_GetDCEx(DesktopWindow, 0LL, 3LL);
              GreEnableAppContainerRestriction(0LL);
              if ( gdwInAtomicOperation )
              {
                v12 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v12);
              NtGdiPatBlt(DCEx, v22[0], v22[1], v22[2] - v22[0], v22[3] - v22[1], 5570569);
              EnterCrit(0LL, 1LL);
              GreEnableAppContainerRestriction(1LL);
              v13 = DCEx;
              goto LABEL_29;
            }
            v15 = _GetDCEx(v5, 0LL, 65537LL);
            v16 = *(_QWORD *)(v5 + 40);
            v8 = (HDC)v15;
            if ( (*(_WORD *)(v16 + 42) & 0x2FFF) == 0x29D )
              v14 = *GetPrimaryMonitorRect(&v21, v16);
            else
              v14 = *(_OWORD *)(v16 + 88);
            v22[2] = DWORD2(v14) - v14;
            v22[3] = HIDWORD(v14) - DWORD1(v14);
            v22[1] = 0;
            v22[0] = 0;
            GreTransformPoints(v8, (struct _POINTL *)v22, (struct _POINTL *)v22, 2, 0);
            GreEnableAppContainerRestriction(0LL);
            goto LABEL_27;
          case 3:
            v7 = GetDesktopWindow(v5);
            v8 = (HDC)_GetDCEx(v7, 0LL, 3LL);
            *(__m128i *)v22 = *GetScreenRectForDpi(&v20, 0);
            GreEnableAppContainerRestriction(0LL);
            if ( (unsigned int)IsWindowDesktopComposed(v5) )
            {
              if ( gdwInAtomicOperation )
              {
                v9 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v9);
              NtGdiPatBlt(v8, v22[0], v22[1], v22[2] - v22[0], v22[3] - v22[1], 5570569);
              EnterCrit(0LL, 1LL);
              goto LABEL_28;
            }
LABEL_27:
            NtGdiPatBlt(v8, v22[0], v22[1], v22[2] - v22[0], v22[3] - v22[1], 5570569);
LABEL_28:
            GreEnableAppContainerRestriction(1LL);
            v13 = v8;
LABEL_29:
            _ReleaseDC(v13);
            break;
        }
      }
    }
  }
  return 1LL;
}
