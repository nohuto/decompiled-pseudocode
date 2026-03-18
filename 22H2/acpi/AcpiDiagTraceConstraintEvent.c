/*
 * XREFs of AcpiDiagTraceConstraintEvent @ 0x1C0007AE8
 * Callers:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0007500 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0008720 (AcpiDiagTracePassiveCoolingConstraint.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceConstraintEvent(
        __int64 a1,
        __int64 a2,
        const EVENT_DESCRIPTOR *a3,
        int a4,
        PEVENT_DATA_DESCRIPTOR a5)
{
  __int64 v8; // rcx
  PEVENT_DATA_DESCRIPTOR UserData; // rcx
  int v10; // edx
  __int16 v11; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v12; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int16 v14; // [rsp+98h] [rbp+38h] BYREF
  __int16 v15; // [rsp+9Ah] [rbp+3Ah]

  v15 = HIWORD(a4);
  v11 = 0;
  v14 = 0;
  DestinationString = 0LL;
  v12 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v12, 0LL);
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, a3) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), &v12, 1LL) >= 0 )
      {
        v8 = *(_QWORD *)(a2 + 760);
        v14 = v12.Length >> 1;
        if ( (int)ACPIAmliBuildObjectPathnameUnicode(v8, &DestinationString, 1LL) >= 0 )
        {
          UserData = a5;
          v10 = DestinationString.Length >> 1;
          a5->Ptr = (unsigned __int64)&v14;
          UserData[1].Ptr = (unsigned __int64)v12.Buffer;
          v11 = v10;
          UserData[1].Size = 2 * v14;
          UserData[3].Size = 2 * v10;
          UserData[2].Ptr = (unsigned __int64)&v11;
          UserData[3].Ptr = (unsigned __int64)DestinationString.Buffer;
          *(_QWORD *)&UserData->Size = 2LL;
          UserData[1].Reserved = 0;
          *(_QWORD *)&UserData[2].Size = 2LL;
          UserData[3].Reserved = 0;
          EtwWrite(AcpiDiagHandle, a3, 0LL, 5u, UserData);
        }
      }
    }
  }
  if ( v12.Buffer )
    ExFreePoolWithTag(v12.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
