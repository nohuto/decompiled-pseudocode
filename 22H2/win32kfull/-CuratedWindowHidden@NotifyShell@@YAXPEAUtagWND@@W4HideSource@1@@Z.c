/*
 * XREFs of ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00B494C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C021D458 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

__int64 __fastcall NotifyShell::CuratedWindowHidden(__int64 a1)
{
  __int64 result; // rax
  bool v3; // dl

  result = *(unsigned int *)(a1 + 320);
  if ( (result & 2) != 0 )
  {
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        23,
        4,
        12,
        23,
        (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
        a1);
    *(_DWORD *)(a1 + 320) &= ~2u;
    return anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)a1, 10, 0, 0, 0);
  }
  return result;
}
