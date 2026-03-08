/*
 * XREFs of ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C0228560
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C00087B0 (NtMITSynthesizeKeyboardInput.c)
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1C005BD48 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0086990 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088CB0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088EA0 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C009D090 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C020C0E0 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     VirtualizeFullKeyboardStates @ 0x1C0218E00 (VirtualizeFullKeyboardStates.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C02228EC (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 *     ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x1C0222F2C (-BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ.c)
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x1C02269D4 (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C0226E60 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C0227C1C (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CIVChannel::ContainerConnected(int a1)
{
  __int64 v1; // rax
  char v2; // cl
  __int64 v3; // rdx

  v1 = a1;
  v2 = 0;
  v3 = qword_1C02D8780[v1];
  if ( v3 )
    return _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 40), 0, 0) != 0;
  return v2;
}
