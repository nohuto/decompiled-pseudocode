/*
 * XREFs of ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C003D388
 * Callers:
 *     ?ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z @ 0x1C0008C3C (-ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1C0016760 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C002340C (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CheckAllowForeground @ 0x1C003D0C4 (_anonymous_namespace_--CheckAllowForeground.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C009B4EC (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00A560C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?_LockSetForegroundWindow@@YA_NI@Z @ 0x1C01AEF00 (-_LockSetForegroundWindow@@YA_NI@Z.c)
 *     xxxHardErrorControl @ 0x1C0226A64 (xxxHardErrorControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C009B8A4 (WPP_RECORDER_AND_TRACE_SF_DD.c)
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
  unsigned int *v10; // rax
  int v11; // r9d
  bool v12; // bl
  int v13; // edx

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
    v6 = 49;
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
    v9 = 50;
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
    v6 = 51;
LABEL_8:
    WPP_RECORDER_AND_TRACE_SF_(
      v5->AttachedDevice,
      (_DWORD)v3,
      v4,
      v6,
      4,
      2,
      v6,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
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
    v9 = 52;
LABEL_17:
    WPP_RECORDER_AND_TRACE_SF_D(
      v8->AttachedDevice,
      (_DWORD)v3,
      v4,
      (_DWORD)gFullLog,
      4,
      2,
      v9,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      *((_DWORD *)a1 + 14));
    return 1;
  }
  v4 = *((_DWORD *)a1 + 3) & 0x80100;
  if ( v4 )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v3,
        v4,
        (_DWORD)gFullLog,
        4,
        2,
        53,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
        *((_DWORD *)a1 + 14),
        0);
    }
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
    v9 = 54;
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
    v6 = 55;
    goto LABEL_8;
  }
  if ( !gfDebugForegroundIgnoreDebugPort
    && (PsGetProcessDebugPort(*(_QWORD *)v3) || PsGetProcessDebugPort(**(_QWORD **)(gptiForeground + 424LL))) )
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
  v10 = (unsigned int *)UPDWORDPointer(0x2000LL);
  if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *v10) )
  {
    v5 = WPP_GLOBAL_Control;
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v6 = 57;
    goto LABEL_8;
  }
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 58;
    LOBYTE(v13) = v12;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v4,
      v11,
      4,
      2,
      58,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
  }
  return 0;
}
