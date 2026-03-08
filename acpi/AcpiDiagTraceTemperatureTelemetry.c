/*
 * XREFs of AcpiDiagTraceTemperatureTelemetry @ 0x1C00089D4
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1C0009240 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0009270 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceTemperatureTelemetry(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-29h] BYREF
  int *v12; // [rsp+70h] [rbp-9h]
  int v13; // [rsp+78h] [rbp-1h]
  int v14; // [rsp+7Ch] [rbp+3h]
  _DWORD *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  wchar_t *Buffer; // [rsp+90h] [rbp+17h]
  _DWORD v19[2]; // [rsp+98h] [rbp+1Fh] BYREF
  _DWORD *v20; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]
  __int64 v23; // [rsp+B0h] [rbp+37h]
  _DWORD v24[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagThermalTelemetryEnabled )
  {
    v2 = *(_QWORD *)(a1 + 200);
    if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), &DestinationString, 1LL) >= 0
      && (unsigned int)dword_1C006DCE0 > 5
      && (unsigned __int8)tlgKeywordOn(&dword_1C006DCE0, v3, v4, v5) )
    {
      v8 = *(_DWORD *)(v2 + 328);
      v14 = 0;
      v17 = 0;
      v19[1] = 0;
      v22 = 0;
      v24[1] = 0;
      v9 = v8;
      v12 = &v9;
      v15 = v19;
      Buffer = DestinationString.Buffer;
      v19[0] = DestinationString.Length;
      v20 = v24;
      v23 = *(_QWORD *)(v2 + 312);
      v24[0] = *(unsigned __int16 *)(v2 + 304);
      v16 = 2;
      v21 = 2;
      v13 = 4;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C006DCE0, (int)&dword_1C0062911, v6, v7, 7u, &v11);
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
