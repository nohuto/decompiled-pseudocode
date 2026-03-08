/*
 * XREFs of HUBDSM_EnablingDeviceInUCXFor30 @ 0x1C0020BF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C0026CB0 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_EnablingDeviceInUCXFor30(__int64 a1)
{
  HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
