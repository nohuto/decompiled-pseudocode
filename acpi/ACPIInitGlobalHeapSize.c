__int64 ACPIInitGlobalHeapSize()
{
  __int64 v0; // rdx
  int v1; // ecx
  unsigned int v2; // ebx

  v0 = *(_QWORD *)AcpiInformation;
  v1 = *(_DWORD *)(*(_QWORD *)AcpiInformation + 10LL) - 1431589462;
  if ( *(_DWORD *)(*(_QWORD *)AcpiInformation + 10LL) == 1431589462 )
    v1 = *(unsigned __int16 *)(v0 + 14) - 19521;
  if ( !v1 && *(_QWORD *)(v0 + 16) == 0x5446534F5243494DLL && *(_DWORD *)(v0 + 28) == 1413894989 )
  {
    return 0x40000;
  }
  else
  {
    v2 = 0x100000;
    if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ACPI") >= 0
      && (int)OSReadRegValue("AMLIGlobalHeapSize") >= 0 )
    {
      return 0x8000;
    }
  }
  return v2;
}
