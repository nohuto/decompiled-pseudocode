/*
 * XREFs of ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01CFE2C
 * Callers:
 *     CheckForLegacyTouchPad @ 0x1C011A940 (CheckForLegacyTouchPad.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01D000C (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 */

_BOOL8 __fastcall IsHIDMouseDeviceRelative(struct _FILE_OBJECT *a1, struct _DEVICE_OBJECT *a2)
{
  BOOL v4; // ebx
  union _LARGE_INTEGER *v6; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  USHORT ValueCapsLength; // [rsp+48h] [rbp-79h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-71h] BYREF
  int v10; // [rsp+58h] [rbp-69h]
  _HIDP_CAPS Capabilities; // [rsp+68h] [rbp-59h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A8h] [rbp-19h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  Timeout.QuadPart = 0LL;
  v10 = 0;
  v4 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( (int)SendSyncOutputIrpRequest(0xB01A8u, &Timeout, 0xCu, a1, a2) < 0 )
    return 0LL;
  v6 = (union _LARGE_INTEGER *)Win32AllocPoolNonPagedZInit(Timeout.LowPart, 1147695957LL);
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)v6;
  if ( v6 )
  {
    if ( (int)SendSyncOutputIrpRequest(0xB0193u, v6, Timeout.LowPart, a1, a2) >= 0
      && HidP_GetCaps(PreparsedData, &Capabilities) == 1114112
      && Capabilities.UsagePage == 1
      && (unsigned __int16)(Capabilities.Usage - 1) <= 1u
      && HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0x30u, &ValueCaps, &ValueCapsLength, PreparsedData) >= 0 )
    {
      v4 = ValueCaps.IsAbsolute == 0;
    }
    Win32FreePool(PreparsedData);
  }
  return v4;
}
