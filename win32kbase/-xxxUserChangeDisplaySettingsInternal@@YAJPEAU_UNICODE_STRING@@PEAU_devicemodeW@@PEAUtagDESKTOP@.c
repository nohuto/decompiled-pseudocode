/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DB90
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C015FD70 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     PowerDimUndimResend @ 0x1C00108AC (PowerDimUndimResend.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0010A90 (-TrackFullscreenMode@@YAXH@Z.c)
 *     DrvQueryMDEVPowerState @ 0x1C0011490 (DrvQueryMDEVPowerState.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00121E8 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     xxxResetDisplayDevice @ 0x1C0016410 (xxxResetDisplayDevice.c)
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SafeEnableMDEV @ 0x1C00D8A70 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00D8AC0 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0156F40 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C019249C (DrvChangeDisplaySettings.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C019288C (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetPruneFlag @ 0x1C01949DC (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C0194B28 (DrvSetVideoParameters.c)
 *     LogDiagCDS @ 0x1C0195280 (LogDiagCDS.c)
 *     IszzzUpdateCursorImageSupported @ 0x1C0272024 (IszzzUpdateCursorImageSupported.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct tagDESKTOP *v8; // r13
  char v9; // si
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  int v17; // r15d
  char v18; // dl
  BOOL v19; // ebx
  int v20; // r13d
  enum _MODE v21; // r12d
  __int64 v22; // rbx
  ULONG TimeIncrement; // eax
  int v24; // r8d
  const UNICODE_STRING *v25; // r14
  __int64 v26; // rdi
  int v27; // r8d
  __int64 v28; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v29; // rdi
  struct _MDEV *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // edx
  void *v35; // rax
  _QWORD *v36; // rcx
  void *v37; // rdx
  int v39; // [rsp+28h] [rbp-B1h]
  bool v40; // [rsp+88h] [rbp-51h] BYREF
  int v41; // [rsp+8Ch] [rbp-4Dh]
  int v42; // [rsp+90h] [rbp-49h]
  int v43; // [rsp+94h] [rbp-45h] BYREF
  BOOL v44; // [rsp+98h] [rbp-41h]
  int v45; // [rsp+9Ch] [rbp-3Dh]
  int v46; // [rsp+A0h] [rbp-39h]
  struct _MDEV *v47; // [rsp+A8h] [rbp-31h] BYREF
  int v48; // [rsp+B0h] [rbp-29h]
  __int64 v49; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v50; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-9h]
  struct _devicemodeW *v53; // [rsp+130h] [rbp+57h]
  struct tagDESKTOP *Object; // [rsp+138h] [rbp+5Fh]
  char v55; // [rsp+140h] [rbp+67h] BYREF

  Object = a3;
  v53 = a2;
  v47 = 0LL;
  v55 = 0;
  v8 = a3;
  v51 = 0LL;
  v50 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer((__int64)a1, &ChangeDisplayModeStart, 0LL);
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
      (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
  }
  v10 = (__int64)WPP_GLOBAL_Control;
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
      (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
  }
  v41 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  if ( (a4 & 2) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  v42 = a4 & 4;
  if ( (a4 & 4) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  if ( (a4 & 8) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  if ( (a4 & 0x10) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  v48 = a4 & 0x40000000;
  if ( (a4 & 0x40000000) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  v45 = a4 & 0x20000000;
  if ( (a4 & 0x20000000) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  if ( (a4 & 0x10000000) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  v46 = a4 & 0x20;
  if ( (a4 & 0x20) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  if ( (a4 & 0x100) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  if ( (a4 & 0x200) != 0 )
  {
    v10 = (__int64)WPP_GLOBAL_Control;
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
        (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids);
    }
  }
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_138;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*((_QWORD *)gpDispInfo + 2)) )
  {
    if ( (a4 & 0x20) == 0 || (v12 = DrvSetVideoParameters(a1, 1), v12 < 0) )
      v12 = -5;
    goto LABEL_239;
  }
  if ( gbMDEVDisabled )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v39 = 1;
LABEL_168:
      v12 = DrvSetVideoParameters(a1, v39);
      if ( v12 >= 0 )
        goto LABEL_239;
      goto LABEL_173;
    }
    goto LABEL_173;
  }
  LOBYTE(v10) = (a4 & 0x10000008) != 0;
  if ( ((unsigned __int8)v10 & ((a4 & 1) == 0)) != 0 )
    goto LABEL_138;
  v13 = 1610612736LL;
  v10 = a4 & 0x60000000;
  if ( (a4 & 0x10000000) != 0 )
  {
    if ( (_DWORD)v10 )
      goto LABEL_138;
  }
  v14 = 2147483652LL;
  if ( (a4 & 0x80000004) != 0x80000004 )
  {
    if ( (_DWORD)v10 != 1610612736 )
      goto LABEL_134;
LABEL_138:
    v12 = -4;
    goto LABEL_239;
  }
  if ( (_DWORD)v10 )
    goto LABEL_138;
LABEL_134:
  if ( (a4 & 0x100) != 0 && a4 != 256 || (a4 & 0x200) != 0 && a4 != 512 )
    goto LABEL_138;
  if ( (gdwPUDFlags & 0x20000000) != 0
    && ((PVOID)PsGetCurrentProcess(v10, 2147483652LL, 1610612736LL, v11) != gpepCSRSS
     || !qword_1C02D7438
     || !(unsigned int)qword_1C02D7438(v10)) )
  {
    goto LABEL_173;
  }
  if ( !v8 || (*((_DWORD *)v8 + 12) & 8) != 0 )
  {
    v8 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
    Object = v8;
  }
  if ( (PVOID)PsGetCurrentProcess(v10, v14, v13, v11) == gpepCSRSS )
  {
    if ( !v8 )
      Object = grpdeskRitInput;
  }
  else if ( v8 != grpdeskRitInput )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v39 = 0;
      goto LABEL_168;
    }
    goto LABEL_173;
  }
  if ( (a4 & 0x100) != 0 )
  {
    v15 = 0LL;
LABEL_156:
    v12 = DrvSetPruneFlag(a1, v15, (unsigned int)a6);
    goto LABEL_239;
  }
  if ( (a4 & 0x200) != 0 )
  {
    LOBYTE(v15) = 1;
    goto LABEL_156;
  }
  v16 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v17 = a4 & 0x10000002;
  v18 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
  v10 = (__int64)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  v19 = (a4 & 0x10000002) == 0;
  v20 = a4 & 0x80;
  v44 = v19;
  if ( !v18 )
    v10 = (__int64)DispBroker::DispBrokerClient::s_pSessionBroker;
  v21 = a6;
  if ( *(_DWORD *)v10 != 3 )
  {
    if ( v18 )
      v16 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
    if ( *v16 == 2 )
    {
      if ( v46 )
      {
        v39 = 0;
        goto LABEL_168;
      }
LABEL_173:
      v12 = -1;
      goto LABEL_239;
    }
LABEL_171:
    if ( !v17 )
    {
      if ( !CreateCachedMonitor() )
        goto LABEL_173;
      if ( qword_1C02D6B60 )
        qword_1C02D6B60(0LL);
      if ( qword_1C02D7160 && (int)qword_1C02D7160() >= 0 && qword_1C02D7168 )
        qword_1C02D7168();
    }
    if ( qword_1C02D2EC8 && qword_1C02D7170 && (int)qword_1C02D7170() >= 0 && qword_1C02D7178 )
      qword_1C02D7178();
    if ( qword_1C02D5FF8 && (int)qword_1C02D5FF8() >= 0 && qword_1C02D6000 )
      qword_1C02D6000(*((_QWORD *)gpDispInfo + 5), 0LL, 0LL, 0LL);
    if ( Object )
      v28 = ***((_QWORD ***)Object + 1);
    else
      LODWORD(v28) = 0;
    v29 = a7;
    v12 = DrvChangeDisplaySettings(
            (_DWORD)a1,
            *(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 80LL),
            (_DWORD)v53,
            v28,
            v21,
            v41,
            v19,
            *((_QWORD *)gpDispInfo + 2),
            (__int64)&v47,
            (unsigned int)((a4 & 0x40) != 0) - 1,
            v20,
            v45,
            v42,
            (__int64)&v55,
            (__int64)a7);
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(Object, &v50, CompositionObject::Release);
    if ( Object )
      ObfReferenceObject(Object);
    if ( v17 )
      goto LABEL_226;
    if ( v12 == 2 )
    {
      TrackFullscreenMode(v42);
      if ( v48 )
      {
        if ( (unsigned int)SafeDisableMDEV(1u) )
          SafeEnableMDEV(1u);
        if ( qword_1C02D6BC0 )
          qword_1C02D6BC0();
      }
      v12 = 0;
    }
    else
    {
      if ( v12 )
      {
        if ( v12 >= 0 )
          goto LABEL_217;
        if ( qword_1C02D6BC0 )
          qword_1C02D6BC0();
        if ( !v55 )
          goto LABEL_217;
        v40 = 0;
        v35 = Object ? (void *)***((_QWORD ***)Object + 1) : 0LL;
        if ( (int)DrvSetDisplayConfig(
                    0,
                    0LL,
                    0x98Fu,
                    2u,
                    v35,
                    0,
                    0LL,
                    0LL,
                    *((struct _MDEV **)gpDispInfo + 2),
                    &v47,
                    0LL,
                    0LL,
                    &v40,
                    0LL,
                    (__int64)v29,
                    0LL) < 0 )
          goto LABEL_217;
        TrackFullscreenMode(0);
        if ( v40 )
          goto LABEL_217;
        v34 = 0;
        *((_QWORD *)gpDispInfo + 2) = v47;
      }
      else
      {
        TrackFullscreenMode(v42);
        v30 = v47;
        *((_QWORD *)gpDispInfo + 2) = v47;
        PowerDimUndimResend((__int64)v30, v31, v32, v33);
        v34 = v42;
      }
      xxxResetDisplayDevice((__int64)Object, v34, 0, 0LL);
    }
LABEL_217:
    if ( Object )
    {
      v36 = (_QWORD *)*((_QWORD *)Object + 1);
      if ( (*(_DWORD *)(*v36 + 64LL) & 1) == 0 )
      {
        if ( qword_1C02D7068 )
          qword_1C02D7068(v36[3], 1LL, 66693LL);
      }
    }
    if ( qword_1C02D6B60 )
      qword_1C02D6B60(1LL);
    if ( (int)IszzzUpdateCursorImageSupported() >= 0 && qword_1C02D7188 )
      qword_1C02D7188();
LABEL_226:
    if ( qword_1C02D66C0 )
      qword_1C02D66C0(&v50);
    v25 = a1;
    goto LABEL_229;
  }
  v49 = 0LL;
  v43 = 1;
  v12 = DrvChangeDisplaySettingsPreValidate(a1, v41, (__int64)&v49, (__int64)&v43);
  if ( v12 )
    goto LABEL_239;
  if ( !v43 )
  {
    v19 = v44;
    goto LABEL_171;
  }
  v22 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v24 = a4;
  v25 = a1;
  v26 = v22 * TimeIncrement;
  v12 = xxxDispBrokerChangeDisplaySettings(a1, v53, v24, v21 == UserMode);
  LogDiagCDS(a1, v53, v49, (unsigned int)v21, v41, v44, v20, v45, v26, v12, v12, 11, 0, 0LL);
LABEL_229:
  if ( v12 >= 0 && v46 )
    v12 = DrvSetVideoParameters(v25, 0);
  v10 = (__int64)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v9 = 0;
  }
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = &WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids;
    LOBYTE(v37) = v9;
    LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v37,
      v27,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      25,
      (__int64)&WPP_5c9595ca5c6d3967a130a1a48d85f5c7_Traceguids,
      v12);
  }
LABEL_239:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v10, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v12;
}
