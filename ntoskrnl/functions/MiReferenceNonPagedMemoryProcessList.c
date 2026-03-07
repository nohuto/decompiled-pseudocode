LONG_PTR __fastcall MiReferenceNonPagedMemoryProcessList(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  LONG_PTR result; // rax
  _DWORD *v5; // r14
  void *v6; // rcx
  __int64 v7; // r12
  char *Pool; // rax
  char *v9; // r15
  __int64 v10; // r8
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  unsigned __int64 v19; // r15
  char *v20; // rax
  char *v21; // r14
  __int64 v22; // r8
  PVOID Object[16]; // [rsp+20h] [rbp-59h] BYREF

  memset(Object, 0, sizeof(Object));
  v2 = 0LL;
  v3 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  result = (LONG_PTR)PsGetNextProcess(0LL);
  v5 = (_DWORD *)result;
  if ( result )
  {
    do
    {
      if ( MiGetProcessPartition((__int64)v5) == *(_QWORD *)(a1 + 48) )
      {
        if ( v5[535] )
        {
          ObfReferenceObject(v6);
          Object[v3++] = v5;
          if ( v3 == 16 )
          {
            v7 = *(_QWORD *)(a1 + 64) + 16LL;
            Pool = (char *)MiAllocatePool(64, 8 * v7, 0x6363454Du);
            v9 = Pool;
            if ( !Pool )
            {
              do
                result = ObfDereferenceObject(Object[v2++]);
              while ( v2 < 0x10 );
              return result;
            }
            v10 = *(_QWORD *)(a1 + 64);
            if ( v10 )
            {
              memmove(Pool, *(const void **)(a1 + 72), 8 * v10);
              ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
            }
            v11 = *(_QWORD *)(a1 + 64);
            v3 = 0LL;
            v12 = *(_OWORD *)&Object[2];
            *(_OWORD *)&v9[8 * v11] = *(_OWORD *)Object;
            v13 = *(_OWORD *)&Object[4];
            *(_OWORD *)&v9[8 * v11 + 16] = v12;
            v14 = *(_OWORD *)&Object[6];
            *(_OWORD *)&v9[8 * v11 + 32] = v13;
            v15 = *(_OWORD *)&Object[8];
            *(_OWORD *)&v9[8 * v11 + 48] = v14;
            v16 = *(_OWORD *)&Object[10];
            *(_OWORD *)&v9[8 * v11 + 64] = v15;
            v17 = *(_OWORD *)&Object[12];
            *(_OWORD *)&v9[8 * v11 + 80] = v16;
            v18 = *(_OWORD *)&Object[14];
            *(_OWORD *)&v9[8 * v11 + 96] = v17;
            *(_OWORD *)&v9[8 * v11 + 112] = v18;
            *(_QWORD *)(a1 + 64) = v7;
            *(_QWORD *)(a1 + 72) = v9;
          }
        }
      }
      result = (LONG_PTR)PsGetNextProcess(v5);
      v5 = (_DWORD *)result;
    }
    while ( result );
    if ( v3 )
    {
      v19 = v3 + *(_QWORD *)(a1 + 64);
      v20 = (char *)MiAllocatePool(64, 8 * v19, 0x6363454Du);
      v21 = v20;
      if ( v20 )
      {
        v22 = *(_QWORD *)(a1 + 64);
        if ( v22 )
        {
          memmove(v20, *(const void **)(a1 + 72), 8 * v22);
          ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
        }
        result = (LONG_PTR)memmove(&v21[8 * *(_QWORD *)(a1 + 64)], Object, 8 * v3);
        *(_QWORD *)(a1 + 64) = v19;
        *(_QWORD *)(a1 + 72) = v21;
      }
      else
      {
        do
          result = ObfDereferenceObject(Object[v2++]);
        while ( v2 < v3 );
      }
    }
  }
  return result;
}
