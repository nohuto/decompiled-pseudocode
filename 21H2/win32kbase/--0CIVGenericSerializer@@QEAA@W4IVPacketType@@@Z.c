/*
 * XREFs of ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E89EC
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E8A48 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x1C01F13F4 (IVForegroundSync--_anonymous_namespace_--ivBroadcastSetNullForeground.c)
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x1C01F1AA4 (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01F1E90 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01F41DC (-BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01F44EC (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01F4640 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01F4D84 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F51D4 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F59AC (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1C01FCDFC (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 */

_QWORD *__fastcall CIVGenericSerializer::CIVGenericSerializer(_QWORD *a1)
{
  CIVSerializer::CIVSerializer();
  *a1 = &CIVGenericSerializer::`vftable';
  return a1;
}
