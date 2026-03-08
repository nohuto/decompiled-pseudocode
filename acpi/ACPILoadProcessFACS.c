/*
 * XREFs of ACPILoadProcessFACS @ 0x1C00A9840
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00A999C (ACPILoadProcessFADT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C002293C (WPP_RECORDER_SF_i.c)
 */

__int64 ACPILoadProcessFACS()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rsi
  _DWORD *v4; // rsi
  __int64 v6; // [rsp+28h] [rbp-10h]

  v0 = 0;
  v1 = (*(__int64 (**)(void))(PmHalDispatchTable + 104))();
  v3 = v1;
  if ( !v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        13,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
    return (unsigned int)-1072431079;
  }
  if ( *(_DWORD *)(v1 + 4) != 64 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_i(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        14,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
        v1);
    }
    return (unsigned int)-1072431079;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_i(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      15,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      v1);
  }
  *((_QWORD *)AcpiInformation + 2) = v3;
  v4 = (_DWORD *)(v3 + 16);
  *((_QWORD *)AcpiInformation + 5) = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = *v4;
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      16,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      v6);
  }
  return v0;
}
