__int64 HalpPmTimerDiscover()
{
  __int64 AcpiTable; // rax
  __int64 v1; // rbx
  bool v2; // zf
  _QWORD v4[18]; // [rsp+20h] [rbp-69h] BYREF
  _OWORD v5[2]; // [rsp+B0h] [rbp+27h] BYREF

  AcpiTable = HalSocGetAcpiTable(1346584902);
  v1 = AcpiTable;
  if ( AcpiTable && (*(_BYTE *)(AcpiTable + 8) < 5u || (*(_DWORD *)(AcpiTable + 112) & 0x100000) == 0) )
  {
    memset(v4, 0, sizeof(v4));
    v4[0] = 0x9000000001LL;
    memset(v5, 0, sizeof(v5));
    if ( !(unsigned int)HalpPmTimerConfigure(v1, v5, v4) )
    {
      v2 = (*(_DWORD *)(v1 + 112) & 0x100) == 0;
      HIDWORD(v4[12]) = 24;
      if ( !v2 )
      {
        LOBYTE(v5[0]) = 1;
        HIDWORD(v4[12]) = 32;
      }
      LODWORD(v4[12]) = 32;
      v4[11] = v5;
      v4[13] = 3579545LL;
      v4[1] = HalpPmTimerInitialize;
      HIDWORD(v4[14]) = 2;
      LODWORD(v4[17]) = 1;
      HalpTimerRegister((__int64)v4, 0LL);
    }
  }
  return 0LL;
}
