void __fastcall PopUpdateSmbiosData(char a1, char a2, int a3, __int64 a4)
{
  int v4; // r10d
  __int64 v7; // rcx

  v4 = WmipSMBiosTableLength;
  BYTE2(WmipSMBiosVersionInfo) = a2;
  v7 = WmipSMBiosTablePhysicalAddress;
  BYTE1(WmipSMBiosVersionInfo) = a1;
  WmipSMBiosTablePhysicalAddress = a4;
  LODWORD(WmipSMBiosTableLength) = a3;
  if ( a4 != v7 || a3 != v4 )
    PopTraceSmbiosChange(v7, v4);
}
