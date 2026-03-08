/*
 * XREFs of HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C00257E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x1C0026D6C (HUBUCX_ComputeUsb20HardwareLpmParameters.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBDSM_CheckingIf20LPMShouldBeEnabled(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rsi
  unsigned int v3; // edi
  int v4; // eax
  int v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 960);
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v1[54],
                   0LL);
  memset(v2, 0, 0x48uLL);
  if ( (unsigned __int8)HUBUCX_ComputeUsb20HardwareLpmParameters(v1, v2) )
  {
    *(_DWORD *)v2 = 72;
    v3 = 4089;
    v2[1] = *(_QWORD *)(*v1 + 248LL);
    v2[2] = v1[3];
    v4 = HUBUCX_SubmitUcxIoctl(v1, 4788259LL);
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1[1] + 1432LL),
        2u,
        5u,
        0x21u,
        (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
        v6);
    }
  }
  else
  {
    return 4061;
  }
  return v3;
}
