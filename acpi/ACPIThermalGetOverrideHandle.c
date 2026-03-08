/*
 * XREFs of ACPIThermalGetOverrideHandle @ 0x1C00958FC
 * Callers:
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     OSOpenHandle @ 0x1C008DF10 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1C008E3DC (OSOpenUnicodeHandle.c)
 */

void *__fastcall ACPIThermalGetOverrideHandle(__int64 a1)
{
  struct _UNICODE_STRING v2; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  void *v4; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  v4 = 0LL;
  v2 = 0LL;
  if ( (AcpiOverrideAttributes & 0x10000) != 0 )
  {
    if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), (__int64)&v2, 2) >= 0
      && (int)OSOpenHandle(
                "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters\\ThermalOverride",
                0LL,
                (__int64)&Handle) >= 0 )
    {
      OSOpenUnicodeHandle(&v2, Handle, &v4);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  if ( v2.Buffer )
    ExFreePoolWithTag(v2.Buffer, 0);
  return v4;
}
