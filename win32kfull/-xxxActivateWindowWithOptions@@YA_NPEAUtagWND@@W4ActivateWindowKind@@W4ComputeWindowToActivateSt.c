/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0096318 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00DBF58 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00EA204 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C75BC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02035C0 (xxxHandleNCMouseGuys.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00200C4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0022378 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002574C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00C8810 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0222F70 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

char __fastcall xxxActivateWindowWithOptions(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // edi
  int v6; // r15d
  char v7; // si
  int v8; // ebx
  struct tagWND *v9; // r13
  __int64 v10; // rcx
  PDEVICE_OBJECT *v11; // rdx
  PDEVICE_OBJECT Timer_high; // rcx
  int v13; // ebx
  unsigned int v14; // r15d
  char v15; // r9
  const char *v16; // rax
  bool v17; // bl
  char ThreadId; // al
  int v19; // edx
  int v20; // r8d
  __int16 v21; // cx
  char v22; // r9
  _UNKNOWN **v24; // r8
  int v25; // edx
  char v26; // dl
  PDEVICE_OBJECT v27; // rcx
  __int16 v28; // ax
  bool v29; // [rsp+50h] [rbp-30h]
  char v30; // [rsp+51h] [rbp-2Fh]
  char v31; // [rsp+52h] [rbp-2Eh]
  char v32; // [rsp+53h] [rbp-2Dh]
  __int128 v33; // [rsp+58h] [rbp-28h] BYREF
  __int128 v34; // [rsp+68h] [rbp-18h] BYREF
  __int64 v35; // [rsp+78h] [rbp-8h]
  bool v36; // [rsp+C0h] [rbp+40h]

  v30 = 0;
  v36 = 0;
  v34 = 0LL;
  v5 = a4;
  v31 = 0;
  v35 = 0LL;
  LOBYTE(a4) = 0;
  v29 = 0;
  v6 = 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    return 0;
  v7 = 1;
  if ( (_DWORD)a2 )
  {
    v33 = 0LL;
    if ( !(unsigned __int8)anonymous_namespace_::ComputeWindowToActivate(a1, a2, a3, &v33) )
    {
LABEL_70:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v7 = 0;
      }
      v24 = &WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = 94;
        LOBYTE(v25) = v7;
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          (_DWORD)v24,
          a4,
          4,
          2,
          94,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
      }
      return 0;
    }
    v9 = (struct tagWND *)v33;
    if ( !(_QWORD)v33 || (v8 = DWORD2(v33)) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3868LL);
      v8 = DWORD2(v33);
      v9 = (struct tagWND *)v33;
    }
    LOBYTE(a4) = a1 != v9;
    v29 = a1 != v9;
  }
  else
  {
    if ( (_DWORD)a3 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3856LL);
      LOBYTE(a4) = 0;
    }
    v8 = 1;
    v9 = a1;
    v31 = v5 == 1;
  }
  if ( !v9 )
    goto LABEL_70;
  if ( !v8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3887LL);
    LOBYTE(a4) = v29;
  }
  if ( (_BYTE)a4 )
  {
    *(_QWORD *)&v34 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v34;
    *((_QWORD *)&v34 + 1) = v9;
    HMLockObject(v9);
  }
  v10 = *((_QWORD *)v9 + 2);
  v11 = &WPP_GLOBAL_Control;
  if ( *(_QWORD *)(v10 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v11,
        a3,
        (unsigned int)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
        4,
        2,
        95,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    }
    v32 = anonymous_namespace_::FAllowForegroundActivate((__int64)v9);
    if ( v32 )
    {
      v36 = *(_DWORD *)(gptiCurrent + 908LL) == 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (Timer_high = (PDEVICE_OBJECT)HIDWORD(WPP_GLOBAL_Control->Timer), ((unsigned __int8)Timer_high & 2) == 0)
        || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v26 = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v26,
          a3,
          (__int64)gFullLog,
          4u,
          2u,
          0x60u,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
          *(_DWORD *)(gptiCurrent + 908LL) == 0);
      v22 = 0;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v11) = 0;
      }
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v11,
          a3,
          97,
          4,
          2,
          97,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
      }
      v22 = anonymous_namespace_::xxxLocalActivateWindow(v9);
    }
    LOBYTE(v11) = v36;
    v30 = v22;
    if ( !v32 )
      goto LABEL_63;
    goto LABEL_25;
  }
  if ( v10 == gptiCurrent )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3932LL);
    v11 = &WPP_GLOBAL_Control;
  }
  if ( v8 == 5 )
  {
    v6 = 31;
    v27 = WPP_GLOBAL_Control;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v28 = 98;
LABEL_110:
    WPP_RECORDER_AND_TRACE_SF_(
      v27->AttachedDevice,
      (_DWORD)v11,
      a3,
      (unsigned int)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      4,
      2,
      v28,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
    goto LABEL_25;
  }
  if ( v8 == 6 )
  {
    v6 = 31;
    v27 = WPP_GLOBAL_Control;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v28 = 99;
    goto LABEL_110;
  }
  Timer_high = (PDEVICE_OBJECT)gpqForeground;
  if ( gpqForeground != *(_QWORD *)(gptiCurrent + 432LL) && gpqForeground )
    goto LABEL_63;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 908LL) || (v36 = 0, v31) )
    v36 = 1;
  v13 = v8 - 3;
  if ( v13 )
  {
    if ( v13 == 1 )
      v6 = 3;
  }
  else
  {
    v6 = 3;
    if ( (unsigned int)CoreWindowProp::IsComponent(a1) && !CoreWindowProp::GetHost(a1) )
      v6 = 11;
  }
LABEL_25:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v11,
      a3,
      100,
      4,
      2,
      100,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
  }
  v14 = v6 | 4;
  if ( *(_QWORD *)(*((_QWORD *)v9 + 2) + 432LL) == gpqForeground && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4060LL);
  v15 = xxxSetForegroundWindowWithOptions((__int64)v9, v14, 0, v31);
  v30 = v15;
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = "Success";
    if ( !v15 )
      v16 = "Failure";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      (char)v11,
      a3,
      (__int64)gFullLog,
      4u,
      2u,
      0x65u,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      v16);
  }
  if ( v36 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
    Timer_high = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_63;
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*gptiCurrent);
    v21 = 102;
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x20u;
    Timer_high = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_63;
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*gptiCurrent);
    v21 = 103;
  }
  LOBYTE(v20) = v17;
  LOBYTE(v19) = v7;
  WPP_RECORDER_AND_TRACE_SF_D(
    WPP_GLOBAL_Control->AttachedDevice,
    v19,
    v20,
    (_DWORD)gFullLog,
    4,
    2,
    v21,
    (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
    ThreadId);
LABEL_63:
  if ( v29 )
    ThreadUnlock1(Timer_high, v11, a3);
  return v30;
}
