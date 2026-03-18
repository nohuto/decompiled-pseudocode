/*
 * XREFs of AcpiDiagTraceUnexpectedGpe @ 0x1C0002680
 * Callers:
 *     ACPIInterruptDispatchEvents @ 0x1C0003AE8 (ACPIInterruptDispatchEvents.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceUnexpectedGpe(int a1, char a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+48h] [rbp-20h]
  int v5; // [rsp+4Ch] [rbp-1Ch]
  int v6; // [rsp+70h] [rbp+8h] BYREF
  char v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_UNEXPECTED_GPE) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (unsigned __int64)&v6;
      UserData.Size = 4;
      v3 = &v7;
      v4 = 1;
      EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_UNEXPECTED_GPE, 0LL, 2u, &UserData);
    }
  }
}
