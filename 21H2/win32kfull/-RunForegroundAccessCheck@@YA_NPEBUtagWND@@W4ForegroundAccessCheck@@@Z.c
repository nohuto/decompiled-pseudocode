/*
 * XREFs of ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00056A0
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C0005620 (NtUserCanBrokerForceForeground.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C02367D0 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C00A66BC (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00AD3C4 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C00F0FB0 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 */

char __fastcall RunForegroundAccessCheck(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  char v5; // bl
  void *v6; // r9
  const char *v7; // r14
  char v8; // di
  int v9; // edx
  const char *v10; // rax
  void *v12; // rdx

  v3 = a2;
  v5 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v6 = &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qD(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
  v7 = "Success";
  v8 = 1;
  if ( (v3 & 1) == 0 )
    goto LABEL_17;
  v8 = anonymous_namespace_::CheckCanonicalForegroundAccess(0LL, a2, a3, v6);
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = "Success";
    if ( !v8 )
      v10 = "Failed";
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      50,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      (__int64)v10);
  }
  if ( v8 )
  {
LABEL_17:
    if ( (v3 & 2) != 0 )
    {
      v8 = a1 && (unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2LL, a3, v6);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids;
        if ( !v8 )
          v7 = "Failed";
        LOBYTE(v12) = v5;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_s(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v12,
          a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          51,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          (__int64)v7);
      }
    }
  }
  return v8;
}
