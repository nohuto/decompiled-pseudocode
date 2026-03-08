/*
 * XREFs of PiDqGetObjectManagerForPnpObjectType @ 0x140778DF0
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1406CCCB0 (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall PiDqGetObjectManagerForPnpObjectType(int a1)
{
  __int64 v1; // rdx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return &PiDqDeviceManager;
  v4 = v2 - 1;
  if ( !v4 )
    return &PiDqDeviceInstallerClassManager;
  v5 = v4 - 1;
  if ( !v5 )
    return &PiDqDeviceInterfaceManager;
  v6 = v5 - 1;
  if ( !v6 )
    return &PiDqDeviceInterfaceClassManager;
  v7 = v6 - 1;
  if ( !v7 )
    return &PiDqDeviceContainerManager;
  if ( v7 == 1 )
    return &PiDqDevicePanelManager;
  return (struct _ERESOURCE *)v1;
}
