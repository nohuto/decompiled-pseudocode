/*
 * XREFs of ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C018B7F8
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C018B94C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02D1C04 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 * Callees:
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027EFC (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     DpiQueryMiniportInterface @ 0x1C018E538 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessSetupInterfaceV2(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  int MiniportInterface; // ebp
  __int64 v4; // xmm1_8

  DeviceExtension = (char *)a1->DeviceExtension;
  MiniportInterface = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2, 88, 2);
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1184) = 131160;
  *((_QWORD *)DeviceExtension + 587) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 588) = DXGGLOBAL::DereferenceObjectWork;
  *((_QWORD *)DeviceExtension + 589) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 590) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 591) = DpiBrightnessIfGet;
  *((_QWORD *)DeviceExtension + 586) = a1;
  *((_DWORD *)DeviceExtension + 1170) = 65592;
  *((_OWORD *)DeviceExtension + 287) = *(_OWORD *)(DeviceExtension + 4680);
  *((_OWORD *)DeviceExtension + 288) = *(_OWORD *)(DeviceExtension + 4696);
  *((_OWORD *)DeviceExtension + 289) = *(_OWORD *)(DeviceExtension + 4712);
  v4 = *((_QWORD *)DeviceExtension + 591);
  *((_QWORD *)DeviceExtension + 581) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 582) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 583) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 580) = v4;
  *((_QWORD *)DeviceExtension + 584) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1148) = 131160;
  Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
  return (unsigned int)MiniportInterface;
}
