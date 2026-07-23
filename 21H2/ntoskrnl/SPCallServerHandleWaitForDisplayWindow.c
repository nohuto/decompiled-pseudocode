/*
 * XREFs of SPCallServerHandleWaitForDisplayWindow @ 0x14078CF3C
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleWaitForDisplayWindow(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int *v7; // rax
  unsigned int v8; // r8d
  int v9; // edi
  int v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  unsigned int *v13; // rax
  unsigned int i; // ecx
  __int64 v15; // r8
  unsigned int *v16; // rdx
  unsigned int v17; // edx
  unsigned int *v18; // rcx
  NTSTATUS v19; // eax
  int v20; // edx
  unsigned int v21; // ecx
  _DWORD *PoolWithTag; // rax
  int v24; // edi
  unsigned int v25; // r9d
  __int64 v26; // r10
  int v27; // r11d
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // r9
  int v32; // edi
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned __int64 v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // ecx
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  LARGE_INTEGER v41; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  int v43; // [rsp+80h] [rbp+8h] BYREF
  int v44; // [rsp+90h] [rbp+18h] BYREF

  v44 = a3;
  v4 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v13 = *(unsigned int **)(a1 + 8);
  if ( v13 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v15 = *v13;
      v16 = v13 + 1;
      if ( v13 + 1 < v13 )
        goto LABEL_32;
      v13 = (unsigned int *)((char *)v16 + v15);
      if ( (unsigned int *)((char *)v16 + v15) < v16 )
        goto LABEL_32;
    }
    v17 = *v13;
    v18 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
LABEL_32:
      v8 = -1073741675;
      goto LABEL_9;
    }
    v7 = 0LL;
    if ( v17 )
      v7 = v18;
    v8 = 0;
    if ( v17 == 8 )
    {
      v4 = *(_QWORD *)v7;
      goto LABEL_9;
    }
    return (unsigned int)-1073741789;
  }
  v8 = -1073741811;
LABEL_9:
  if ( (v8 & 0x80000000) == 0 )
  {
    v44 = 0;
    v43 = 0;
    v41.LowPart = 0;
    DestinationString = 0LL;
    v9 = 1;
    RtlInitUnicodeString(&DestinationString, L"Security-SPP-GenuineLocalStatus");
    v10 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, int *, __int64, LARGE_INTEGER *))qword_140D2D498)(
            &DestinationString,
            &v44,
            &v43,
            4LL,
            &v41);
    v8 = v10;
    if ( v10 != -1073741772 )
    {
      if ( v10 < 0 )
        return v8;
      if ( v44 != 4 || !v43 )
        v9 = 0;
      if ( v9 )
        KeResetEvent(&stru_140C13E80);
    }
    dword_140D2D1C4 = 1;
    do
    {
      v11 = KeWaitForSingleObject(&stru_140C13E80, UserRequest, 1, 1u, 0LL);
      v12 = v11;
    }
    while ( v11 == 257 );
    if ( v11 >= 0 && v11 != 192 )
    {
      do
      {
        v19 = KeWaitForSingleObject(&stru_140C13EA0, UserRequest, 1, 1u, 0LL);
        v12 = v19;
      }
      while ( v19 == 257 );
      if ( v19 >= 0 && v19 != 192 && v19 != 258 )
        KeReleaseMutex(&stru_140C13EA0, 0);
    }
    v20 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC8 )
      return (unsigned int)-1073741675;
    v21 = *(_DWORD *)(a2 + 16) + 60;
    if ( v21 < *(_DWORD *)(a2 + 16) + 56 )
      return (unsigned int)-1073741675;
    v8 = v21 + v20 < v21 ? 0xC0000095 : 0;
    if ( v21 + v20 >= v21 )
    {
      *(_DWORD *)(a4 + 4) = 28;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1CuLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
      v24 = v12 | 0x10000000;
      if ( PoolWithTag + 1 < PoolWithTag )
        return (unsigned int)-1073741675;
      if ( PoolWithTag + 2 <= (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
      {
        *PoolWithTag = 4;
        PoolWithTag[1] = v24;
        v25 = ++*(_DWORD *)a4;
        v26 = *(_QWORD *)(a4 + 8);
        v27 = -1;
        if ( !v26 )
        {
          v28 = *(_DWORD *)(a4 + 4);
          v29 = -1;
          v30 = v28 + 12;
          if ( v28 + 12 >= v28 )
            v29 = v28 + 12;
          v8 = v30 < v28 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v29;
          if ( v30 >= v28 )
          {
            *(_DWORD *)a4 = v25 + 1;
LABEL_55:
            v31 = *(_QWORD *)(a4 + 8);
            v32 = dword_140D2D064;
            if ( !v31 )
            {
              v33 = *(_DWORD *)(a4 + 4);
              v34 = v33 + 8;
              if ( v33 + 8 >= v33 )
                v27 = v33 + 8;
              v8 = v34 < v33 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v27;
              if ( v34 >= v33 )
              {
                ++*(_DWORD *)a4;
                return 0;
              }
              return v8;
            }
            v38 = 0;
            v39 = *(_DWORD **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v40 = *v39 + 4;
                if ( *v39 >= 0xFFFFFFFC || (_DWORD *)((char *)v39 + v40) < v39 )
                  break;
                ++v38;
                v39 = (_DWORD *)((char *)v39 + v40);
                if ( v38 >= *(_DWORD *)a4 )
                  goto LABEL_72;
              }
            }
            else
            {
LABEL_72:
              if ( v39 + 1 >= v39 )
              {
                v8 = 0;
                if ( (unsigned __int64)(v39 + 2) <= v31 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v39 = 4;
                  v39[1] = v32;
                  ++*(_DWORD *)a4;
                  return v8;
                }
                return (unsigned int)-1073741789;
              }
            }
            return (unsigned int)-1073741675;
          }
LABEL_22:
          if ( (v8 & 0x80000000) != 0 )
            return v8;
          goto LABEL_55;
        }
        v35 = 0;
        v36 = *(_QWORD *)(a4 + 8);
        if ( v25 )
        {
          while ( 1 )
          {
            v37 = *(_DWORD *)v36 + 4;
            if ( *(_DWORD *)v36 >= 0xFFFFFFFC )
              break;
            if ( v36 + v37 < v36 )
              return (unsigned int)-1073741675;
            ++v35;
            v36 += v37;
            if ( v35 >= v25 )
              goto LABEL_64;
          }
          v8 = -1073741675;
          goto LABEL_22;
        }
LABEL_64:
        if ( v36 + 4 < v36 )
          return (unsigned int)-1073741675;
        v8 = 0;
        if ( v36 + 12 <= v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v36 = 8;
          *(_QWORD *)(v36 + 4) = v4;
          ++*(_DWORD *)a4;
          goto LABEL_22;
        }
      }
      return (unsigned int)-1073741789;
    }
  }
  return v8;
}
