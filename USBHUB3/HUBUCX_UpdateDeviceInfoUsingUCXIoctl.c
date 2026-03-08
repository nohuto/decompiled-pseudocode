/*
 * XREFs of HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0026F1C
 * Callers:
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C0020A50 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C000CE04 (Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_ComputeUsb20HardwareLpmParameters @ 0x1C0026D6C (HUBUCX_ComputeUsb20HardwareLpmParameters.c)
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x1C003075C (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBUCX_UpdateDeviceInfoUsingUCXIoctl(__int64 *a1)
{
  __int64 v2; // rbx
  _DWORD *v3; // rsi
  int v4; // edx
  int v5; // eax
  unsigned int v6; // edx
  int IsEnabledDeviceUsage; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  __int64 result; // rax

  v2 = *a1;
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[54],
                   0LL);
  memset(v3, 0, 0x48uLL);
  v4 = v3[6] | 0xB;
  v3[6] = v4;
  v5 = v4 | 4;
  v6 = v4 & 0xFFFFFFFB;
  if ( (*(_DWORD *)(v2 + 2496) & 4) == 0 )
    v6 = v5;
  v3[6] = v6;
  if ( (*((_DWORD *)a1 + 411) & 0x400) != 0 )
    v3[6] = v6 | 0x10;
  *v3 = 72;
  *((_QWORD *)v3 + 1) = *(_QWORD *)(*a1 + 248);
  *((_QWORD *)v3 + 2) = a1[3];
  *((_QWORD *)v3 + 4) = (char *)a1 + 1988;
  *((_QWORD *)v3 + 5) = a1[257];
  *((_DWORD *)a1 + 409) |= 0x200000u;
  IsEnabledDeviceUsage = Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage();
  v8 = *(_DWORD *)(a1[1] + 204);
  if ( IsEnabledDeviceUsage )
  {
    if ( (v8 & 0x800) != 0 )
      v3[6] |= 0x80u;
  }
  else if ( (v8 & 0x800) != 0 )
  {
    *((_DWORD *)a1 + 409) &= ~0x200000u;
  }
  if ( (unsigned int)HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(a1) == 4089 )
    v9 = *((unsigned __int16 *)a1 + 1102);
  else
    v9 = 0;
  v3[12] = v9;
  if ( (a1[204] & 2) != 0 )
    *((_BYTE *)v3 + 52) = 1;
  HUBUCX_ComputeUsb20HardwareLpmParameters((__int64)a1, (__int64)v3);
  if ( (*((_DWORD *)a1 + 616) & 0x80u) != 0 )
  {
    v10 = *((_DWORD *)a1 + 408);
    if ( (v10 & 0x20) != 0 && (v10 & 2) == 0 && *(_DWORD *)(a1[1] + 208) == 512 )
    {
      v3[6] |= 0x40u;
      if ( *(_BYTE *)(*a1 + 240) )
        *((_WORD *)v3 + 32) = 20;
      else
        *((_WORD *)v3 + 32) = *(unsigned __int8 *)(a1[313] + 5);
    }
  }
  result = HUBUCX_SubmitUcxIoctl(a1, 0x491023u);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432),
             2u,
             5u,
             0x20u,
             (__int64)&WPP_e357673766b030573709eddce5304229_Traceguids,
             result);
  return result;
}
