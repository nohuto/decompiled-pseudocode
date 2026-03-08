/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00031FC
 * Callers:
 *     HUBHTX_Get30PortChangeEvent @ 0x1C000569C (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHSM_WaitingForOvercurrentToClear @ 0x1C0009300 (HUBHSM_WaitingForOvercurrentToClear.c)
 *     HUBUCX_EvtResetActionCompletion @ 0x1C0025A00 (HUBUCX_EvtResetActionCompletion.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002EA10 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_StartOverCurrentTimer @ 0x1C0032480 (HUBMISC_StartOverCurrentTimer.c)
 *     HUBMISC_StartD3ColdReconnectTimer @ 0x1C0032598 (HUBMISC_StartD3ColdReconnectTimer.c)
 *     TUNNEL_RegisterUsb4HostForPort @ 0x1C008D404 (TUNNEL_RegisterUsb4HostForPort.c)
 *     TUNNEL_UpdateUsb4HostPowerRelations @ 0x1C008ECD8 (TUNNEL_UpdateUsb4HostPowerRelations.c)
 *     TUNNEL_AcquireUsb4HostPowerReference @ 0x1C008EE94 (TUNNEL_AcquireUsb4HostPowerReference.c)
 *     TUNNEL_ReleaseUsb4HostPowerReference @ 0x1C008F058 (TUNNEL_ReleaseUsb4HostPowerReference.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va);
}
