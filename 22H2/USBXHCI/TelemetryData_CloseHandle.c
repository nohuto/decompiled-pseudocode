/*
 * XREFs of TelemetryData_CloseHandle @ 0x1C0050200
 * Callers:
 *     Controller_TelemetryReport @ 0x1C00330D0 (Controller_TelemetryReport.c)
 * Callees:
 *     <none>
 */

void __fastcall TelemetryData_CloseHandle(PVOID *P)
{
  if ( *((_DWORD *)P + 2) )
  {
    ExFreePoolWithTag(*P, 0x74614454u);
    *P = 0LL;
    *((_DWORD *)P + 2) = 0;
  }
  ExFreePoolWithTag(P, 0x74614454u);
}
