/*
 * XREFs of ?TrackedWindowMoveSizeIntercept@NotifyShell@@YAXPEAUtagWND@@IK@Z @ 0x1C0220918
 * Callers:
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C020311C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0220058 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::TrackedWindowMoveSizeIntercept(NotifyShell *this, struct tagWND *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  char v6; // dl

  v3 = a3;
  v5 = (unsigned int)a2;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x15u,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      this,
      v5);
  anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)this, 5, v5, v3, 0);
}
