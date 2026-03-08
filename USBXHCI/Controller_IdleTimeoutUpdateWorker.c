/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1C0013830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_UpdateIdleTimeout @ 0x1C006E734 (Controller_UpdateIdleTimeout.c)
 */

_UNKNOWN **__fastcall Controller_IdleTimeoutUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __m128i *v2; // rdi
  unsigned int v3; // ebx
  int v4; // edx
  _UNKNOWN **result; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (__m128i *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WdfDriverGlobals,
                    v1,
                    off_1C0063428);
  v3 = (_mm_srli_si128(v2[21], 8).m128i_u32[0] & 0x200000) != 0LL ? 1000 : 1;
  Controller_UpdateIdleTimeout(v2, v3);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    return (_UNKNOWN **)WPP_RECORDER_SF_d(
                          v2[4].m128i_i64[1],
                          v4,
                          4,
                          30,
                          (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
                          v3);
  }
  return result;
}
