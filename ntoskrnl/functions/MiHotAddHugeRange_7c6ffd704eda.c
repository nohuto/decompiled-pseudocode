__int64 __fastcall MiHotAddHugeRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v11; // r8d
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+3Ch] [rbp-1Ch]
  unsigned __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-10h]

  v12 = 0LL;
  v15 = 0;
  v13 = 0LL;
  if ( !(unsigned int)MiInitializeHugePfnDatabase() )
    return 3221225626LL;
  v11 = a5;
  if ( a4 )
  {
    if ( a5 != 1 )
    {
      MiHugePageOperation(a1, (a2 >> 18) & 0x3FFFFF);
      v11 = 1;
    }
  }
  v16 = a2;
  v17 = a3;
  v14 = 38;
  return MiAddPartitionHugeRange(a1, (__int64)&v12, v11, a6);
}
