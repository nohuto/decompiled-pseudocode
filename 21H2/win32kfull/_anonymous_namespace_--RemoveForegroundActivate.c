/*
 * XREFs of _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00FFDF4
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00FFB08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsqs @ 0x1C007BBB8 (WPP_RECORDER_AND_TRACE_SF_qsqs.c)
 *     ?OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z @ 0x1C00FFF74 (-OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z.c)
 */

char __fastcall anonymous_namespace_::RemoveForegroundActivate(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  char v3; // si
  char v4; // dl
  const char *v5; // r10
  const char *v6; // r9
  int v8; // [rsp+20h] [rbp-48h]
  int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+30h] [rbp-38h]
  int v11; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( (*(_DWORD *)(v2 + 12) & 0x40) != 0 )
  {
    ForegroundLaunch::OnFirstActivationAttempted((ForegroundLaunch *)*(int *)(v2 + 56), a2);
    ClearAppStarting(v2);
  }
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = "Yes";
    v6 = "Yes";
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20) == 0 )
      v6 = "No";
    if ( (*(_DWORD *)(v2 + 12) & 0x100) == 0 )
      v5 = "No";
    WPP_RECORDER_AND_TRACE_SF_qsqs(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)v6,
      v8,
      v9,
      v10,
      v11,
      v2,
      v5,
      v2,
      v6);
  }
  if ( (*(_BYTE *)(gptiCurrent + 488LL) & 0x20) == 0 && (*(_DWORD *)(v2 + 12) & 0x100) == 0 )
    return 0;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      11,
      4,
      2,
      11,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
  *(_DWORD *)(gptiCurrent + 488LL) &= ~0x20u;
  *(_DWORD *)(v2 + 12) &= ~0x100u;
  return v3;
}
