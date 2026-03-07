__int64 __fastcall AcpiKsrRestorePersistentContext(__int64 a1)
{
  __int64 v2; // r8
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  KsrQueryMetadata(&GUID_ACPI_KSR_CONTEXT, a1, &AcpiKsrContext, 16LL, &v4);
  if ( (_QWORD)AcpiKsrContext != 0x15854434BLL )
    AcpiKsrContext = 0LL;
  LOBYTE(v2) = 1;
  return KsrFreePersistedMemoryBlock(&GUID_ACPI_KSR_CONTEXT, a1, v2);
}
