/*
 * XREFs of _CmValidateDeviceName @ 0x1406CE870
 * Callers:
 *     _PnpDispatchDevice @ 0x1406CD0C0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceRegKeyPath @ 0x1406CE6EC (_CmGetDeviceRegKeyPath.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14079A200 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceInterfaceName @ 0x1407C5F48 (_CmGetDeviceInterfaceName.c)
 *     _CmEnumSubkeyCallback @ 0x14082C810 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14096973C (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x140969C6C (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x140969FD0 (PiCMGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x14096A324 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A734 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14096A9C8 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14022B68C (RtlUnalignedStringCchLengthW.c)
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, const wchar_t *a2)
{
  const wchar_t *v2; // rbx
  int v3; // edi
  NTSTATUS v4; // r8d
  int v5; // r11d
  wchar_t v6; // ax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v4 >= 0 )
  {
    v6 = *v2;
    if ( *v2 )
    {
      while ( (unsigned __int16)(v6 - 33) <= 0x5Eu && v6 != 44 )
      {
        if ( v6 == 92 )
        {
          if ( !v5 )
            return 3221225523LL;
          v5 = 0;
          ++v3;
        }
        else
        {
          ++v5;
        }
        v6 = v2[1];
        ++v2;
        if ( !v6 )
        {
          if ( v5 && v3 == 3 )
            return (unsigned int)v4;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}
