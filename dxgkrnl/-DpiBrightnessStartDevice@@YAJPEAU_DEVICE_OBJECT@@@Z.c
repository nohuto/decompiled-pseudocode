/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F59A0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F3824 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C01F65F4 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 4408), 0);
  if ( *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x700Au
    && (result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_3, 72, 3),
        (int)result >= 0) )
  {
    *((_DWORD *)DeviceExtension + 1116) = 196680;
    *((_QWORD *)DeviceExtension + 560) = DpiDoInterfaceReference;
    *((_QWORD *)DeviceExtension + 561) = DXGGLOBAL::DereferenceObjectWork;
    *((_QWORD *)DeviceExtension + 562) = DpiBrightness3Set;
    *((_QWORD *)DeviceExtension + 563) = DpiBrightness3Get;
    *((_QWORD *)DeviceExtension + 564) = DpiBrightness3GetCaps;
    *((_QWORD *)DeviceExtension + 565) = DpiBrightness3GetNitRanges;
    *((_QWORD *)DeviceExtension + 566) = DpiBrightness3SetBacklightOptimization;
    *((_QWORD *)DeviceExtension + 559) = a1;
  }
  else
  {
    result = DpiBrightnessSetupInterfaceV2(a1);
    if ( (int)result < 0 )
    {
      result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS, 56, 1);
      if ( (int)result >= 0 )
      {
        *((_QWORD *)DeviceExtension + 579) = a1;
        *((_QWORD *)DeviceExtension + 580) = DpiDoInterfaceReference;
        *((_QWORD *)DeviceExtension + 581) = DXGGLOBAL::DereferenceObjectWork;
        *((_QWORD *)DeviceExtension + 582) = DpiBrightnessIfGetPossible;
        *((_QWORD *)DeviceExtension + 583) = DpiBrightnessIfSet;
        *((_QWORD *)DeviceExtension + 584) = DpiBrightnessIfGet;
        *((_DWORD *)DeviceExtension + 1156) = 65592;
      }
    }
  }
  return result;
}
