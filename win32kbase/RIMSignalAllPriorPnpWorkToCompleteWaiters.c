int __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1)
{
  bool v2; // dl
  _UNKNOWN **v3; // rax
  LONG v4; // r8d

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v3 = &WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LODWORD(v3) = WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v2,
                    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                    (_DWORD)gRimLog,
                    4,
                    1,
                    45,
                    (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
                    a1);
  v4 = *(_DWORD *)(a1 + 1072);
  if ( v4 )
  {
    LODWORD(v3) = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 1064), 0, v4, 0);
    *(_DWORD *)(a1 + 1072) = 0;
  }
  return (int)v3;
}
