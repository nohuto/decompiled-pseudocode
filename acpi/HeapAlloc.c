__int64 __fastcall HeapAlloc(__int64 a1, int a2, unsigned int a3)
{
  __int64 *v3; // rbx
  __int64 v4; // r15
  int v7; // esi
  unsigned int v8; // esi
  KIRQL v9; // al
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 *i; // rax
  __int64 *v15; // rdx
  __int64 **v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( a3 + 16 < a3 )
    return (unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL);
  if ( a3 + 16 >= 0x20 )
  {
    v7 = a3 + 23;
    if ( a3 + 23 < a3 + 16 )
      return (unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL);
  }
  else
  {
    v7 = 39;
  }
  v8 = v7 & 0xFFFFFFF8;
  v9 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v22 = a1;
  v10 = a1;
  byte_1C00702F0 = v9;
  if ( a1 )
  {
    v11 = a1;
    v12 = a1;
    while ( 2 )
    {
      v4 = v11;
      v13 = (__int64 *)(v12 + 40);
      for ( i = *(__int64 **)(v12 + 40); ; i = (__int64 *)*i )
      {
        v3 = i - 2;
        if ( v13 == i )
        {
          v3 = 0LL;
          goto LABEL_12;
        }
        if ( v8 <= *((_DWORD *)v3 + 1) )
          break;
      }
      if ( i != (__int64 *)16 )
      {
        v15 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i || (v16 = (__int64 **)v3[3], *v16 != i) )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = (__int64)v16;
        v17 = v8;
        if ( *((unsigned int *)v3 + 1) >= (unsigned __int64)v8 + 32 )
        {
          v18 = (__int64)v3 + v8;
          *(_DWORD *)v18 = 0;
          v19 = *((_DWORD *)v3 + 1) - v8;
          *(_QWORD *)(v18 + 8) = v10;
          *(_DWORD *)(v18 + 4) = v19;
          *((_DWORD *)v3 + 1) = v8;
          HeapInsertFreeList(v10);
        }
        goto LABEL_36;
      }
LABEL_12:
      if ( v8 <= *(_DWORD *)(v10 + 8) - *(_DWORD *)(v10 + 32) )
      {
        v3 = *(__int64 **)(v10 + 32);
        v17 = v8;
        *(_QWORD *)(v10 + 32) = (char *)v3 + v8;
        *((_DWORD *)v3 + 1) = v8;
        if ( v3 )
          goto LABEL_36;
      }
      else
      {
        v10 = *(_QWORD *)(v10 + 24);
        v22 = v10;
        v12 = v10;
        v11 = v10;
        if ( v10 )
          continue;
      }
      break;
    }
  }
  if ( a1 != gpheapGlobal )
  {
    v20 = NewLocalHeap(&v22);
    goto LABEL_31;
  }
  if ( v8 + 56 <= (unsigned int)gdwGlobalHeapBlkSize )
  {
LABEL_24:
    v20 = NewGlobalHeap(&v22);
LABEL_31:
    v10 = v22;
    goto LABEL_32;
  }
  if ( (unsigned int)gdwGlobalHeapBlkSize * (v8 / (unsigned int)gdwGlobalHeapBlkSize + 1) <= 0x800000 )
  {
    LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v8 / (unsigned int)gdwGlobalHeapBlkSize + 1);
    goto LABEL_24;
  }
  if ( v8 <= 0x800000 )
  {
    LODWORD(gdwGlobalHeapBlkSize) = v8;
    goto LABEL_24;
  }
  v10 = 0LL;
  v20 = -1073741670;
LABEL_32:
  v17 = v8;
  if ( v20 )
  {
    v10 = 0LL;
  }
  else
  {
    *(_QWORD *)(v10 + 16) = a1;
    *(_QWORD *)(v4 + 24) = v10;
    v3 = *(__int64 **)(v10 + 32);
    *(_QWORD *)(v10 + 32) = (char *)v3 + v8;
    *((_DWORD *)v3 + 1) = v8;
  }
  if ( v3 )
  {
LABEL_36:
    *(_DWORD *)v3 = a2;
    v3[1] = v10;
    memset(v3 + 2, 0, v17 - 16);
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C00702F0);
  return (unsigned __int64)(v3 + 2) & -(__int64)(v3 != 0LL);
}
