bool __fastcall ACPIGpeValidIndex(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9

  return (unsigned __int8)ACPIValidateGPEEventIndex(a1, 0LL, *((unsigned __int16 *)AcpiInformation + 43))
      || (unsigned __int8)ACPIValidateGPEEventIndex(v1, *(unsigned __int16 *)(v2 + 100), *(unsigned __int16 *)(v2 + 98)) != 0;
}
