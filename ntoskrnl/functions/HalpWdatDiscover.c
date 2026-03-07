__int64 HalpWdatDiscover()
{
  __int64 AcpiTable; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  int v6; // eax
  unsigned __int64 v7; // rdx
  int v8; // ecx
  char v9; // si
  __int64 v10; // r15
  int v11; // edx
  int v12; // ecx
  unsigned __int64 v13; // rcx
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v17[18]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v18[14]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v19; // [rsp+148h] [rbp+40h] BYREF

  v16 = 0;
  v15 = 0;
  memset(v17, 0, sizeof(v17));
  memset(v18, 0, sizeof(v18));
  v17[0] = 0x9000000001LL;
  v19 = 0LL;
  AcpiTable = 0LL;
  LOBYTE(v14) = 0;
  if ( !HalpIsMicrosoftCompatibleHvLoaded(v2, v1)
    || !HalpHvCpuManager
    || (HviGetHardwareFeatures(&v19), (v19 & 0x2000000) == 0) )
  {
    AcpiTable = HalSocGetAcpiTable(1413563479LL);
  }
  v3 = HalSocGetAcpiTable(1414677591LL);
  v4 = v3;
  if ( AcpiTable )
  {
    v6 = HalpWdatProcessWdatInternalData(AcpiTable, v18, &v15, &v14);
  }
  else
  {
    if ( !v3 )
      return 0LL;
    v18[1] = v3;
    v6 = HalpWdatProcessWdrtInternalData(v3, v18, &v15, &v14);
  }
  v9 = v14;
  if ( v6 >= 0 )
  {
    if ( !(_BYTE)v14 )
      return 0LL;
    if ( LODWORD(v18[3]) )
    {
      v10 = LODWORD(v18[2]);
      if ( LODWORD(v18[2]) >= HIDWORD(v18[2]) )
      {
        HIDWORD(v17[14]) = 163872;
        LOBYTE(v8) = 32;
        if ( (int)HalpWdatExecuteActionBeforeInitialize(v8, v7, (unsigned int)&v16, AcpiTable, v4) >= 0 && v16 == 1 )
        {
          HIDWORD(v17[14]) = 426016;
          LOBYTE(v12) = 33;
          HalpWdatExecuteActionBeforeInitialize(v12, v11, 0, AcpiTable, v4);
        }
        v13 = (unsigned __int64)LODWORD(v18[3]) * v10 / 0x3E8;
        if ( v13 <= 0x12C436C73CE5LL )
        {
          v7 = 894000 * v13;
          v8 = 63;
          HIDWORD(v17[12]) = 63;
          do
          {
            if ( (1LL << v8) - 1 < v7 )
              break;
            --v8;
          }
          while ( v8 );
          HIDWORD(v17[12]) = v8;
          if ( !v8 )
            goto LABEL_26;
        }
        else
        {
          HIDWORD(v17[12]) = 64;
        }
        v17[3] = 0LL;
        v17[11] = 0LL;
        v17[1] = HalpWdatInitialize;
        v17[4] = HalpWdatArmTimer;
        v17[5] = HalpWdatStop;
        LODWORD(v17[12]) = v15;
        v17[13] = 894000LL;
        v17[17] = 12LL;
        HalpTimerRegister((__int64)v17, 0LL);
      }
    }
  }
LABEL_26:
  if ( v9 )
  {
    LOBYTE(v8) = 11;
    HalpWdatExecuteActionBeforeInitialize(v8, v7, 0, AcpiTable, v4);
  }
  return 0LL;
}
