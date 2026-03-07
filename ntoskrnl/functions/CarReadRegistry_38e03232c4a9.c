__int64 CarReadRegistry()
{
  size_t *v0; // rcx
  __int64 v1; // rdx
  wchar_t *Buffer; // rbx
  __int128 v4; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v5[28]; // [rsp+40h] [rbp-C0h] BYREF

  v0 = CarDrivers;
  v4 = 0LL;
  v1 = 0x7FFFLL;
  while ( *(_WORD *)v0 )
  {
    v0 = (size_t *)((char *)v0 + 2);
    if ( !--v1 )
      goto LABEL_6;
  }
  *((_QWORD *)&v4 + 1) = CarDrivers;
  LOWORD(v4) = 2 * (0x7FFF - v1);
LABEL_6:
  Buffer = CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement.Buffer;
  if ( CmStateSeparationEnabled )
    Buffer = off_140C034B0;
  WORD1(v4) = 3072;
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[4]) = 0x1000000;
  LODWORD(v5[1]) = 288;
  LODWORD(v5[11]) = 0x4000000;
  v5[2] = L"VerifyDrivers";
  LODWORD(v5[8]) = 288;
  v5[3] = &v4;
  LODWORD(v5[18]) = 0x4000000;
  v5[9] = L"XdvVerifierOptions";
  LODWORD(v5[15]) = 288;
  v5[10] = &CarXdvOptions;
  v5[16] = L"XdvTipTag";
  v5[17] = &CarTipTag;
  RtlQueryRegistryValuesEx(0LL, Buffer, v5, 0LL, 0LL);
  return 0LL;
}
