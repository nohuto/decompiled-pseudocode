/*
 * XREFs of _CmValidateDeviceName @ 0x14077FAC0
 * Callers:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     _CmGetDeviceRegKeyPath @ 0x14077F934 (_CmGetDeviceRegKeyPath.c)
 *     _PnpDispatchDevice @ 0x1407855F0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceInterfaceName @ 0x140789718 (_CmGetDeviceInterfaceName.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14078A748 (PiCMGetRelatedDeviceInstance.c)
 *     _CmEnumSubkeyCallback @ 0x14083E410 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140955848 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x140955BAC (PiCMGetDeviceDepth.c)
 *     PiCMRegisterDeviceInterface @ 0x140955EF8 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14095618C (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1402DF9D0 (RtlUnalignedStringCchLengthW.c)
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, const wchar_t *a2)
{
  int v2; // ebx
  int v3; // edi
  NTSTATUS v4; // r8d
  __int16 *v5; // r11
  __int16 v6; // ax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v4 >= 0 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      while ( (unsigned __int16)(v6 - 33) <= 0x5Eu && v6 != 44 )
      {
        if ( v6 == 92 )
        {
          if ( !v2 )
            return 3221225523LL;
          v2 = 0;
          ++v3;
        }
        else
        {
          ++v2;
        }
        v6 = v5[1];
        ++v5;
        if ( !v6 )
        {
          if ( v2 && v3 == 3 )
            return (unsigned int)v4;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}
