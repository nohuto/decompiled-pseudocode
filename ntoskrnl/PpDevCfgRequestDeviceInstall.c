/*
 * XREFs of PpDevCfgRequestDeviceInstall @ 0x140960740
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     PpDevCfgInit @ 0x140B5ACF8 (PpDevCfgInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 PpDevCfgRequestDeviceInstall()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( (PiDevCfgFlags & 2) != 0 )
    return (unsigned int)ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL);
  return v0;
}
