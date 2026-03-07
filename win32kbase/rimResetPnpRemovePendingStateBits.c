_UNKNOWN **__fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  bool v2; // dl
  _UNKNOWN **result; // rax

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                            WPP_GLOBAL_Control->AttachedDevice,
                            v2,
                            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                            (_DWORD)gRimLog,
                            4,
                            1,
                            39,
                            (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
                            a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 188) &= 0xFFFFFFE7;
  return result;
}
