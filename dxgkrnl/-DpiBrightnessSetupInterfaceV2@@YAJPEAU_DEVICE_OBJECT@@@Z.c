/*
 * XREFs of ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F3824
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F59A0 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C039D8B4 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 * Callees:
 *     DpiQueryMiniportInterface @ 0x1C01F65F4 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessSetupInterfaceV2(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  __int64 result; // rax
  __int64 v4; // xmm1_8

  DeviceExtension = (char *)a1->DeviceExtension;
  result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2, 88, 2);
  if ( (int)result < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1170) = 131160;
  *((_QWORD *)DeviceExtension + 580) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 581) = DXGGLOBAL::DereferenceObjectWork;
  *((_QWORD *)DeviceExtension + 582) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 583) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 584) = DpiBrightnessIfGet;
  *((_QWORD *)DeviceExtension + 579) = a1;
  *((_DWORD *)DeviceExtension + 1156) = 65592;
  *(_OWORD *)(DeviceExtension + 4536) = *((_OWORD *)DeviceExtension + 289);
  *(_OWORD *)(DeviceExtension + 4552) = *((_OWORD *)DeviceExtension + 290);
  *(_OWORD *)(DeviceExtension + 4568) = *((_OWORD *)DeviceExtension + 291);
  v4 = *((_QWORD *)DeviceExtension + 584);
  *((_QWORD *)DeviceExtension + 574) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 575) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 576) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 573) = v4;
  *((_QWORD *)DeviceExtension + 577) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1134) = 131160;
  return result;
}
