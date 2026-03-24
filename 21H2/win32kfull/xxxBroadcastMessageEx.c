/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C003FE88
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetInformationThread @ 0x1C00D9030 (xxxSetInformationThread.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00FFA40 (xxxBroadcastDisplaySettingsChange.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C012D4B0 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastMessage @ 0x1C0134E08 (xxxBroadcastMessage.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01D77E0 (EditionxxxBroadcastSPIChange.c)
 * Callees:
 *     _PostTransformableMessageIL @ 0x1C003F750 (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C00405E4 (xxxSendMessageCallback.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C00409D4 (GetPrimaryMonitorRectForWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DAC0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C012D4B0 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0133350 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r8
  __int16 v21; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v26; // xmm0
  __int64 v27; // rdx
  unsigned __int64 v28; // r9
  _WORD *v30; // rcx
  unsigned __int16 v31; // ax
  __int64 v32; // rax
  __int64 v33; // [rsp+58h] [rbp-59h]
  __int64 CurrentProcessWin32Process; // [rsp+60h] [rbp-51h]
  __int64 v35; // [rsp+68h] [rbp-49h]
  __int128 v36; // [rsp+70h] [rbp-41h] BYREF
  __int128 v37; // [rsp+80h] [rbp-31h] BYREF
  __int64 v38; // [rsp+90h] [rbp-21h]
  __int128 v39; // [rsp+98h] [rbp-19h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-9h]
  _BYTE v41[24]; // [rsp+B0h] [rbp-1h] BYREF
  __int64 *v42; // [rsp+F8h] [rbp+47h]

  v38 = 0LL;
  v40 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  if ( a2 - 1024 <= 0xBBFF )
  {
    v33 = 1LL;
    UserSetLastError(87LL);
  }
  else
  {
    v33 = 0LL;
  }
  v12 = a7;
  if ( !a7 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794 || a2 - 804 <= 1) )
    v12 = 1;
  if ( !a1 )
  {
    v36 = 0LL;
    if ( a2 >= 0x1A )
    {
      if ( a2 <= 0x1B )
      {
        if ( a4 )
        {
          if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v36, a4) )
            return 0LL;
          PushW32ThreadLock(*((_QWORD *)&v36 + 1), &v39, Win32FreePool);
          a4 = (struct _LARGE_STRING *)&v36;
        }
        xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v12, a8);
        if ( a4 )
          PopAndFreeAlwaysW32ThreadLock(&v39);
        return 1LL;
      }
      if ( a2 == 30 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
          return 0LL;
      }
      else
      {
        if ( a2 == 42 )
        {
          xxxSystemBroadcastMessage(0x2Au, a3, (__int64)a4, a5, a6, v12, a8);
          return 1LL;
        }
        if ( a2 - 712 <= 1 )
        {
          xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v12, a8);
          return 1LL;
        }
      }
    }
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    if ( !a1 )
    {
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  v35 = BuildHwndList(*(struct tagWND **)(a1 + 112));
  v14 = v35;
  if ( !v35 )
    return 0LL;
  v15 = (__int64 *)(v35 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v17 = *(_QWORD *)(v35 + 32);
  v42 = (__int64 *)(v35 + 32);
  if ( v17 == 1 )
    goto LABEL_26;
  do
  {
    LOBYTE(v16) = 1;
    v18 = HMValidateHandleNoSecure(v17, v16);
    v19 = v18;
    if ( v18 )
    {
      v20 = *(_QWORD *)(v18 + 40);
      if ( (*(_WORD *)(v20 + 42) & 0x2FFF) != 0x29C )
      {
        v21 = **(_WORD **)(*(_QWORD *)(v18 + 136) + 8LL);
        v16 = gpsi;
        if ( *(_WORD *)(gpsi + 908LL) != v21
          && gaOleMainThreadWndClass != v21
          && (!v33 || (*(_BYTE *)(v20 + 21) & 2) == 0)
          && (a2 - 784 > 1
           || (*(_BYTE *)(v20 + 31) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v19 + 16) + 488LL) & 0x800) != 0) )
        {
          if ( a8 == 1 )
          {
            if ( *(_DWORD *)(v20 + 236) == 1 )
              goto LABEL_15;
          }
          else if ( a8 != 2 || *(_DWORD *)(v20 + 236) != 1 || (*(_BYTE *)(v20 + 234) & 0x20) != 0 )
          {
LABEL_15:
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)&v37 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v37;
            *((_QWORD *)&v37 + 1) = v19;
            HMLockObject(v19);
            if ( a5 )
            {
              switch ( a5 )
              {
                case 1u:
                  goto LABEL_17;
                case 2u:
                  if ( !*(_QWORD *)(v19 + 120) )
                    PostTransformableMessageIL((struct tagWND *)v19, a2, a3, (__int64)a4, v12);
                  break;
                case 3u:
                  xxxSendMessageCallback(
                    v19,
                    a2,
                    a3,
                    (int)a4,
                    *(_QWORD *)a6,
                    *((_QWORD *)a6 + 1),
                    *((_DWORD *)a6 + 4),
                    v12,
                    1);
                  break;
                case 4u:
LABEL_37:
                  if ( !xxxSendTransformableMessageTimeout(
                          v19,
                          a2,
                          a3,
                          (int)a4,
                          *(_DWORD *)a6,
                          *((_DWORD *)a6 + 1),
                          *((_QWORD *)a6 + 1),
                          v12,
                          1)
                    && a5 == 6 )
                  {
LABEL_17:
                    v24 = 0LL;
                    if ( a2 < 0x1A )
                      goto LABEL_31;
                    if ( a2 <= 0x1B )
                    {
                      if ( a4 )
                      {
                        v30 = (_WORD *)*((_QWORD *)a4 + 1);
                        if ( *v30 )
                        {
                          v31 = UserAddAtomEx(v30, 0LL, 2LL);
                          v24 = v31;
                          if ( !v31 )
                            goto LABEL_22;
                        }
                        else
                        {
                          v24 = -1LL;
                        }
                      }
                      if ( !(unsigned int)PostEventMessageEx(
                                            *(struct tagTHREADINFO **)(v19 + 16),
                                            *(struct tagQ **)(*(_QWORD *)(v19 + 16) + 432LL),
                                            9u,
                                            (struct tagWND *)v19,
                                            a2,
                                            a3,
                                            v24,
                                            0LL)
                        && (unsigned __int64)(v24 + 1) > 1 )
                      {
                        UserDeleteAtom((unsigned __int16)v24);
                      }
                    }
                    else
                    {
                      if ( a2 == 126 )
                      {
                        PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(v41, v19);
                        v26 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
                        v27 = 126LL;
                        v28 = (unsigned __int16)(v26.m128i_i16[0] - PrimaryMonitorRectForWindow->m128i_i64[0]) | (unsigned __int64)(int)((v26.m128i_i32[1] << 16) - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16));
                        goto LABEL_21;
                      }
LABEL_31:
                      v28 = (unsigned __int64)a4;
                      v27 = a2;
LABEL_21:
                      xxxSendNotifyMessage(v19, v27, a3, v28, v12);
                    }
LABEL_22:
                    v15 = v42;
                  }
                  break;
                case 5u:
                  v32 = *(_QWORD *)(v19 + 16);
                  if ( *(_QWORD *)(v32 + 424) != CurrentProcessWin32Process || (*(_DWORD *)(v32 + 488) & 8) != 0 )
                  {
                    xxxSendNotifyMessage(v19, a2, a3, a4, v12);
                  }
                  else
                  {
                    _InterlockedIncrement(&glSendMessage);
                    xxxSendTransformableMessageTimeout(v19, a2, a3, (int)a4, 0, 0, 0LL, 1, 1);
                  }
                  break;
                case 6u:
                  goto LABEL_37;
              }
            }
            else
            {
              xxxSendTransformableMessageTimeout(v19, a2, a3, (int)a4, 0, 0, 0LL, v12, 1);
            }
            ThreadUnlock1(v23);
          }
        }
      }
    }
    v42 = ++v15;
    v17 = *v15;
  }
  while ( *v15 != 1 );
  v14 = v35;
LABEL_26:
  FreeHwndList(v14);
  return 1LL;
}
