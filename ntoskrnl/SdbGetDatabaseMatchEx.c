/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x1407A1A40
 * Callers:
 *     KsepDbGetDriverShimsInternal @ 0x14079EF10 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1408012E8 (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     wcsrchr @ 0x1403D5F90 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbFindFirstStringIndexedTag @ 0x14079F36C (SdbFindFirstStringIndexedTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407A1870 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x1407A1BD8 (SdbpCheckKObject.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407A1E68 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbTagIDToTagRef @ 0x1408003AC (SdbTagIDToTagRef.c)
 *     SdbFindNextStringIndexedTag @ 0x140848AD4 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140A4DE80 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140A4DF28 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x140A4DFD4 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140A4E050 (SdbpFindNextWildcardTagWithoutIndex.c)
 */

__int64 __fastcall SdbGetDatabaseMatchEx(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v9; // r15
  int v10; // r12d
  wchar_t *v11; // rax
  const WCHAR *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r13
  union _RTL_RUN_ONCE *v15; // rsi
  unsigned int k; // eax
  unsigned int v17; // r14d
  unsigned int m; // eax
  unsigned int v19; // ebx
  unsigned int i; // eax
  unsigned int v22; // r14d
  unsigned int j; // eax
  unsigned int v24; // r14d
  __int64 v25[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-10h]
  unsigned int v28; // [rsp+A8h] [rbp+38h] BYREF

  v27 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v9 = 28698;
    v10 = 0;
  }
  else
  {
    v9 = 28700;
    v10 = (int)a3;
    v11 = wcsrchr(a3, 0x5Cu);
    if ( v11 )
    {
      v12 = v11 + 1;
      goto LABEL_4;
    }
  }
  v12 = a3;
LABEL_4:
  v28 = 0;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = a7;
  if ( v13 )
  {
    for ( i = SdbpFindFirstTagWithoutIndex(v13, (__int64)v25); ; i = SdbpFindNextTagWithoutIndex(v13) )
    {
      v22 = i;
      if ( !i )
      {
        for ( j = SdbpFindFirstWildcardTagWithoutIndex(v13, (__int64)v25); ; j = SdbpFindNextWildcardTagWithoutIndex(v13) )
        {
          v24 = j;
          if ( !j )
            break;
          if ( (unsigned int)SdbpCheckKObject(a1, v13, j, v10, -1LL, a5, a6, v14) )
          {
            if ( (unsigned int)SdbTagIDToTagRef(a1, v13, v24, &v28) )
              return v28;
            goto LABEL_32;
          }
        }
        goto LABEL_5;
      }
      if ( (unsigned int)SdbpCheckKObject(a1, v13, i, v10, -1LL, a5, a6, v14) )
        break;
    }
    if ( !(unsigned int)SdbTagIDToTagRef(a1, v13, v22, &v28) )
LABEL_32:
      AslLogCallPrintf(1LL);
  }
  else
  {
LABEL_5:
    v15 = *(union _RTL_RUN_ONCE **)(a1 + 8);
    for ( k = SdbFindFirstStringIndexedTag(v15, v9, 24577, v12, (unsigned int *)v25);
          ;
          k = SdbFindNextStringIndexedTag(v15, v25) )
    {
      v17 = k;
      if ( !k )
      {
        for ( m = SdbpFindFirstIndexedWildCardTag(v15, v9, 24587, (__int64)v12, (unsigned int *)v25);
              ;
              m = SdbpFindNextIndexedWildCardTag(v15, v25) )
        {
          v19 = m;
          if ( !m )
            break;
          if ( (unsigned int)SdbpCheckKObject(a1, (_DWORD)v15, m, v10, -1LL, a5, a6, v14) )
          {
            if ( (unsigned int)SdbTagIDToTagRef(a1, v15, v19, &v28) )
              return v28;
            goto LABEL_32;
          }
        }
        return v28;
      }
      if ( (unsigned int)SdbpCheckKObject(a1, (_DWORD)v15, k, v10, -1LL, a5, a6, v14) )
        break;
    }
    if ( !(unsigned int)SdbTagIDToTagRef(a1, v15, v17, &v28) )
      goto LABEL_32;
  }
  return v28;
}
