__int64 __fastcall HvlDmaReserveDeviceDomainAttachment(__int64 a1, int *a2)
{
  __int16 v2; // ax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD v7[2]; // [rsp+40h] [rbp-38h] BYREF
  BOOL v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]
  __int64 v10; // [rsp+58h] [rbp-20h]

  v7[1] = 0LL;
  v7[0] = -1LL;
  v9 = *a2;
  v8 = *((_BYTE *)a2 + 4) != 0;
  v10 = a1;
  while ( 1 )
  {
    v2 = HvcallFastExtended(65805LL, (__int64)v7, 0x20u, 0LL, 0);
    if ( !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v4, v3, v4, v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v4);
}
