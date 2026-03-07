__int64 __fastcall AcpiDeviceBusSpecificReset(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  unsigned int v6; // r10d
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int (__fastcall *v10)(_QWORD); // r11

  v6 = -1073741637;
  if ( !a3 )
    return 3221225485LL;
  if ( ((a3 - 1) & a3) == 0 )
  {
    v8 = *(_QWORD *)&GUID_BUS_TYPE_ACPI.Data1 - *a2;
    if ( *(_QWORD *)&GUID_BUS_TYPE_ACPI.Data1 == *a2 )
      v8 = *(_QWORD *)GUID_BUS_TYPE_ACPI.Data4 - a2[1];
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 80);
      if ( !v9 )
        return v6;
      v10 = *(unsigned int (__fastcall **)(_QWORD))(v9 + 64);
      if ( !v10 )
        return v6;
      return v10(*(_QWORD *)(v9 + 8));
    }
    if ( (*(_BYTE *)a4 & 1) != 0 )
      *(_BYTE *)(a1 + 18) = 1;
    if ( (a3 & 1) != 0 )
      return (unsigned int)AcpiFunctionLevelDeviceReset(a1, a5);
    if ( (a3 & 2) != 0 )
      return (unsigned int)AcpiPlatformLevelDeviceReset(a1, a4);
  }
  return v6;
}
