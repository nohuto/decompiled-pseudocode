/*
 * XREFs of HUBPDO_NotifyDeviceDisconnected @ 0x1C001743C
 * Callers:
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending @ 0x1C001F880 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending.c)
 *     HUBDSM_NotifyingDeviceDisconnectedOnDetachWithSpecialFile @ 0x1C001FA00 (HUBDSM_NotifyingDeviceDisconnectedOnDetachWithSpecialFile.c)
 *     HUBDSM_PurgingDeviceIoOnDetachInConfigured @ 0x1C001FA70 (HUBDSM_PurgingDeviceIoOnDetachInConfigured.c)
 *     HUBDSM_ReportingDeviceMissing @ 0x1C001FDB0 (HUBDSM_ReportingDeviceMissing.c)
 *     HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured @ 0x1C0020760 (HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured.c)
 * Callees:
 *     HUBREG_DeleteUxdSettings @ 0x1C00878E8 (HUBREG_DeleteUxdSettings.c)
 */

__int64 __fastcall HUBPDO_NotifyDeviceDisconnected(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0x200u);
  **(_BYTE **)(a1 + 16) = 1;
  v1 = *(_QWORD *)(a1 + 16);
  result = *(unsigned int *)(v1 + 32);
  if ( (result & 0x20) == 0 && !*(_DWORD *)(v1 + 4) )
    return HUBREG_DeleteUxdSettings(*(_QWORD *)(v1 + 24), 2LL);
  return result;
}
