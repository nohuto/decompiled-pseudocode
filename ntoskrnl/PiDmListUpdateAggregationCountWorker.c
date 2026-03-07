void __fastcall PiDmListUpdateAggregationCountWorker(__int64 a1, __int64 a2, int a3)
{
  char *v3; // rbx
  __int64 v7; // r14
  int v8; // ecx
  __int64 v9; // rsi
  unsigned int CachedKeyIndex; // eax
  unsigned int v11; // edx
  int *v12; // rcx
  int v13; // eax
  unsigned int v14; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v16; // [rsp+38h] [rbp-18h] BYREF
  DEVPROPKEY **v17; // [rsp+40h] [rbp-10h] BYREF
  char v18; // [rsp+98h] [rbp+48h] BYREF

  v17 = 0LL;
  v3 = byte_140001518;
  v14 = 0;
  v16 = 0;
  v15 = 0;
  v18 = 0;
  v7 = 3LL;
  do
  {
    v8 = *((_DWORD *)v3 - 6);
    if ( *(_DWORD *)(a2 + 28) == v8 && *(_DWORD *)(a1 + 28) == *(_DWORD *)v3 )
    {
      v9 = *((_QWORD *)v3 + 3);
      if ( *(_DWORD *)(a1 + v9) != 0x80000000 )
      {
        PiDmGetCacheKeys(v8, &v17, &v14);
        CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v17, v14, *((_QWORD *)v3 - 2));
        if ( CachedKeyIndex < v11 )
        {
          v12 = (int *)(a2 + 8 * (CachedKeyIndex + 2 * (CachedKeyIndex + 7LL)));
          if ( (unsigned int)*v12 <= 1 )
            goto LABEL_15;
          v13 = PiDmCacheDataDecode(v12, &v15, (GUID *)&v18, 1u, &v16);
          if ( v13 < 0 )
          {
            if ( v13 != -1073741275 && v13 != -1073741789 )
LABEL_15:
              *(_DWORD *)(a1 + v9) = 0x80000000;
          }
          else if ( v18 == -1 && v15 == 17 )
          {
            *(_DWORD *)(a1 + v9) += a3;
          }
        }
      }
    }
    v3 += 56;
    --v7;
  }
  while ( v7 );
}
