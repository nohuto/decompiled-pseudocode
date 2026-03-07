__int64 __fastcall IpmiLibAddSelCheckpointRecord(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  __int16 v3; // r9
  _BYTE v5[9]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+29h] [rbp-Fh]
  __int16 v7; // [rsp+2Ah] [rbp-Eh]
  int v8; // [rsp+2Ch] [rbp-Ch]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  LOWORD(v9) = 0;
  BYTE2(v9) = 0;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 3221225473LL;
  *(_QWORD *)v5 = 14614528LL;
  v8 = v2;
  *(_WORD *)&v5[7] = 311;
  v6 = 0;
  v7 = v3;
  return IpmiLibAddSelRecord(v1, v5, &v9);
}
