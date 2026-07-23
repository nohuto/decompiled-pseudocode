/*
 * XREFs of sub_1409639F0 @ 0x1409639F0
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409639F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v7; // r8d
  unsigned int *v8; // rax
  unsigned int i; // ecx
  __int64 v10; // r8
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // edi
  NTSTATUS v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  _DWORD *PoolWithTag; // rax
  int v21; // edi
  unsigned int v22; // r9d
  __int64 v23; // r10
  unsigned int v24; // edx
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rdx
  unsigned int v29; // eax
  LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_18;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_18;
    }
    v12 = *v8;
    v13 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_18:
      v7 = -1073741675;
      goto LABEL_19;
    }
    v14 = 0LL;
    if ( v12 )
      v14 = v13;
    v7 = 0;
    if ( v12 == 8 )
    {
      v4 = *(_QWORD *)v14;
      goto LABEL_19;
    }
    return (unsigned int)-1073741789;
  }
  v7 = -1073741811;
LABEL_19:
  if ( (v7 & 0x80000000) == 0 )
  {
    Interval.QuadPart = -35000000LL;
    do
    {
      v15 = KeDelayExecutionThread(1, 1u, &Interval);
      v16 = v15;
    }
    while ( v15 == 257 );
    if ( v15 >= 0 && v15 != 192 )
    {
      Interval.QuadPart = -270000000LL;
      do
      {
        v17 = KeWaitForSingleObject(&stru_140C13EA0, UserRequest, 1, 1u, &Interval);
        v16 = v17;
      }
      while ( v17 == 257 );
      if ( v17 >= 0 && v17 != 192 && v17 != 258 )
        KeReleaseMutex(&stru_140C13EA0, 0);
    }
    v18 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
    {
      v19 = *(_DWORD *)(a2 + 16) + 52;
      if ( v19 >= *(_DWORD *)(a2 + 16) + 48 )
      {
        v7 = v19 + v18 < v19 ? 0xC0000095 : 0;
        if ( v19 + v18 < v19 )
          return v7;
        *(_DWORD *)(a4 + 4) = 20;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v21 = v16 | 0x10000000;
        if ( PoolWithTag + 1 >= PoolWithTag )
        {
          if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
            return (unsigned int)-1073741789;
          *PoolWithTag = 4;
          PoolWithTag[1] = v21;
          v22 = ++*(_DWORD *)a4;
          v23 = *(_QWORD *)(a4 + 8);
          if ( !v23 )
          {
            v24 = *(_DWORD *)(a4 + 4);
            v25 = -1;
            v26 = v24 + 12;
            if ( v24 + 12 >= v24 )
              v25 = v24 + 12;
            v7 = v26 < v24 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v25;
            if ( v26 >= v24 )
            {
              v7 = 0;
              *(_DWORD *)a4 = v22 + 1;
            }
            return v7;
          }
          v27 = 0;
          v28 = *(_QWORD *)(a4 + 8);
          if ( v22 )
          {
            while ( 1 )
            {
              v29 = *(_DWORD *)v28 + 4;
              if ( *(_DWORD *)v28 >= 0xFFFFFFFC || v28 + v29 < v28 )
                break;
              ++v27;
              v28 += v29;
              if ( v27 >= v22 )
                goto LABEL_46;
            }
          }
          else
          {
LABEL_46:
            if ( v28 + 4 >= v28 )
            {
              v7 = 0;
              if ( v28 + 12 <= v23 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v28 = 8;
                *(_QWORD *)(v28 + 4) = v4;
                ++*(_DWORD *)a4;
                return v7;
              }
              return (unsigned int)-1073741789;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741675;
  }
  return v7;
}
