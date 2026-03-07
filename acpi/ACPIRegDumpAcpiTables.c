int ACPIRegDumpAcpiTables()
{
  ULONG *v0; // rsi
  ULONG *v1; // rbp
  ULONG *v2; // rdi
  ULONG *v3; // rbx
  _UNKNOWN **v4; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // bl
  _DWORD *v7; // rcx
  char v8; // al
  char SourceString[8]; // [rsp+30h] [rbp-18h] BYREF

  v0 = (ULONG *)*((_QWORD *)AcpiInformation + 3);
  v1 = (ULONG *)*((_QWORD *)AcpiInformation + 2);
  v2 = (ULONG *)*((_QWORD *)AcpiInformation + 1);
  v3 = *(ULONG **)AcpiInformation;
  strcpy(SourceString, "SSD0");
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    LODWORD(v4) = WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    4,
                    11,
                    36,
                    (__int64)&WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids);
  if ( v0 )
    LODWORD(v4) = ACPIRegDumpAcpiTable("DSDT", v0, v0[1], (__int64)v0);
  if ( v1 )
    LODWORD(v4) = ACPIRegDumpAcpiTable("FACS", v1, v1[1], 0LL);
  if ( v2 )
    LODWORD(v4) = ACPIRegDumpAcpiTable("FADT", v2, v2[1], (__int64)v2);
  if ( v3 )
    LODWORD(v4) = ACPIRegDumpAcpiTable("RSDT", v3, v3[1], (__int64)v3);
  v5 = AcpiDynamicDataBlockTableList;
  v6 = 0;
  while ( (__int64 *)v5 != &AcpiDynamicDataBlockTableList )
  {
    v7 = *(_DWORD **)(v5 + 24);
    if ( *v7 == 1413763923 )
    {
      if ( v6 )
      {
        if ( v6 >= 0xAu )
        {
          if ( v6 >= 0x23u )
            return (int)v4;
          v8 = v6 + 55;
        }
        else
        {
          v8 = v6 + 48;
        }
        SourceString[3] = v8;
      }
      else
      {
        SourceString[3] = 84;
      }
      ++v6;
      LODWORD(v4) = ACPIRegDumpAcpiTable(SourceString, *(PVOID *)(v5 + 24), v7[1], (__int64)v7);
    }
    v5 = *(_QWORD *)v5;
  }
  return (int)v4;
}
