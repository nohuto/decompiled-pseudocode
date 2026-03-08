/*
 * XREFs of HUBDSM_DisablingEndpointsOnDetachWithSpecialFile @ 0x1C001F850
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C00285D0 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_DisablingEndpointsOnDetachWithSpecialFile(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(v1);
  *(_DWORD *)(*(_QWORD *)(v1 + 16) + 32LL) |= 0x100u;
  return 1000LL;
}
