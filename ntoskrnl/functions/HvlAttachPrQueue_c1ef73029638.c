__int64 __fastcall HvlAttachPrQueue(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // r9
  _QWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+54h] [rbp-24h]

  v8 = 0;
  v6[0] = -1LL;
  v6[1] = a1;
  v7 = a2;
  while ( 1 )
  {
    LOWORD(v2) = HvcallFastExtended(65803LL, (__int64)v6, 0x18u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v2) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v2, v3, v2, v4) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v2);
}
