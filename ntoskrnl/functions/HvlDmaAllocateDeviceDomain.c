__int64 __fastcall HvlDmaAllocateDeviceDomain(int *a1)
{
  int v2; // eax
  char v3; // cl
  __int16 v4; // ax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+54h] [rbp-24h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  v9[1] = 0LL;
  v12 = 0LL;
  v9[0] = -1LL;
  v10 = *((_BYTE *)a1 + 4) != 0;
  v2 = *a1;
  v3 = *((_BYTE *)a1 + 8);
  v11 = v2;
  LODWORD(v12) = *((_BYTE *)a1 + 9) & 1 | (2 * (v3 & 1));
  while ( 1 )
  {
    v4 = HvcallFastExtended(65713LL, (__int64)v9, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v4) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v6, v5, v6, v7) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v6);
}
