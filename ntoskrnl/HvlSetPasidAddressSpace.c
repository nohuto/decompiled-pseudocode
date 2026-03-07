__int64 __fastcall HvlSetPasidAddressSpace(int a1, int a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v7; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 v10; // [rsp+50h] [rbp-28h]

  v7 = -1LL;
  v9 = a1;
  v8 = a2;
  v10 = a3;
  while ( 1 )
  {
    LOWORD(v3) = HvcallFastExtended(65695LL, (__int64)&v7, 0x18u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v3, v4, v3, v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v3);
}
