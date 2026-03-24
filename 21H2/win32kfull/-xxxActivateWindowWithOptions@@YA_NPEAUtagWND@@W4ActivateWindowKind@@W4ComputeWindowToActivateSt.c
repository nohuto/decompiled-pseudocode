/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039B68
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0049254 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00C0B18 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C0111C80 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0124FE4 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F19F8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223D04 (xxxHandleNCMouseGuys.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00279F0 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_SF_s @ 0x1C003B844 (WPP_RECORDER_SF_s.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DAA8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F430 (WPP_RECORDER_SF_q.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B740 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0122908 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall xxxActivateWindowWithOptions(__int64 a1, int a2, int a3, int a4)
{
  const struct tagWND *v4; // rsi
  bool v6; // r9
  int v7; // r12d
  char v8; // r13
  int v9; // ebx
  const struct tagWND *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // bl
  int v15; // ebx
  unsigned int v16; // r12d
  int v17; // edx
  const char *v18; // rax
  int v19; // eax
  int v20; // r9d
  int v21; // r9d
  bool v22; // [rsp+30h] [rbp-30h]
  bool v23; // [rsp+31h] [rbp-2Fh]
  bool v24; // [rsp+32h] [rbp-2Eh]
  char v25; // [rsp+33h] [rbp-2Dh]
  __int128 v26; // [rsp+38h] [rbp-28h] BYREF
  __int128 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h]
  struct tagWND *v29; // [rsp+A0h] [rbp+40h]

  v29 = (struct tagWND *)a1;
  v4 = (const struct tagWND *)a1;
  v25 = 0;
  v22 = 0;
  v27 = 0LL;
  v24 = 0;
  v28 = 0LL;
  v6 = 0;
  v23 = 0;
  v7 = 2;
  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0;
  if ( (_BYTE)a1 == 64 )
    return 0;
  v8 = 1;
  if ( a2 )
  {
    v26 = 0LL;
    if ( !anonymous_namespace_::ComputeWindowToActivate(v4, a2, a3, &v26) )
      goto LABEL_46;
    v10 = (const struct tagWND *)v26;
    if ( !(_QWORD)v26 || (v9 = DWORD2(v26)) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3780LL);
      v9 = DWORD2(v26);
      v10 = (const struct tagWND *)v26;
    }
    v6 = v4 != v10;
    v23 = v4 != v10;
  }
  else
  {
    if ( a3 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3768LL);
      v6 = 0;
    }
    v9 = 1;
    v10 = v4;
    v24 = a4 == 1;
  }
  if ( !v10 )
  {
LABEL_46:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(a1, a2, 2, 45, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
    }
    return 0;
  }
  if ( !v9 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3799LL);
    v6 = v23;
  }
  if ( v6 )
  {
    *(_QWORD *)&v27 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v27;
    *((_QWORD *)&v27 + 1) = v10;
    HMLockObject(v10);
  }
  v11 = *((_QWORD *)v10 + 2);
  if ( *(_QWORD *)(v11 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    v8 = anonymous_namespace_::FAllowForegroundActivate(v10);
    if ( v8 )
      v22 = *(_DWORD *)(gptiCurrent + 900LL) == 0;
    else
      v25 = anonymous_namespace_::xxxLocalActivateWindow(v10);
  }
  else
  {
    if ( v11 == gptiCurrent )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3840LL);
    if ( v9 != 5 )
    {
      if ( v9 == 6 )
      {
        v7 = 31;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_37;
        v21 = 46;
      }
      else
      {
        if ( v9 != 7 )
        {
          v12 = gpqForeground;
          if ( gpqForeground != *(_QWORD *)(gptiCurrent + 432LL) && gpqForeground )
          {
            v13 = 0;
            goto LABEL_16;
          }
          if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 900LL) || (v22 = 0, v24) )
            v22 = 1;
          v15 = v9 - 3;
          if ( v15 )
          {
            if ( v15 == 1 )
              v7 = 3;
          }
          else
          {
            v7 = 3;
            if ( (unsigned int)CoreWindowProp::IsComponent(v29) && !CoreWindowProp::GetHost(v29) )
              v7 = 11;
          }
          goto LABEL_35;
        }
        v7 = 31;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_37;
        v21 = 48;
      }
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(v9 - 6, a2, 2, v21, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
LABEL_35:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(v12, a2, 2, 49, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
      }
LABEL_37:
      v16 = v7 | 4;
      if ( *(_QWORD *)(*((_QWORD *)v10 + 2) + 432LL) == gpqForeground
        && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3980LL);
      }
      v13 = xxxSetForegroundWindowWithOptions(v10, v16, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = "Success";
        if ( !v13 )
          v18 = "Failure";
        WPP_RECORDER_SF_s(
          (unsigned int)"Failure",
          v17,
          2,
          50,
          (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids,
          (__int64)v18);
      }
      v19 = *(_DWORD *)(gptiCurrent + 488LL);
      if ( v22 )
      {
        *(_DWORD *)(gptiCurrent + 488LL) = v19 | 0x20;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v20 = 51;
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 488LL) = v19 & 0xFFFFFFDF;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v20 = 52;
      }
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_q(v12, v17, 2, v20, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids, gptiCurrent);
      goto LABEL_16;
    }
    v7 = 31;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_37;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(v9 - 5, a2, 2, 47, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
  }
  if ( v8 )
    goto LABEL_35;
  v13 = v25;
LABEL_16:
  if ( v23 )
    ThreadUnlock1(v12);
  return v13;
}
