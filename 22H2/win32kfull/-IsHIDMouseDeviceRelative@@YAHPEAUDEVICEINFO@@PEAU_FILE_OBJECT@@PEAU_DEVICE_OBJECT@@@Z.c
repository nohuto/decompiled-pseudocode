/*
 * XREFs of ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0121178
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C0121020 (IsLegacyTouchPadDevice.c)
 * Callees:
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01212FC (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

_BOOL8 __fastcall IsHIDMouseDeviceRelative(struct DEVICEINFO *a1, struct _FILE_OBJECT *a2, struct _DEVICE_OBJECT *a3)
{
  BOOL v6; // ebx
  __int64 LowPart; // rcx
  union _LARGE_INTEGER *v8; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  USHORT ValueCapsLength; // [rsp+40h] [rbp-89h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp-81h] BYREF
  int v13; // [rsp+50h] [rbp-79h]
  _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-69h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-29h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  Timeout.QuadPart = 0LL;
  v13 = 0;
  v6 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( (int)SendSyncOutputIrpRequest(0xB01A8u, &Timeout, 0xCu, a2, a3) < 0 )
    return 0LL;
  LowPart = Timeout.LowPart;
  *((_WORD *)a1 + 445) = HIWORD(Timeout.QuadPart);
  *((_WORD *)a1 + 446) = v13;
  v8 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged(LowPart, 1147695957LL);
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)v8;
  if ( v8 )
  {
    if ( (int)SendSyncOutputIrpRequest(0xB0193u, v8, Timeout.LowPart, a2, a3) >= 0
      && HidP_GetCaps(PreparsedData, &Capabilities) == 1114112
      && Capabilities.UsagePage == 1
      && (unsigned __int16)(Capabilities.Usage - 1) <= 1u
      && HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0x30u, &ValueCaps, &ValueCapsLength, PreparsedData) >= 0 )
    {
      v6 = ValueCaps.IsAbsolute == 0;
    }
    Win32FreePool(PreparsedData);
  }
  return v6;
}
