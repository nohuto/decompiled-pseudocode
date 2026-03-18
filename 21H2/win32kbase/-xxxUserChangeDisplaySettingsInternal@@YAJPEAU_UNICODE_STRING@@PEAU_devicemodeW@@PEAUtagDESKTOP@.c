/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065210
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0064A40 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     DrvChangeDisplaySettings @ 0x1C00658C4 (DrvChangeDisplaySettings.c)
 *     LogDiagCDS @ 0x1C0065CE8 (LogDiagCDS.c)
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C0067580 (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvQueryMDEVPowerState @ 0x1C0067730 (DrvQueryMDEVPowerState.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C00682A4 (IszzzUpdateCursorImageSupported.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C00682D0 (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00682EC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     PowerDimUndimResend @ 0x1C007E570 (PowerDimUndimResend.c)
 *     SafeEnableMDEV @ 0x1C00D44A0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00D44F0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0143B68 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C014F270 (McTemplateK0_EtwWriteTransfer.c)
 *     DrvSetPruneFlag @ 0x1C0174C84 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C0174DC4 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        unsigned int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct tagDESKTOP *v8; // r13
  char v9; // si
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _DWORD *v17; // rax
  int v18; // r15d
  char v19; // dl
  BOOL v20; // ebx
  int v21; // r13d
  enum _MODE v22; // r12d
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // rdi
  int v24; // r8d
  _QWORD *v25; // rcx
  const UNICODE_STRING *v26; // r14
  void *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rbx
  ULONG TimeIncrement; // eax
  unsigned int v33; // r8d
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // [rsp+28h] [rbp-B1h]
  _BYTE v37[4]; // [rsp+88h] [rbp-51h] BYREF
  int v38; // [rsp+8Ch] [rbp-4Dh]
  int v39; // [rsp+90h] [rbp-49h]
  int v40; // [rsp+94h] [rbp-45h] BYREF
  BOOL v41; // [rsp+98h] [rbp-41h]
  int v42; // [rsp+9Ch] [rbp-3Dh]
  int v43; // [rsp+A0h] [rbp-39h]
  __int64 v44; // [rsp+A8h] [rbp-31h] BYREF
  int v45; // [rsp+B0h] [rbp-29h]
  __int64 v46; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v48; // [rsp+D0h] [rbp-9h]
  struct _devicemodeW *v50; // [rsp+130h] [rbp+57h]
  struct tagDESKTOP *Object; // [rsp+138h] [rbp+5Fh]
  __int64 v52; // [rsp+140h] [rbp+67h] BYREF

  Object = a3;
  v50 = a2;
  v44 = 0LL;
  LOBYTE(v52) = 0;
  v8 = a3;
  v48 = 0LL;
  v47 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(a1, &ChangeDisplayModeStart, 0LL);
  v9 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      12,
      (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
  }
  v10 = WPP_GLOBAL_Control;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      13,
      (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
  }
  v38 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        14,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  if ( (a4 & 2) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        15,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  v39 = a4 & 4;
  if ( (a4 & 4) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        16,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  if ( (a4 & 8) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        17,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        18,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  v45 = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        19,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  v42 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        20,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  if ( (a4 & 0x10000000) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xDu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        21,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  v43 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        22,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  if ( (a4 & 0x100) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        23,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  if ( (a4 & 0x200) != 0 )
  {
    v10 = WPP_GLOBAL_Control;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        24,
        (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids);
    }
  }
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_38;
  if ( (unsigned int)DrvQueryMDEVPowerState(*((_QWORD *)gpDispInfo + 2)) )
  {
    if ( gbMDEVDisabled )
    {
      if ( (a4 & 0x20) == 0 )
        goto LABEL_202;
      v36 = 1;
      goto LABEL_217;
    }
    LOBYTE(v10) = (a4 & 0x10000008) != 0;
    if ( ((unsigned __int8)v10 & ((a4 & 1) == 0)) != 0 )
      goto LABEL_38;
    v12 = 1610612736LL;
    v10 = (PDEVICE_OBJECT)(a4 & 0x60000000);
    if ( (a4 & 0x10000000) != 0 )
    {
      if ( (_DWORD)v10 )
        goto LABEL_38;
    }
    v15 = 2147483652LL;
    if ( (a4 & 0x80000004) == 0x80000004 )
    {
      if ( !(_DWORD)v10 )
      {
LABEL_44:
        if ( (a4 & 0x100) != 0 && a4 != 256 || (a4 & 0x200) != 0 && a4 != 512 )
          goto LABEL_38;
        if ( (gdwPUDFlags & 0x20000000) != 0
          && ((PVOID)PsGetCurrentProcess(v10, 2147483652LL, 1610612736LL, v11) != gpepCSRSS
           || !qword_1C029CC70
           || !(unsigned int)qword_1C029CC70(v10, v29, v30)) )
        {
          goto LABEL_202;
        }
        if ( !v8 || (*((_DWORD *)v8 + 12) & 8) != 0 )
        {
          v8 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
          Object = v8;
        }
        if ( (PVOID)PsGetCurrentProcess(v10, v15, v12, v11) == gpepCSRSS )
        {
          if ( !v8 )
            Object = grpdeskRitInput;
        }
        else if ( v8 != grpdeskRitInput )
        {
          if ( (a4 & 0x20) == 0 )
            goto LABEL_202;
          v36 = 0;
          goto LABEL_217;
        }
        if ( (a4 & 0x100) != 0 )
        {
          v16 = 0LL;
        }
        else
        {
          if ( (a4 & 0x200) == 0 )
          {
            v17 = DispBroker::DispBrokerClient::s_pSessionBroker;
            v18 = a4 & 0x10000002;
            v19 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
            v10 = (PDEVICE_OBJECT)((char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4);
            v20 = (a4 & 0x10000002) == 0;
            v21 = a4 & 0x80;
            v41 = v20;
            if ( !v19 )
              v10 = (PDEVICE_OBJECT)DispBroker::DispBrokerClient::s_pSessionBroker;
            v22 = a6;
            if ( *(_DWORD *)&v10->Type == 3 )
            {
              v46 = 0LL;
              v40 = 1;
              v13 = DrvChangeDisplaySettingsPreValidate(a1, v38, (__int64)&v46, (__int64)&v40);
              if ( v13 )
                goto LABEL_39;
              if ( v40 )
              {
                v31 = MEMORY[0xFFFFF78000000320];
                TimeIncrement = KeQueryTimeIncrement();
                v33 = a4;
                v26 = a1;
                v34 = v31 * TimeIncrement;
                v13 = xxxDispBrokerChangeDisplaySettings(a1, v50, v33, v22 == UserMode);
                LogDiagCDS(a1, v50, v46, (unsigned int)v22, v38, v41, v21, v42, v34, v13, v13, 11, 0, 0LL);
LABEL_90:
                if ( v13 >= 0 && v43 )
                  v13 = DrvSetVideoParameters(v26, 0);
                v10 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
                  || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
                {
                  v9 = 0;
                }
                if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v27 = &WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids;
                  LOBYTE(v27) = v9;
                  LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_D(
                    WPP_GLOBAL_Control->AttachedDevice,
                    (_DWORD)v27,
                    v24,
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    4,
                    14,
                    25,
                    (__int64)&WPP_96f72745ab4d382845baec52f5a57d1c_Traceguids,
                    v13);
                }
                goto LABEL_39;
              }
              v20 = v41;
              goto LABEL_59;
            }
            if ( v19 )
              v17 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
            if ( *v17 != 2 )
            {
LABEL_59:
              if ( v18 )
                goto LABEL_67;
              if ( CreateCachedMonitor() )
              {
                if ( qword_1C029C318 )
                  qword_1C029C318(0LL);
                if ( qword_1C029C918 && (int)qword_1C029C918() >= 0 && qword_1C029C920 )
                  qword_1C029C920();
LABEL_67:
                if ( qword_1C02971E0 && qword_1C029C928 && (int)qword_1C029C928() >= 0 && qword_1C029C930 )
                  qword_1C029C930();
                if ( qword_1C029B7F0 && (int)qword_1C029B7F0() >= 0 && qword_1C029B7F8 )
                  qword_1C029B7F8(*((_QWORD *)gpDispInfo + 5), 0LL, 0LL, 0LL);
                v23 = a7;
                v13 = DrvChangeDisplaySettings(
                        a1,
                        v22,
                        v38,
                        v20,
                        *((_QWORD *)gpDispInfo + 2),
                        (__int64)&v44,
                        (unsigned int)((a4 & 0x40) != 0) - 1,
                        v21,
                        v42,
                        v39,
                        (__int64)&v52,
                        (__int64)a7);
                if ( qword_1C029BD10 )
                  qword_1C029BD10(Object, &v47, CompositionObject::Release);
                if ( Object )
                  ObfReferenceObject(Object);
                if ( v18 )
                  goto LABEL_87;
                if ( v13 == 2 )
                {
                  TrackFullscreenMode(v39);
                  if ( v45 )
                  {
                    if ( (unsigned int)SafeDisableMDEV(1LL) )
                      SafeEnableMDEV(1LL);
                    if ( qword_1C029C378 )
                      qword_1C029C378();
                  }
                  v13 = 0;
                }
                else
                {
                  if ( v13 )
                  {
                    if ( v13 >= 0 )
                      goto LABEL_80;
                    if ( qword_1C029C378 )
                      qword_1C029C378();
                    if ( !(_BYTE)v52 )
                      goto LABEL_80;
                    v37[0] = 0;
                    v35 = Object ? ***((_QWORD ***)Object + 1) : 0LL;
                    if ( (int)DrvSetDisplayConfig(
                                0,
                                0,
                                2447,
                                2,
                                v35,
                                0,
                                0LL,
                                0LL,
                                *((struct _MDEV **)gpDispInfo + 2),
                                (__int64)&v44,
                                0LL,
                                0LL,
                                (__int64)v37,
                                0LL,
                                (__int64)v23,
                                0LL) < 0 )
                      goto LABEL_80;
                    TrackFullscreenMode(0);
                    if ( v37[0] )
                      goto LABEL_80;
                    v28 = 0LL;
                    *((_QWORD *)gpDispInfo + 2) = v44;
                  }
                  else
                  {
                    TrackFullscreenMode(v39);
                    *((_QWORD *)gpDispInfo + 2) = v44;
                    PowerDimUndimResend();
                    v28 = (unsigned int)v39;
                  }
                  xxxResetDisplayDevice((__int64)Object, v28, 0LL, 0LL);
                }
LABEL_80:
                if ( Object )
                {
                  v25 = (_QWORD *)*((_QWORD *)Object + 1);
                  if ( (*(_DWORD *)(*v25 + 64LL) & 1) == 0 )
                  {
                    if ( qword_1C029C820 )
                      qword_1C029C820(v25[3], 1LL, 66693LL);
                  }
                }
                if ( qword_1C029C318 )
                  qword_1C029C318(1LL);
                if ( (int)IszzzUpdateCursorImageSupported() >= 0 && qword_1C029C940 )
                  qword_1C029C940();
LABEL_87:
                if ( qword_1C029BE18 )
                  qword_1C029BE18(&v47);
                v26 = a1;
                goto LABEL_90;
              }
LABEL_202:
              v13 = -1;
              goto LABEL_39;
            }
            if ( !v43 )
              goto LABEL_202;
            v36 = 0;
LABEL_217:
            v13 = DrvSetVideoParameters(a1, v36);
            if ( v13 >= 0 )
              goto LABEL_39;
            goto LABEL_202;
          }
          LOBYTE(v16) = 1;
        }
        v13 = DrvSetPruneFlag(a1, v16, (unsigned int)a6);
        goto LABEL_39;
      }
    }
    else if ( (_DWORD)v10 != 1610612736 )
    {
      goto LABEL_44;
    }
LABEL_38:
    v13 = -4;
    goto LABEL_39;
  }
  if ( (a4 & 0x20) == 0 || (v13 = DrvSetVideoParameters(a1, 1), v13 < 0) )
    v13 = -5;
LABEL_39:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v10, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v13;
}
