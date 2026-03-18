/*
 * XREFs of ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004880 (RIMAddInjectionDeviceOfType.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     RIMReadInput @ 0x1C0043300 (RIMReadInput.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0047820 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C00B6F70 (RIMRemoveInputOfType.c)
 *     RIMResetPointerDevices @ 0x1C00B71A0 (RIMResetPointerDevices.c)
 *     RIMAddInputOfType @ 0x1C01816C0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0181990 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0182000 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMFreeInputBuffer @ 0x1C0183000 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x1C0183CF0 (RIMGetDownContactCount.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01846E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C01849A0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0184E30 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C01857B0 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0185AD0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0185D90 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C018614C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall bRimDispositionNormal(struct RawInputManagerObject *a1)
{
  return !*((_BYTE *)a1 + 81) && !*((_BYTE *)a1 + 82);
}
