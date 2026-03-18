/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C00A9E58
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0054A60 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00A2A6C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSetInformationThread @ 0x1C00A6350 (xxxSetInformationThread.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F2460 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxBroadcastMessage @ 0x1C012015C (xxxBroadcastMessage.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C0158B30 (EditionxxxBroadcastSPIChange.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00A2A6C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x1C00A735C (_PostTransformableMessageIL.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C00ACE14 (xxxSendMessageCallback.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C00AD384 (GetPrimaryMonitorRectForWindow.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0113118 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  unsigned int v10; // ebx
  int v12; // r14d
  __int64 v13; // rcx
  struct tagBWL *v14; // rsi
  __int64 *v15; // r13
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r8
  __int16 v21; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r13
  _WORD *v27; // rcx
  unsigned __int16 v28; // ax
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v30; // xmm0
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // [rsp+58h] [rbp-59h]
  __int64 CurrentProcessWin32Process; // [rsp+60h] [rbp-51h]
  struct tagBWL *v38; // [rsp+68h] [rbp-49h]
  __int128 v39; // [rsp+70h] [rbp-41h] BYREF
  __int128 v40; // [rsp+80h] [rbp-31h] BYREF
  __int64 v41; // [rsp+90h] [rbp-21h]
  __int128 v42; // [rsp+98h] [rbp-19h] BYREF
  __int64 v43; // [rsp+A8h] [rbp-9h]
  _BYTE v44[24]; // [rsp+B0h] [rbp-1h] BYREF
  __int64 *v45; // [rsp+F8h] [rbp+47h]

  v41 = 0LL;
  v43 = 0LL;
  v10 = a2;
  v40 = 0LL;
  v42 = 0LL;
  if ( (unsigned int)(a2 - 1024) <= 0xBBFF )
  {
    v36 = 1LL;
    UserSetLastError(87LL, a2);
  }
  else
  {
    v36 = 0LL;
  }
  v12 = a7;
  if ( !a7 && (v10 == 26 || v10 == 29 || v10 == 21 || v10 == 295 || v10 == 794 || v10 - 804 <= 1) )
    v12 = 1;
  if ( a1 )
    goto LABEL_7;
  v39 = 0LL;
  if ( v10 >= 0x1A )
  {
    if ( v10 <= 0x1B )
    {
      if ( a4 )
      {
        if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v39, a4) )
          return 0LL;
        PushW32ThreadLock(*((__int64 *)&v39 + 1), &v42, (__int64)Win32FreePool);
        a4 = (struct _LARGE_STRING *)&v39;
      }
      xxxSystemBroadcastMessage(v10);
      if ( a4 )
        PopAndFreeAlwaysW32ThreadLock((__int64)&v42);
      return 1LL;
    }
    if ( v10 != 30 )
    {
      v34 = 42;
      if ( v10 != 42 )
      {
        if ( v10 - 712 > 1 )
          goto LABEL_50;
        v34 = v10;
      }
      xxxSystemBroadcastMessage(v34);
      return 1LL;
    }
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
      return 0LL;
  }
LABEL_50:
  a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  if ( !a1 )
  {
    UserSetLastError(5LL, a2);
    return 0LL;
  }
LABEL_7:
  v38 = BuildHwndList(*(ShellWindowManagement **)(a1 + 112), (const struct tagWND *)2, 0LL, 1);
  v14 = v38;
  if ( !v38 )
    return 0LL;
  v15 = (__int64 *)((char *)v38 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v16 = *((_QWORD *)v38 + 4);
  v45 = (__int64 *)((char *)v38 + 32);
  if ( v16 == 1 )
    goto LABEL_9;
  do
  {
    v18 = HMValidateHandleNoSecure(v16, 1);
    v19 = v18;
    if ( v18 )
    {
      v20 = *(_QWORD *)(v18 + 40);
      if ( (*(_WORD *)(v20 + 42) & 0x2FFF) != 0x29C )
      {
        v21 = **(_WORD **)(*(_QWORD *)(v18 + 136) + 8LL);
        if ( *(_WORD *)(gpsi + 908LL) != v21
          && gaOleMainThreadWndClass != v21
          && (!v36 || (*(_BYTE *)(v20 + 21) & 2) == 0)
          && (v10 - 784 > 1
           || (*(_BYTE *)(v20 + 31) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v19 + 16) + 488LL) & 0x800) != 0) )
        {
          if ( a8 == 1 )
          {
            if ( *(_DWORD *)(v20 + 236) == 1 )
              goto LABEL_19;
          }
          else if ( a8 != 2 || *(_DWORD *)(v20 + 236) != 1 || (*(_BYTE *)(v20 + 232) & 0x40) != 0 )
          {
LABEL_19:
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v40 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v40;
            *((_QWORD *)&v40 + 1) = v19;
            HMLockObject(v19);
            v25 = 0LL;
            switch ( a5 )
            {
              case 0u:
                xxxSendTransformableMessageTimeout((unsigned __int64 *)v19, v10, a3, (__int64)a4, 0, 0, 0LL, v12, 1);
                goto LABEL_28;
              case 1u:
                goto LABEL_21;
              case 2u:
                if ( !*(_QWORD *)(v19 + 120) )
                  PostTransformableMessageIL((struct tagWND *)v19, v10, a3, (__int64)a4, v12);
                goto LABEL_28;
              case 3u:
                xxxSendMessageCallback(
                  (struct tagWND *)v19,
                  v10,
                  *(_QWORD *)a6,
                  *((_QWORD *)a6 + 1),
                  *((_DWORD *)a6 + 4),
                  v12,
                  1);
                goto LABEL_28;
              case 4u:
LABEL_40:
                v33 = xxxSendTransformableMessageTimeout(
                        (unsigned __int64 *)v19,
                        v10,
                        a3,
                        (__int64)a4,
                        *(_DWORD *)a6,
                        *((_DWORD *)a6 + 1),
                        *((unsigned __int64 **)a6 + 1),
                        v12,
                        1);
                v25 = 0LL;
                if ( v33 || a5 != 6 )
                  goto LABEL_28;
LABEL_21:
                v26 = 0LL;
                if ( v10 < 0x1A )
                  goto LABEL_37;
                if ( v10 <= 0x1B )
                {
                  if ( !a4 )
                    goto LABEL_26;
                  v27 = (_WORD *)*((_QWORD *)a4 + 1);
                  if ( !*v27 )
                  {
                    v26 = -1LL;
                    goto LABEL_26;
                  }
                  v28 = UserAddAtomEx(v27, 0LL, 2LL);
                  v26 = v28;
                  if ( v28 )
                  {
LABEL_26:
                    if ( !(unsigned int)PostEventMessageEx(
                                          *(struct tagTHREADINFO **)(v19 + 16),
                                          *(struct tagQ **)(*(_QWORD *)(v19 + 16) + 432LL),
                                          9u,
                                          (struct tagWND *)v19,
                                          v10,
                                          a3,
                                          v26,
                                          0LL)
                      && (unsigned __int64)(v26 + 1) > 1 )
                    {
                      UserDeleteAtom((unsigned __int16)v26);
                    }
                  }
LABEL_27:
                  v15 = v45;
LABEL_28:
                  ThreadUnlock1(v23, v25, v24);
                  goto LABEL_29;
                }
                if ( v10 == 126 )
                {
                  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(v44, v19);
                  v30 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
                  v31 = 126LL;
                  v32 = (unsigned __int16)(v30.m128i_i16[0] - PrimaryMonitorRectForWindow->m128i_i64[0]) | (unsigned __int64)(int)((v30.m128i_i32[1] << 16) - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16));
                }
                else
                {
LABEL_37:
                  v32 = (unsigned __int64)a4;
                  v31 = v10;
                }
                xxxSendNotifyMessage(v19, v31, a3, v32, v12);
                goto LABEL_27;
              case 5u:
                v35 = *(_QWORD *)(v19 + 16);
                if ( *(_QWORD *)(v35 + 424) != CurrentProcessWin32Process || (*(_DWORD *)(v35 + 488) & 8) != 0 )
                {
                  xxxSendNotifyMessage(v19, v10, a3, a4, v12);
                }
                else
                {
                  _InterlockedIncrement(&glSendMessage);
                  xxxSendTransformableMessageTimeout((unsigned __int64 *)v19, v10, a3, (__int64)a4, 0, 0, 0LL, 1, 1);
                }
                break;
              case 6u:
                goto LABEL_40;
            }
            goto LABEL_28;
          }
        }
      }
    }
LABEL_29:
    v45 = ++v15;
    v16 = *v15;
  }
  while ( *v15 != 1 );
  v14 = v38;
LABEL_9:
  FreeHwndList(v14);
  return 1LL;
}
