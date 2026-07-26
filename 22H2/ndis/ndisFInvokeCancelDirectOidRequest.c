/*
 * XREFs of ndisFInvokeCancelDirectOidRequest @ 0x1C00AF044
 * Callers:
 *     ndisDoCancelDirectOidRequest @ 0x1C00AED60 (ndisDoCancelDirectOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeCancelDirectOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_3215b46893a730bc04993878aec4e6e9_Traceguids,
      a1);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 312))(*(_QWORD *)(a1 + 24), a2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             0xBu,
             0xDu,
             (struct _GUID *)&WPP_3215b46893a730bc04993878aec4e6e9_Traceguids,
             a1);
  return result;
}
