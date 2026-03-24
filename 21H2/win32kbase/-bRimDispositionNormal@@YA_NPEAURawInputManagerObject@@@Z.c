/*
 * XREFs of ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0054178
 * Callers:
 *     RIMResetPointerDevices @ 0x1C00525F0 (RIMResetPointerDevices.c)
 *     RIMReadInput @ 0x1C00532C0 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C00539C0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0053E80 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C00A6300 (RIMRemoveInputOfType.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01548A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0154D80 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0154F10 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155280 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMFreeInputBuffer @ 0x1C0155D60 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x1C01567E0 (RIMGetDownContactCount.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156EC4 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C0157150 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0157450 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0157890 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0157E00 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0157FD0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C015827C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall bRimDispositionNormal(struct RawInputManagerObject *a1)
{
  return !*((_BYTE *)a1 + 81) && !*((_BYTE *)a1 + 82);
}
