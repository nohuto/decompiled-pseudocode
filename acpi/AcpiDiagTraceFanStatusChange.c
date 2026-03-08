/*
 * XREFs of AcpiDiagTraceFanStatusChange @ 0x1C00084F0
 * Callers:
 *     ACPIFanFSTCallback @ 0x1C0026F60 (ACPIFanFSTCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     AcpiDiagTraceFanEvent @ 0x1C0008320 (AcpiDiagTraceFanEvent.c)
 */

void __fastcall AcpiDiagTraceFanStatusChange(__int64 a1)
{
  int v1; // [rsp+20h] [rbp-68h] BYREF
  int v2; // [rsp+24h] [rbp-64h] BYREF
  _QWORD v3[5]; // [rsp+30h] [rbp-58h] BYREF
  int v4; // [rsp+58h] [rbp-30h]
  int v5; // [rsp+5Ch] [rbp-2Ch]
  int *v6; // [rsp+60h] [rbp-28h]
  int v7; // [rsp+68h] [rbp-20h]
  int v8; // [rsp+6Ch] [rbp-1Ch]

  v1 = *(_DWORD *)(a1 + 296);
  v2 = *(_DWORD *)(a1 + 304);
  v3[4] = &v1;
  v4 = 4;
  v5 = 0;
  v6 = &v2;
  v7 = 4;
  v8 = 0;
  AcpiDiagTraceFanEvent(a1, &ACPI_ETW_EVENT_FAN_STATUS_CHANGE, 4u, (__int64)v3);
}
