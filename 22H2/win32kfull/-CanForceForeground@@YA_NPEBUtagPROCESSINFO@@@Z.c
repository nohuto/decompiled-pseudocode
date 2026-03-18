/*
 * XREFs of ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C00E3BA4
 * Callers:
 *     ?ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z @ 0x1C0008E0C (-ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1C0016EF0 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C004C34C (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C005FC30 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C00E3878 (_anonymous_namespace_--CheckAllowForeground.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00F1BB8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?_LockSetForegroundWindow@@YA_NI@Z @ 0x1C01ADD10 (-_LockSetForegroundWindow@@YA_NI@Z.c)
 *     xxxHardErrorControl @ 0x1C0223D54 (xxxHardErrorControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C004C704 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

char __fastcall CanForceForeground(const struct tagPROCESSINFO *a1)
{
  struct tagTHREADINFO *PtiLastWoken; // rax
  const struct tagPROCESSINFO *v3; // rdx
  int v4; // r8d
  PDEVICE_OBJECT v5; // rcx
  int v6; // r9d
  PDEVICE_OBJECT v8; // rcx
  __int16 v9; // r9
  char v10; // dl
  unsigned int *v11; // rax
  int v12; // r9d
  bool v13; // bl
  int v14; // edx

  PtiLastWoken = CInputGlobals::GetPtiLastWoken(gpInputGlobals);
  if ( !PtiLastWoken )
  {
    v5 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v6 = 48;
    goto LABEL_8;
  }
  v3 = (const struct tagPROCESSINFO *)*((_QWORD *)PtiLastWoken + 53);
  if ( v3 == a1 )
  {
    v8 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v9 = 49;
    goto LABEL_17;
  }
  if ( !gptiForeground )
  {
    v5 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v6 = 50;
LABEL_8:
    WPP_RECORDER_AND_TRACE_SF_(
      v5->AttachedDevice,
      (_DWORD)v3,
      v4,
      v6,
      4,
      2,
      v6,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    return 1;
  }
  if ( *(const struct tagPROCESSINFO **)(gptiForeground + 424LL) == a1 )
  {
    v8 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v9 = 51;
LABEL_17:
    WPP_RECORDER_AND_TRACE_SF_D(
      v8->AttachedDevice,
      (_DWORD)v3,
      v4,
      (_DWORD)gFullLog,
      4,
      2,
      v9,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      *((_DWORD *)a1 + 14));
    return 1;
  }
  v4 = *((_DWORD *)a1 + 3) & 0x80100;
  if ( v4 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        2u,
        0x34u,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        *((_DWORD *)a1 + 14),
        *((_DWORD *)a1 + 3) & 0x80100);
    return 1;
  }
  if ( a1 == (const struct tagPROCESSINFO *)gppiInputProvider )
  {
    v8 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v9 = 53;
    goto LABEL_17;
  }
  if ( !gpqForeground )
  {
    v5 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v6 = 54;
    goto LABEL_8;
  }
  if ( !LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink)
    && (PsGetProcessDebugPort(*(_QWORD *)v3) || PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 424LL))) )
  {
    v5 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v6 = 55;
    goto LABEL_8;
  }
  v11 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v11) )
  {
    v5 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v6 = 56;
    goto LABEL_8;
  }
  v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 57;
    LOBYTE(v14) = v13;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v4,
      v12,
      4,
      2,
      57,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  return 0;
}
