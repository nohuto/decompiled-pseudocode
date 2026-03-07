__int64 HalpPowerInitFwPerformanceTableMappings()
{
  unsigned int v0; // esi
  _DWORD *Table; // rax
  _DWORD *v2; // rbp
  _DWORD *v3; // r14
  unsigned __int64 v4; // rbx
  unsigned int v5; // r15d
  _DWORD *v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v10; // rbx
  unsigned int v11; // r15d
  _DWORD *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  v15 = 0;
  Table = (_DWORD *)HalpAcpiGetTable(0LL, 1413763142, 0, 0);
  v2 = Table;
  if ( !Table || *Table != 1413763142 )
    return (unsigned int)-1073741275;
  v3 = Table + 9;
  if ( Table + 9 < (_DWORD *)((char *)Table + (unsigned int)Table[1]) )
  {
    do
    {
      if ( *(_WORD *)v3 )
      {
        if ( *(_WORD *)v3 != 1 )
          return (unsigned int)-1073741822;
        v10 = *((_QWORD *)v3 + 1);
        HalGetMemoryCachingRequirements(v10, 8LL, &v15);
        v11 = 4;
        if ( v15 != 1 )
          v11 = 516;
        v12 = (_DWORD *)MmMapIoSpaceEx(v10, 8LL, v11);
        if ( !v12 )
          return (unsigned int)-1073741670;
        v13 = v12[1];
        MmUnmapIoSpace(v12, 8uLL);
        v14 = MmMapIoSpaceEx(v10, v13, v11);
        if ( !v14 )
          return (unsigned int)-1073741670;
        HalpFwS3PerformanceTable = v14;
        HalpFwS3PerformanceTableMaximumLength = (((v14 & 0xFFF) + v13 + 4095) & 0xFFFFF000) - (v14 & 0xFFF);
      }
      else
      {
        v4 = *((_QWORD *)v3 + 1);
        HalGetMemoryCachingRequirements(v4, 8LL, &v15);
        v5 = 4;
        if ( v15 != 1 )
          v5 = 516;
        v6 = (_DWORD *)MmMapIoSpaceEx(v4, 8LL, v5);
        if ( !v6 )
          return (unsigned int)-1073741670;
        v7 = v6[1];
        MmUnmapIoSpace(v6, 8uLL);
        v8 = MmMapIoSpaceEx(v4, v7, v5);
        if ( !v8 )
          return (unsigned int)-1073741670;
        HalpFwBootPerformanceTable = v8;
        HalpFwBootPerformanceTableMaximumLength = v7;
      }
      v3 = (_DWORD *)((char *)v3 + *((unsigned __int8 *)v3 + 2));
    }
    while ( v3 < (_DWORD *)((char *)v2 + (unsigned int)v2[1]) );
  }
  return v0;
}
