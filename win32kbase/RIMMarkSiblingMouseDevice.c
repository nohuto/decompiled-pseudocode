__int16 __fastcall RIMMarkSiblingMouseDevice(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // di
  __int16 result; // ax

  v3 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      77,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      a1);
  result = (*(_WORD *)(a1 + 880) | RIMCAUsageToLegacyFlag(v3, a2, a3)) & 0xFFFE;
  *(_WORD *)(a1 + 880) = result;
  if ( v3 == 5 )
    *(_DWORD *)(a1 + 184) |= 0x18000000u;
  return result;
}
