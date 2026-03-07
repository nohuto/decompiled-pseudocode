__int64 __fastcall HvlCreatePrQueue(int a1, int a2, unsigned __int64 a3, int a4, int a5)
{
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+48h] [rbp-40h]
  int v12; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp-28h]

  v16 = 0LL;
  v10 = -1LL;
  v11 = a1;
  v12 = a2;
  v13 = a3 >> 12;
  v14 = a4;
  if ( HvlpVirtualProcessorsIdentityMapped )
    v5 = a5;
  else
    v5 = HvlpVirtualProcessorMapping[2 * a5 + 1] | (HvlpVirtualProcessorMapping[2 * a5] << 6);
  v15 = v5;
  while ( 1 )
  {
    LOWORD(v6) = HvcallFastExtended(65703LL, (__int64)&v10, 0x28u, 0LL, 0);
    if ( (HvlpFlags & 2) == 0 || !HvlpHvStatusIsInsufficientMemory(v6) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v6, v7, v6, v8) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus(v6);
}
