__int64 __fastcall SmProcessQueryStoreStats(struct _EPROCESS *a1, _QWORD *a2, _QWORD *a3)
{
  int StoreStats; // r9d
  __int64 v7; // r10
  unsigned int *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _DWORD v13[384]; // [rsp+20h] [rbp-628h] BYREF

  memset(v13, 0, sizeof(v13));
  StoreStats = SmpProcessQueryStoreStats(a1, (struct _ST_STATS *)v13);
  if ( StoreStats >= 0 )
  {
    if ( a2 )
    {
      v7 = v13[3];
      v8 = &v13[11];
      v9 = 0LL;
      v10 = 8LL;
      do
      {
        v11 = *v8;
        v8 += 2;
        v9 += v7 * v11;
        *a2 = v9;
        --v10;
      }
      while ( v10 );
    }
    if ( a3 )
      *a3 = (unsigned __int64)v13[8] << 12;
  }
  return (unsigned int)StoreStats;
}
