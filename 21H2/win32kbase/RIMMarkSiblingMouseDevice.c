/*
 * XREFs of RIMMarkSiblingMouseDevice @ 0x1C018C290
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int16 __fastcall RIMMarkSiblingMouseDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int16 result; // ax

  v3 = (unsigned __int16)a2;
  v5 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
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
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      a1);
  switch ( v3 )
  {
    case 1:
      v5 = 16;
      break;
    case 2:
      v5 = 4;
      break;
    case 4:
      v5 = 8;
      break;
    case 5:
      v5 = 2;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)(v3 - 4), a2, a3);
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
      break;
  }
  result = (v5 | *(_WORD *)(a1 + 880)) & 0xFFFE;
  *(_WORD *)(a1 + 880) = result;
  if ( v3 == 5 )
    *(_DWORD *)(a1 + 184) |= 0x18000000u;
  return result;
}
