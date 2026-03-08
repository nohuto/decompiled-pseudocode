/*
 * XREFs of HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake @ 0x1C00205A0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C00291DC (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake(__int64 a1)
{
  HUBUCX_StartDeviceIoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
