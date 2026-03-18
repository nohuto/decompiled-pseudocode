/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C014F920
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C014F34E (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     AllocateHidData @ 0x1C0009244 (AllocateHidData.c)
 *     FreeHidData @ 0x1C000E960 (FreeHidData.c)
 *     PtiMouseFromQ @ 0x1C005E080 (PtiMouseFromQ.c)
 *     PostInputMessage @ 0x1C0117268 (PostInputMessage.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z @ 0x1C014F2A0 (-DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z.c)
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x1C01AAEC0 (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AB0B8 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     ?ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AB2E4 (-ThrottleRawMouseInputToBackgroundListener@@YA_NPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_.c)
 *     RawInputRequestedForMouse @ 0x1C01AC670 (RawInputRequestedForMouse.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct tagRAWMOUSE *a5)
{
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rbx
  void *v11; // r14
  __int64 v12; // rcx
  char v13; // bp
  struct tagQ *v14; // rdi
  __int64 v15; // r15
  struct tagWND *v16; // rsi
  __int64 HidData; // rax
  char *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct tagPROCESS_HID_TABLE *v22; // rbx
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 **v29; // rax
  __int64 *i; // rdx
  __int64 v32; // [rsp+80h] [rbp-38h] BYREF

  if ( !(unsigned int)RawInputRequestedForMouse() )
    return 0LL;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 92) == 2 )
      v8 = *(_QWORD *)(a1 + 80);
    else
      v8 = 0LL;
    v9 = (__int64 *)(*(_QWORD *)(v8 + 16) + 432LL);
  }
  else
  {
    if ( gptiForeground && (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiForeground) )
      return 0LL;
    v9 = (__int64 *)gpqForeground;
  }
  v10 = *v9;
  if ( *(_DWORD *)a4 == 2 )
    v11 = *(void **)(a4 + 8);
  else
    v11 = 0LL;
  v12 = 0LL;
  v13 = 1;
  if ( v10 )
    v12 = *(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(*v9) + 424) + 848LL);
  v14 = (struct tagQ *)v10;
  if ( !v12 || (*(_DWORD *)(v12 + 100) & 1) == 0 )
  {
    v15 = 0LL;
    goto LABEL_24;
  }
  FlushThrottledRawMouseInput((struct tagPROCESS_HID_TABLE *)v12, a3);
  InputTraceLogging::Mouse::DeliverRawInput();
  v15 = 0LL;
  v16 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(PtiMouseFromQ(v10) + 424) + 848LL) + 64LL);
  if ( v16 )
    v14 = *(struct tagQ **)(*((_QWORD *)v16 + 2) + 432LL);
  HidData = AllocateHidData((__int64)v11, 0, 24LL, 0LL, (__int64)v16);
  v18 = (char *)HidData;
  if ( !HidData )
    return 0LL;
  v19 = *(_QWORD *)HidData;
  *(_OWORD *)(HidData + 56) = *(_OWORD *)a5;
  *(_QWORD *)(HidData + 72) = *((_QWORD *)a5 + 2);
  if ( (unsigned int)PostInputMessage(
                       v14,
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
    v13 = 0;
  else
    FreeHidData(v18);
LABEL_24:
  if ( *(_DWORD *)(SGDGetUserSessionState(v12) + 16852) )
  {
    v22 = *(struct tagPROCESS_HID_TABLE **)(SGDGetUserSessionState(v20) + 408);
    v32 = 0LL;
    if ( v14 )
    {
      v15 = *(_QWORD *)(PtiMouseFromQ((__int64)v14) + 424);
      v32 = *((_QWORD *)v14 + 54);
    }
    while ( v22 != (struct tagPROCESS_HID_TABLE *)(SGDGetUserSessionState(v21) + 408) )
    {
      if ( (*((_DWORD *)v22 + 25) & 4) != 0 )
      {
        v23 = (_QWORD *)*((_QWORD *)v22 + 8);
        if ( v23 )
        {
          v24 = v23[5];
          if ( *(char *)(v24 + 20) >= 0 && *(char *)(v24 + 19) >= 0 )
          {
            v25 = v23[2];
            v21 = grpdeskRitInput;
            v26 = *(_QWORD *)(v25 + 432);
            if ( v23[3] == grpdeskRitInput )
            {
              if ( (unsigned __int8)CheckAccess(*(_QWORD *)(v25 + 424) + 888LL, &v32)
                || (v27 = *(_QWORD *)(*((_QWORD *)v22 + 8) + 16LL), *(int *)(*(_QWORD *)(v27 + 424) + 12LL) < 0) )
              {
                v21 = *(_QWORD *)(*((_QWORD *)v22 + 8) + 16LL);
                if ( *(_QWORD *)(v21 + 424) != v15
                  && ((*((_DWORD *)v22 + 25) & 8) == 0 || v13)
                  && !ThrottleRawMouseInputToBackgroundListener(v22, v11, a5, a2, a3) )
                {
                  PostRawMouseInputToBackgroundListener(v22, v11, a5, a2, a3);
                }
              }
              else
              {
                EtwTraceUIPIInputError(v27, 0LL, v26, v32);
              }
            }
          }
        }
      }
      v22 = *(struct tagPROCESS_HID_TABLE **)v22;
    }
    if ( (unsigned __int8)RawMouseThrottlingTimerActive(v21) )
    {
      v29 = (__int64 **)(SGDGetUserSessionState(v28) + 408);
      for ( i = *v29; i != (__int64 *)v29; i = (__int64 *)*i )
      {
        if ( (*((_DWORD *)i + 25) & 1) != 0 && *((_DWORD *)i + 28) == 2 )
          return 1LL;
      }
      ArmRawMouseThrottlingTimer(0LL, 0LL);
    }
  }
  return 1LL;
}
