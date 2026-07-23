/*
 * XREFs of sub_14096221C @ 0x14096221C
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     KeQueryTimeIncrement @ 0x1402F0CE0 (KeQueryTimeIncrement.c)
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14096221C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v7; // r8d
  unsigned int *v8; // rax
  unsigned int i; // ecx
  __int64 v10; // r8
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  NTSTATUS v15; // eax
  __int64 v16; // rbx
  ULONG TimeIncrement; // eax
  int v18; // edx
  unsigned int v19; // ecx
  _DWORD *PoolWithTag; // rax
  unsigned int v21; // r9d
  __int64 v22; // r10
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdx
  unsigned int v28; // eax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp+8h]

  v4 = 0LL;
  v31 = 0LL;
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
      v31 = *(_QWORD *)v14;
      goto LABEL_19;
    }
    return (unsigned int)-1073741789;
  }
  v7 = -1073741811;
LABEL_19:
  if ( (v7 & 0x80000000) == 0 )
  {
    Timeout.QuadPart = -270000000LL;
    v15 = KeWaitForSingleObject(&stru_140C13EA0, UserRequest, 1, 0, &Timeout);
    if ( v15 >= 0 && v15 != 192 && v15 != 258 )
    {
      if ( stru_140C13E80.Header.SignalState || !dword_140D2D1BC )
      {
        v16 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        dword_140D2D1BC = 1;
        qword_140D2D158 = v16 * TimeIncrement / 10000;
        KeResetEvent(&stru_140C13E80);
        v4 = v31;
      }
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
        if ( PoolWithTag + 1 >= PoolWithTag )
        {
          if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
            return (unsigned int)-1073741789;
          *PoolWithTag = 4;
          PoolWithTag[1] = 0x10000000;
          v21 = ++*(_DWORD *)a4;
          v22 = *(_QWORD *)(a4 + 8);
          if ( !v22 )
          {
            v23 = *(_DWORD *)(a4 + 4);
            v24 = -1;
            v25 = v23 + 12;
            if ( v23 + 12 >= v23 )
              v24 = v23 + 12;
            v7 = v25 < v23 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v24;
            if ( v25 >= v23 )
            {
              v7 = 0;
              *(_DWORD *)a4 = v21 + 1;
            }
            return v7;
          }
          v26 = 0;
          v27 = *(_QWORD *)(a4 + 8);
          if ( v21 )
          {
            while ( 1 )
            {
              v28 = *(_DWORD *)v27 + 4;
              if ( *(_DWORD *)v27 >= 0xFFFFFFFC || v27 + v28 < v27 )
                break;
              ++v26;
              v27 += v28;
              if ( v26 >= v21 )
                goto LABEL_43;
            }
          }
          else
          {
LABEL_43:
            if ( v27 + 4 >= v27 )
            {
              v7 = 0;
              if ( v27 + 12 <= v22 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v27 = 8;
                *(_QWORD *)(v27 + 4) = v4;
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
