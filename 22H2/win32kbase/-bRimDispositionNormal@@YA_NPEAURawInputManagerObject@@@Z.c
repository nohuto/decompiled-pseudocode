/*
 * XREFs of ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0055178
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0005EB0 (RIMRemoveInputOfType.c)
 *     RIMResetPointerDevices @ 0x1C00535F0 (RIMResetPointerDevices.c)
 *     RIMReadInput @ 0x1C00542C0 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C00549C0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0054E80 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01547D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0154CB0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0154E40 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01551B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMFreeInputBuffer @ 0x1C0155C90 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x1C0156710 (RIMGetDownContactCount.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156DF4 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C0157080 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0157380 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C01577C0 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0157D30 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0157F00 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01581AC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall bRimDispositionNormal(struct RawInputManagerObject *a1)
{
  return !*((_BYTE *)a1 + 81) && !*((_BYTE *)a1 + 82);
}
