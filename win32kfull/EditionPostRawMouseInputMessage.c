/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C0142A40
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C0142474 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     AllocateHidData @ 0x1C0009078 (AllocateHidData.c)
 *     FreeHidData @ 0x1C000DC20 (FreeHidData.c)
 *     PtiMouseFromQ @ 0x1C0037050 (PtiMouseFromQ.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage @ 0x1C012C794 (Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z @ 0x1C01423C6 (-DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z.c)
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x1C01AC08C (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AC288 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AC4B4 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 *     RawInputRequestedForMouse @ 0x1C01AD860 (RawInputRequestedForMouse.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct tagRAWMOUSE *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rbx
  void *v12; // r14
  __int64 v13; // rbp
  char v14; // r15
  struct tagQ *v15; // rsi
  struct tagWND *v16; // rdi
  __int64 HidData; // rax
  char *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct tagPROCESS_HID_TABLE *v22; // rbx
  struct tagWND *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rax
  char *v29; // rdi
  __int64 v30; // rcx
  __int64 **v31; // rax
  __int64 *i; // rdx
  __int64 v34; // [rsp+80h] [rbp-58h] BYREF
  __int64 v35; // [rsp+88h] [rbp-50h]

  if ( !(unsigned int)RawInputRequestedForMouse() )
    return 0LL;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 92) == 2 )
      v9 = *(_QWORD *)(a1 + 80);
    else
      v9 = 0LL;
    v10 = (__int64 *)(*(_QWORD *)(v9 + 16) + 432LL);
  }
  else
  {
    v8 = gptiForeground;
    if ( gptiForeground && (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiForeground) )
      return 0LL;
    v10 = (__int64 *)gpqForeground;
  }
  v11 = *v10;
  if ( *(_DWORD *)a4 == 2 )
    v12 = *(void **)(a4 + 8);
  else
    v12 = 0LL;
  v13 = 0LL;
  v14 = 1;
  if ( v11 )
  {
    v8 = *(_QWORD *)(PtiMouseFromQ(*v10) + 424);
    v13 = *(_QWORD *)(v8 + 824);
  }
  v15 = (struct tagQ *)v11;
  if ( !v13 || (*(_DWORD *)(v13 + 100) & 1) == 0 )
    goto LABEL_25;
  if ( (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage() )
    FlushThrottledRawMouseInput((struct tagPROCESS_HID_TABLE *)v13, a3);
  InputTraceLogging::Mouse::DeliverRawInput();
  v16 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(v11) + 424) + 824LL) + 64LL);
  if ( v16 )
    v15 = *(struct tagQ **)(*((_QWORD *)v16 + 2) + 432LL);
  HidData = AllocateHidData((__int64)v12, 0, 24LL, 0LL, (__int64)v16);
  v18 = (char *)HidData;
  if ( !HidData )
    return 0LL;
  v19 = *(_QWORD *)HidData;
  *(_OWORD *)(HidData + 56) = *(_OWORD *)a5;
  *(_QWORD *)(HidData + 72) = *((_QWORD *)a5 + 2);
  if ( (unsigned int)PostInputMessage(
                       v15,
                       v16,
                       0xFFu,
                       0LL,
                       v19,
                       a3,
                       0LL,
                       *((unsigned int *)a5 + 5),
                       0,
                       0LL,
                       0LL,
                       0LL,
                       0,
                       0,
                       0LL) )
    v14 = 0;
  else
    FreeHidData(v18);
LABEL_25:
  if ( *(_DWORD *)(SGDGetUserSessionState(v8) + 16852) )
  {
    v35 = 0LL;
    v22 = *(struct tagPROCESS_HID_TABLE **)(SGDGetUserSessionState(v20) + 408);
    v34 = 0LL;
    if ( v15 )
    {
      v35 = *(_QWORD *)(PtiMouseFromQ((__int64)v15) + 424);
      v34 = *((_QWORD *)v15 + 54);
    }
    while ( v22 != (struct tagPROCESS_HID_TABLE *)(SGDGetUserSessionState(v21) + 408) )
    {
      if ( (*((_DWORD *)v22 + 25) & 4) != 0 )
      {
        v23 = (struct tagWND *)*((_QWORD *)v22 + 8);
        if ( v23 )
        {
          v24 = *((_QWORD *)v23 + 5);
          if ( *(char *)(v24 + 20) >= 0 && *(char *)(v24 + 19) >= 0 )
          {
            v25 = *((_QWORD *)v23 + 2);
            v21 = grpdeskRitInput;
            v26 = *(_QWORD *)(v25 + 432);
            if ( *((_QWORD *)v23 + 3) == grpdeskRitInput )
            {
              if ( (unsigned __int8)CheckAccess(*(_QWORD *)(v25 + 424) + 864LL, &v34)
                || (v27 = *(_QWORD *)(*((_QWORD *)v22 + 8) + 16LL), *(int *)(*(_QWORD *)(v27 + 424) + 12LL) < 0) )
              {
                v21 = *(_QWORD *)(*((_QWORD *)v22 + 8) + 16LL);
                if ( *(_QWORD *)(v21 + 424) != v35
                  && ((*((_DWORD *)v22 + 25) & 8) == 0 || v14)
                  && (!(unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage()
                   || !ThrottleRawMouseInputToBackgroundListener(v22, v12, a5, a2, a3)) )
                {
                  if ( (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage() )
                  {
                    PostRawMouseInputToBackgroundListener(v22, v12, a5, a2, a3);
                  }
                  else
                  {
                    v28 = AllocateHidData((__int64)v12, 0, 24LL, 1LL, *((_QWORD *)v22 + 8));
                    v29 = (char *)v28;
                    if ( !v28 )
                      return 0LL;
                    *(_OWORD *)(v28 + 56) = *(_OWORD *)a5;
                    *(_QWORD *)(v28 + 72) = *((_QWORD *)a5 + 2);
                    InputTraceLogging::Mouse::DeliverRawInput();
                    if ( !(unsigned int)PostInputMessage(
                                          *(struct tagQ **)(*((_QWORD *)v23 + 2) + 432LL),
                                          v23,
                                          0xFFu,
                                          1uLL,
                                          *(_QWORD *)v29,
                                          a3,
                                          0LL,
                                          *((unsigned int *)a5 + 5),
                                          0,
                                          0LL,
                                          0LL,
                                          0LL,
                                          0,
                                          0,
                                          0LL) )
                      FreeHidData(v29);
                  }
                }
              }
              else
              {
                EtwTraceUIPIInputError(v27, 0LL, v26, v34, 5);
              }
            }
          }
        }
      }
      v22 = *(struct tagPROCESS_HID_TABLE **)v22;
    }
    if ( (unsigned int)Feature_ThrottleBackgroundRawMouseInput__private_IsEnabledDeviceUsage()
      && (unsigned __int8)RawMouseThrottlingTimerActive() )
    {
      v31 = (__int64 **)(SGDGetUserSessionState(v30) + 408);
      for ( i = *v31; i != (__int64 *)v31; i = (__int64 *)*i )
      {
        if ( (*((_DWORD *)i + 25) & 1) != 0 && *((_DWORD *)i + 28) == 2 )
          return 1LL;
      }
      ArmRawMouseThrottlingTimer(0LL, 0LL);
    }
  }
  return 1LL;
}
