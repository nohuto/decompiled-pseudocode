/*
 * XREFs of _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CA90
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00372D4 (IsNonImmersiveBand.c)
 *     IAMThreadAccessGranted @ 0x1C0037F54 (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_SF_s @ 0x1C003B7A4 (WPP_RECORDER_SF_s.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C003C690 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsDebuggerAttached @ 0x1C003CE18 (IsDebuggerAttached.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C003D134 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     IsForegroundLocked @ 0x1C003D1C4 (IsForegroundLocked.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall anonymous_namespace_::CanSetForegroundWindow(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rcx
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  __int64 v10; // rdx
  char v11; // di
  const char *v12; // rcx
  int v14; // r9d
  __int64 v15; // rdx
  int v16; // r9d

  v3 = (unsigned int)a2;
  v4 = a1;
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1LL;
    v14 = 24;
    goto LABEL_23;
  }
  if ( *(int *)(v5 + 12) < 0 )
  {
    gppiLockSFW = 0LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v16 = 25;
    goto LABEL_32;
  }
  v6 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && ((_DWORD)a2 == 31 || IAMThreadAccessGranted(gptiCurrent)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(v6, (_DWORD)a2, 2, 26, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
    }
    gppiLockSFW = 0LL;
    return 2LL;
  }
  CurrentProcess = PsGetCurrentProcess(v6, a2, a3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    a2 = *(_WORD **)(*(_QWORD *)(v4 + 136) + 8LL);
    LODWORD(a1) = gpsi;
    if ( *a2 != *(_WORD *)(gpsi + 900LL) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v16 = 27;
LABEL_32:
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(a1, (_DWORD)a2, 2, v16, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
      return 2LL;
    }
  }
  if ( !gfDebugForegroundIgnoreDebugPort )
  {
    if ( (unsigned int)IsDebuggerAttached(v5) && IsNonImmersiveBand(v4) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 2LL;
      v16 = 28;
      goto LABEL_32;
    }
    if ( gpqForeground )
    {
      v8 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v8 )
      {
        if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL)) && IsNonImmersiveBand(v4) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 2LL;
          v16 = 29;
          goto LABEL_32;
        }
      }
    }
  }
  if ( gptiCurrent == GetProp(v4, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v16 = 30;
    goto LABEL_32;
  }
  if ( v5 == gppiScreenSaver )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v16 = 31;
    goto LABEL_32;
  }
  PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
  if ( PtiLastWokenHotKey
    && *((_QWORD *)PtiLastWokenHotKey + 53) == *(_QWORD *)(gptiCurrent + 424LL)
    && !(unsigned int)IsForegroundLocked()
    && (unsigned int)IsDesktopApp(v15) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 2LL;
    v16 = 32;
    goto LABEL_32;
  }
  if ( !anonymous_namespace_::CheckImmersiveForegroundAccess(v4, v3) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1LL;
    v14 = 33;
LABEL_23:
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(a1, (_DWORD)a2, 2, v14, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
    return 1LL;
  }
  v11 = CheckCanonicalForegroundAccess(v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = "HasRight";
    if ( !v11 )
      v12 = "NoRights";
    WPP_RECORDER_SF_s((__int64)v12, v10, 2u, 0x22u, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids, v12);
  }
  return v11 != 0 ? 2 : 0;
}
