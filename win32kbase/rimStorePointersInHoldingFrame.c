/*
 * XREFs of rimStorePointersInHoldingFrame @ 0x1C01CF2D0
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01CD424 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAllocPointerInfoNodeList @ 0x1C00F0448 (rimAllocPointerInfoNodeList.c)
 *     rimFindHoldingFrame @ 0x1C00F07AA (rimFindHoldingFrame.c)
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     RIMCmGetButtonContact @ 0x1C00F1A60 (RIMCmGetButtonContact.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01DE028 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall rimStorePointersInHoldingFrame(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *HoldingFrame; // rbx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  int v15; // edx
  __int64 ButtonContact; // rsi
  int v17; // r8d
  _OWORD *v18; // rax
  int v19; // r9d
  __int64 active; // rax
  __int64 v21; // xmm1_8
  __int64 v22; // rsi
  _OWORD *v23; // r14
  _OWORD *v24; // rdx
  __int128 v25; // [rsp+58h] [rbp-11h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1h]
  __int64 v27; // [rsp+70h] [rbp+7h] BYREF
  int v28; // [rsp+78h] [rbp+Fh]
  __int64 v29; // [rsp+80h] [rbp+17h]

  v4 = *(_QWORD *)(a2 + 472);
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 640);
  if ( !HoldingFrame )
    return 0LL;
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 647);
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 648);
  if ( *((_DWORD *)HoldingFrame + 10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 649);
  if ( HoldingFrame[9] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 650);
  v11 = rimAllocPointerInfoNodeList(v8, v7, a3);
  HoldingFrame[9] = v11;
  if ( !v11 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        (_DWORD)gRimLog,
        4,
        1,
        46,
        (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids);
    }
    return 0LL;
  }
  *((_DWORD *)HoldingFrame + 10) = a3;
  if ( *((_DWORD *)HoldingFrame + 11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 661);
  if ( a4 )
  {
    ButtonContact = RIMCmGetButtonContact(v4);
    if ( (*(_DWORD *)(ButtonContact + 32) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 667);
    if ( (*(_DWORD *)(ButtonContact + 32) & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 668);
    if ( (*(_DWORD *)(ButtonContact + 2444) & 0x2000) != 0 )
    {
      if ( HoldingFrame[10] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 671);
      HoldingFrame[10] = HoldingFrame[9];
    }
    v18 = (_OWORD *)HoldingFrame[9];
    *v18 = *(_OWORD *)(ButtonContact + 2416);
    v18[1] = *(_OWORD *)(ButtonContact + 2432);
    v18[2] = *(_OWORD *)(ButtonContact + 2448);
    v18[3] = *(_OWORD *)(ButtonContact + 2464);
    v18[4] = *(_OWORD *)(ButtonContact + 2480);
    v18[5] = *(_OWORD *)(ButtonContact + 2496);
    v18[6] = *(_OWORD *)(ButtonContact + 2512);
    v18 += 8;
    *(v18 - 1) = *(_OWORD *)(ButtonContact + 2528);
    *v18 = *(_OWORD *)(ButtonContact + 2544);
    v18[1] = *(_OWORD *)(ButtonContact + 2560);
    v18[2] = *(_OWORD *)(ButtonContact + 2576);
    v18[3] = *(_OWORD *)(ButtonContact + 2592);
    *((_DWORD *)HoldingFrame + 11) = 1;
  }
  else
  {
    active = RIMCmActiveContactsBeginNoButton(&v27, v4);
    v21 = *(_QWORD *)(active + 16);
    v25 = *(_OWORD *)active;
    v26 = v21;
    while ( 1 )
    {
      RIMCmActiveContactsEnd((__int64)&v27, v4);
      v22 = v26;
      if ( (_QWORD)v25 == v27 && DWORD2(v25) == v28 && v26 == v29 )
        break;
      v23 = (_OWORD *)(v26 + 2400);
      if ( (*(_DWORD *)(v26 + 16) & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 686);
      if ( (*(_DWORD *)(v22 + 16) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 687);
      if ( (*(_DWORD *)(v22 + 2348) & 1) != 0 )
      {
        if ( (*(_DWORD *)(v22 + 2428) & 0x2000) != 0 )
        {
          if ( HoldingFrame[10] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 700);
          HoldingFrame[10] = HoldingFrame[9] + 192LL * *((unsigned int *)HoldingFrame + 11);
        }
        v24 = (_OWORD *)(HoldingFrame[9] + 192LL * *((unsigned int *)HoldingFrame + 11));
        *v24 = *v23;
        v24[1] = *(_OWORD *)(v22 + 2416);
        v24[2] = *(_OWORD *)(v22 + 2432);
        v24[3] = *(_OWORD *)(v22 + 2448);
        v24[4] = *(_OWORD *)(v22 + 2464);
        v24[5] = *(_OWORD *)(v22 + 2480);
        v24[6] = *(_OWORD *)(v22 + 2496);
        v24 += 8;
        *(v24 - 1) = *(_OWORD *)(v22 + 2512);
        *v24 = *(_OWORD *)(v22 + 2528);
        v24[1] = *(_OWORD *)(v22 + 2544);
        v24[2] = *(_OWORD *)(v22 + 2560);
        v24[3] = *(_OWORD *)(v22 + 2576);
        ++*((_DWORD *)HoldingFrame + 11);
      }
      RIMCmActiveContactsNext(v4, &v25);
    }
  }
  v19 = *((_DWORD *)HoldingFrame + 11);
  if ( v19 != *((_DWORD *)HoldingFrame + 10) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v17,
        (_DWORD)gRimLog,
        4,
        1,
        47,
        (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids,
        v19,
        *((_DWORD *)HoldingFrame + 10));
    }
    return 0LL;
  }
  return 1LL;
}
