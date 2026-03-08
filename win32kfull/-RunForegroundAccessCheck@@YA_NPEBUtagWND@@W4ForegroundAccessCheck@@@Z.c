/*
 * XREFs of ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00113B0
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C0011330 (NtUserCanBrokerForceForeground.c)
 *     ?PositionWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1C0220198 (-PositionWindowAsync@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@A.c)
 * Callees:
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0022FA8 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C002340C (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002574C (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

char __fastcall RunForegroundAccessCheck(__int64 a1, char a2)
{
  char v2; // di
  const char *v4; // r14
  char v6; // bl
  int v7; // edx
  const char *v8; // rax
  void *v10; // rdx

  v2 = 1;
  v4 = "Success";
  v6 = 1;
  if ( (a2 & 1) == 0 )
    goto LABEL_11;
  v6 = anonymous_namespace_::CheckCanonicalForegroundAccess(0LL);
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = "Success";
    if ( !v6 )
      v8 = "Failed";
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      2,
      69,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      (__int64)v8);
  }
  if ( v6 )
  {
LABEL_11:
    if ( (a2 & 2) != 0 )
    {
      v6 = a1 && (unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2LL);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v2 = 0;
      }
      if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = &WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids;
        if ( !v6 )
          v4 = "Failed";
        LOBYTE(v10) = v2;
        WPP_RECORDER_AND_TRACE_SF_s(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gFullLog,
          4,
          2,
          70,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
          (__int64)v4);
      }
    }
  }
  return v6;
}
