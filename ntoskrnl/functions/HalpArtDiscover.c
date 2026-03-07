__int64 HalpArtDiscover()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  _QWORD v2[18]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v3; // [rsp+C0h] [rbp+37h] BYREF
  unsigned int v4; // [rsp+C8h] [rbp+3Fh] BYREF

  v3 = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  if ( HalpArtAvailable(&v3, &v4) )
  {
    memset(v2, 0, sizeof(v2));
    v2[13] = 0LL;
    v2[11] = &v3;
    v2[0] = 0x9000000001LL;
    v2[1] = HalpArtInitialize;
    v2[2] = HalpArtQueryCounter;
    LODWORD(v2[17]) = 14;
    HIDWORD(v2[14]) = 1081347;
    v2[12] = 0x400000000CLL;
    RtlInitUnicodeString(
      &DestinationString,
      L"VEN_vvvv&DEV_dddd&SUBVEN_ssss&SUBDEV_yyyy&REV_rrrr&INST_iiii&UID_uuuuuuuu");
    HalpTimerRegister((__int64)v2, &DestinationString);
    HalpTimerAuxiliaryClockEnabled = 1;
  }
  return 0LL;
}
