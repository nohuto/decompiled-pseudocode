/*
 * XREFs of AudioDGGetDeviceGraphWnfStateName @ 0x14004B520
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F210 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateDeviceGraphWnfState@@YAJXZ @ 0x14003DD8C (-CreateDeviceGraphWnfState@@YAJXZ.c)
 */

__int64 __fastcall AudioDGGetDeviceGraphWnfStateName(__int64 a1, struct _WNF_STATE_NAME *a2)
{
  int DeviceGraphWnfState; // ebx

  DeviceGraphWnfState = CreateDeviceGraphWnfState();
  if ( DeviceGraphWnfState >= 0 )
  {
    PublishDeviceGraphWnfState();
    *a2 = g_DeviceGraphWnfStateName;
  }
  return (unsigned int)DeviceGraphWnfState;
}
