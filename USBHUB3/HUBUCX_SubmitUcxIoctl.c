/*
 * XREFs of HUBUCX_SubmitUcxIoctl @ 0x1C00263DC
 * Callers:
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C001FE40 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C001FFE0 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C0020DF0 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C00221D0 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x1C00241A0 (HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C00257E0 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x1C0026654 (HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C0026708 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C00268D8 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C0026B64 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C0026CB0 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceInfoUsingUCXIoctl @ 0x1C0026F1C (HUBUCX_UpdateDeviceInfoUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C00270F4 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C0028FC8 (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C0029078 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C002912C (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C00291DC (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0015618 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_SubmitUcxIoctl(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v15; // [rsp+28h] [rbp-60h]
  _DWORD v16[3]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+6Ch] [rbp-1Ch]
  int v18; // [rsp+74h] [rbp-14h]

  v17 = 0LL;
  v2 = *a1;
  v4 = a1[52];
  v18 = 0;
  v16[1] = 0;
  v6 = *(_QWORD *)(v2 + 32);
  v16[2] = 0;
  v16[0] = 24;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v4,
         v16);
  if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    v15 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      v15);
  }
  v9 = a1[54];
  v10 = a1[52];
  *((_DWORD *)a1 + 110) = a2;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v6,
          v10,
          a2,
          v9,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    *((_DWORD *)a1 + 390) = v11;
    *((_DWORD *)a1 + 391) = HUBPDO_GetUSBDErrorFromNTStatus(v11);
LABEL_8:
    HUBSM_AddEvent((__int64)(a1 + 63), 4020);
    return (unsigned int)v12;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int (__fastcall *)(__int64, __int64, __int64, __int64), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    a1[52],
    HUBUCX_UCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          a1[52],
          v6,
          0LL) )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
            WdfDriverGlobals,
            a1[52]);
    *((_DWORD *)a1 + 390) = v13;
    v12 = v13;
    *((_DWORD *)a1 + 391) = HUBPDO_GetUSBDErrorFromNTStatus(v13);
    if ( v12 < 0 )
      goto LABEL_8;
  }
  return (unsigned int)v12;
}
