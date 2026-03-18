/*
 * XREFs of ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE7B8
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E98C4 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x1C01EF310 (IVForegroundSync--_anonymous_namespace_--ivBroadcastSetNullForeground.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01EFA40 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01F2B50 (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F32C4 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ivrIVBroadcast(const struct CIVSerializer *a1, unsigned int a2, const struct CONTAINER_ID *a3)
{
  if ( gpfnIVBroadcast )
    return gpfnIVBroadcast(*((const void **)a1 + 3), *((_DWORD *)a1 + 8), KeGetCurrentThread(), a2, a3);
  else
    return -1073741637;
}
