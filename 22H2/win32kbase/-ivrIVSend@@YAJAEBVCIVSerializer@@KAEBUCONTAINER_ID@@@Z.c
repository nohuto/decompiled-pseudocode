/*
 * XREFs of ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE8A4
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01E98C4 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x1C01EF938 (IVForegroundSync--_anonymous_namespace_--ivSyncForegroundToContainer.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x1C01EFA40 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01F2D70 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01F2DEC (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01F300C (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C01F3164 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F32C4 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01F35C4 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

int __fastcall ivrIVSend(const struct CIVSerializer *a1, unsigned int a2, const struct CONTAINER_ID *a3)
{
  _DWORD *v3; // r10
  __int64 v5; // rdx

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v5 = *((unsigned int *)a1 + 8);
  if ( v5 - 16 != *v3 )
    KeBugCheck(0x164u);
  if ( gpfnIVSend )
    return gpfnIVSend(v3, v5, KeGetCurrentThread(), a2, a3);
  else
    return -1073741637;
}
