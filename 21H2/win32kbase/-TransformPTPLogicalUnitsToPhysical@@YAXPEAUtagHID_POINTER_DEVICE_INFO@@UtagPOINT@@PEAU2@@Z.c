/*
 * XREFs of ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C0197654
 * Callers:
 *     RIMApplyPTPTranslation @ 0x1C0197DB0 (RIMApplyPTPTranslation.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C019800C (RIMConvertPointCoordinates.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall TransformPTPLogicalUnitsToPhysical(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT *a3)
{
  LONG x; // ebx

  x = a2.x;
  if ( *((_DWORD *)a1 + 6) != 7 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgsKM)(a1, a2, a3);
  if ( !(unsigned int)RIMConvertPointCoordinates(x) )
  {
    a3->x = 0;
    a3->y = 0;
  }
}
