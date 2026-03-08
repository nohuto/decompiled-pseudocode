/*
 * XREFs of VmpAccessFaultBatchResolve @ 0x1409D9F48
 * Callers:
 *     VmpAccessFaultBatch @ 0x14045DEF6 (VmpAccessFaultBatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmGetNodeFastLargePageCounts @ 0x1406154C4 (MmGetNodeFastLargePageCounts.c)
 *     MmVirtualAccessFault @ 0x1408A7758 (MmVirtualAccessFault.c)
 *     MmBuildLargePages @ 0x140A43304 (MmBuildLargePages.c)
 */

__int64 __fastcall VmpAccessFaultBatchResolve(_QWORD *a1, unsigned int a2, __int64 a3, char a4, char a5, int a6)
{
  char v6; // r14
  __int64 v8; // r9
  char *v9; // rbp
  unsigned int v10; // r15d
  char v11; // dl
  int v12; // r12d
  char v13; // cl
  char v14; // dl
  char v15; // cl
  _QWORD *v16; // r13
  unsigned int v17; // edi
  __int64 v18; // rdx
  unsigned __int64 i; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  size_t v22; // rsi
  __int64 result; // rax
  const signed __int64 *v24; // rdx
  char v25; // [rsp+20h] [rbp-F8h]
  int v26; // [rsp+24h] [rbp-F4h]
  int v27; // [rsp+28h] [rbp-F0h]
  _QWORD *v29; // [rsp+30h] [rbp-E8h]
  signed __int64 v30; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-D8h]
  char v32; // [rsp+50h] [rbp-C8h] BYREF

  v31 = 0LL;
  v6 = a4;
  v8 = a2;
  if ( a3 )
  {
    v9 = *(char **)(a3 + 16);
    v10 = *(_DWORD *)a3;
  }
  else
  {
    v9 = &v32;
    v10 = 16;
  }
  v11 = v6 & 1 | 2;
  v12 = v6 & 2;
  if ( (v6 & 2) == 0 )
    v11 = v6 & 1;
  v27 = v6 & 4;
  if ( (v6 & 4) != 0 )
    v11 |= 1u;
  v13 = v11 | 8;
  if ( (v6 & 8) == 0 )
    v13 = v11;
  v14 = v13 | 0x10;
  if ( (v6 & 0x10) == 0 )
    v14 = v13;
  v26 = v6 & 0x20;
  v15 = v14 | 0x20;
  if ( (v6 & 0x20) == 0 )
    v15 = v14;
  v16 = &a1[6 * v8];
  v25 = v15;
  v17 = 0;
  v29 = v16;
  while ( a1 < v16 )
  {
    v18 = a1[3] & 0xFFFFFFFFFFFFFLL;
    v30 = a1[3] << 12;
    if ( !v17 )
    {
      v17 = 1;
      for ( i = (unsigned __int64)(a1 + 6); i < (unsigned __int64)v16; i += 48LL )
      {
        if ( v17 >= v10 )
          break;
        v20 = *(_QWORD *)(i + 24) & 0xFFFFFFFFFFFFFLL;
        if ( v20 != v18 + 1 )
          break;
        v18 = v20;
        ++v17;
      }
      if ( (v6 & 0x40) != 0 && v17 == 512 && !MmGetNodeFastLargePageCounts(i, a6 - 1) )
        MmBuildLargePages(v21, (unsigned int)(a6 - 1));
    }
    v31 = v17 << 12;
    v22 = 8LL * v17;
    memset(v9, 0, v22);
    result = MmVirtualAccessFault(&v30, (__int64)v9, v25);
    if ( (int)result >= 0 )
    {
      v24 = (const signed __int64 *)v9;
      if ( v9 < &v9[v22] )
      {
        do
        {
          if ( (*v24 & 0x10000000000000LL) == 0 )
            break;
          a1[5] = *v24 & 0xFFFFFFFFFFFFFLL;
          if ( v12 || (*v24 & 0x20000000000000LL) != 0 && (a5 & 2) != 0 )
            a1[4] |= 0x10000000000000uLL;
          if ( v27 )
            a1[4] |= 0x20000000000000uLL;
          if ( _bittest64(v24, 0x37u) )
            a1[4] |= 0x40000000000000uLL;
          ++v24;
          a1 += 6;
          --v17;
        }
        while ( v24 < (const signed __int64 *)&v9[v22] );
        v6 = a4;
        v16 = v29;
      }
    }
    else
    {
      if ( !v26 )
        return result;
      a1[4] |= 0x100000000000000uLL;
      a1 += 6;
      v17 = 0;
      v10 = 1;
    }
  }
  return 0LL;
}
