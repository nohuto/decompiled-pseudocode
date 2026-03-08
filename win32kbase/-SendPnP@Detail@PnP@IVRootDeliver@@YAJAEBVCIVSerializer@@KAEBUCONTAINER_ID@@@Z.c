/*
 * XREFs of ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0227290
 * Callers:
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C02272BC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C0227610 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C0227A94 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0220F10 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0220FC4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

int __fastcall IVRootDeliver::PnP::Detail::SendPnP(
        IVRootDeliver::PnP::Detail *this,
        const struct CIVSerializer *a2,
        __int64 a3,
        const struct CONTAINER_ID *a4)
{
  if ( *(_WORD *)a3 || *(_WORD *)(a3 + 2) )
    return ivrIVSend(this, (unsigned int)a2, (const struct CONTAINER_ID *)a3);
  else
    return ivrIVBroadcast(this, (unsigned int)a2, (const struct CONTAINER_ID *)a3);
}
