/*
 * XREFs of ?GetMouseDeviceHardwareId@@YAJPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0121AF8
 * Callers:
 *     IsMouseDeviceOnIgnoreList @ 0x1C0121860 (IsMouseDeviceOnIgnoreList.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C02209F0 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C0220C50 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 * Callees:
 *     GetPointerDeviceId @ 0x1C0121ED8 (GetPointerDeviceId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall GetMouseDeviceHardwareId(
        struct DEVICEINFO *a1,
        struct _DEVICE_OBJECT *a2,
        struct _UNICODE_STRING *a3)
{
  int PointerDeviceId; // ebx
  __int64 v8; // rax

  PointerDeviceId = 0;
  if ( *((_BYTE *)a1 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 479LL);
  if ( !*((_QWORD *)a1 + 113) )
  {
    v8 = Win32AllocPool(a3->MaximumLength, 1684630869LL);
    *((_QWORD *)a1 + 113) = v8;
    if ( !v8 )
      return (unsigned int)-1073741801;
    *((_WORD *)a1 + 449) = a3->MaximumLength;
    PointerDeviceId = GetPointerDeviceId(a2, (PUNICODE_STRING)a1 + 56);
    if ( PointerDeviceId < 0 )
      return (unsigned int)PointerDeviceId;
  }
  RtlCopyUnicodeString(a3, (PCUNICODE_STRING)a1 + 56);
  return (unsigned int)PointerDeviceId;
}
