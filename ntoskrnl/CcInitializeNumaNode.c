char __fastcall CcInitializeNumaNode(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  char v7; // bl
  _QWORD *v8; // r15
  _DWORD *v9; // r14
  _DWORD *v10; // r12
  _DWORD *v11; // r13
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 PoolWithTagFromNode; // rax
  __int64 *v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 *v18; // rcx
  unsigned int v19; // ebp
  __int64 v20; // rax
  __int64 *v21; // rcx
  _QWORD *v22; // rcx
  int v24; // [rsp+28h] [rbp-50h]

  v7 = 0;
  memset(a2, 0, 0x1B8uLL);
  a2[6] = a4;
  *((_QWORD *)a2 + 10) = a2 + 18;
  v8 = a2 + 8;
  *((_QWORD *)a2 + 9) = a2 + 18;
  v9 = a2 + 14;
  *a2 = 28836598;
  *((_QWORD *)a2 + 12) = a2 + 22;
  v10 = a2 + 34;
  *((_QWORD *)a2 + 11) = a2 + 22;
  v11 = a2 + 40;
  a2[1] = 1;
  *((_QWORD *)a2 + 14) = a2 + 26;
  v12 = 0;
  *((_QWORD *)a2 + 13) = a2 + 26;
  *((_QWORD *)a2 + 16) = a2 + 30;
  *((_QWORD *)a2 + 15) = a2 + 30;
  v13 = a4 | 0x80000000;
  *((_QWORD *)a2 + 1) = a1;
  *((_QWORD *)a2 + 5) = a2 + 8;
  *((_QWORD *)a2 + 4) = a2 + 8;
  *((_QWORD *)a2 + 8) = a2 + 14;
  *((_QWORD *)a2 + 7) = a2 + 14;
  *((_QWORD *)a2 + 18) = a2 + 34;
  *((_QWORD *)a2 + 17) = a2 + 34;
  *((_QWORD *)a2 + 21) = a2 + 40;
  *((_QWORD *)a2 + 20) = a2 + 40;
  if ( *(_DWORD *)(a1 + 840) )
  {
    while ( 1 )
    {
      PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, v13, 0);
      if ( !PoolWithTagFromNode )
        break;
      *(_DWORD *)(PoolWithTagFromNode + 36) = -1;
      *(_DWORD *)(PoolWithTagFromNode + 32) = 1;
      *(_QWORD *)(PoolWithTagFromNode + 56) = a1;
      *(_QWORD *)(PoolWithTagFromNode + 64) = 0LL;
      *(_QWORD *)(PoolWithTagFromNode + 72) = a2;
      *(_DWORD *)(PoolWithTagFromNode + 40) = v12;
      *(_QWORD *)(PoolWithTagFromNode + 16) = CcWorkerThread;
      *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
      *(_QWORD *)PoolWithTagFromNode = 0LL;
      v15 = (__int64 *)*((_QWORD *)a2 + 8);
      if ( (_DWORD *)*v15 != v9 )
        goto LABEL_14;
      *(_QWORD *)PoolWithTagFromNode = v9;
      ++v12;
      *(_QWORD *)(PoolWithTagFromNode + 8) = v15;
      *v15 = PoolWithTagFromNode;
      *((_QWORD *)a2 + 8) = PoolWithTagFromNode;
      v13 = a4 | 0x80000000;
      if ( v12 >= *(_DWORD *)(a1 + 840) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v16 = 0;
    if ( *(_DWORD *)(a1 + 864) )
    {
      while ( 1 )
      {
        v17 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, v13, 0);
        if ( !v17 )
          break;
        *(_DWORD *)(v17 + 36) = -1;
        *(_DWORD *)(v17 + 32) = 2;
        *(_QWORD *)(v17 + 56) = a1;
        *(_QWORD *)(v17 + 64) = 0LL;
        *(_QWORD *)(v17 + 72) = a2;
        *(_DWORD *)(v17 + 40) = v16;
        *(_QWORD *)(v17 + 16) = CcWorkerThread;
        *(_QWORD *)(v17 + 24) = v17;
        *(_QWORD *)v17 = 0LL;
        v18 = (__int64 *)*((_QWORD *)a2 + 18);
        if ( (_DWORD *)*v18 != v10 )
          goto LABEL_14;
        *(_QWORD *)v17 = v10;
        ++v16;
        *(_QWORD *)(v17 + 8) = v18;
        *v18 = v17;
        *((_QWORD *)a2 + 18) = v17;
        v13 = a4 | 0x80000000;
        if ( v16 >= *(_DWORD *)(a1 + 864) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v19 = 0;
      if ( *(_DWORD *)(a1 + 868) )
      {
        while ( 1 )
        {
          v20 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, a4 | 0x80000000, 0);
          if ( !v20 )
            break;
          *(_DWORD *)(v20 + 36) = -1;
          *(_DWORD *)(v20 + 32) = 5;
          *(_QWORD *)(v20 + 56) = a1;
          *(_QWORD *)(v20 + 64) = 0LL;
          *(_QWORD *)(v20 + 72) = a2;
          *(_DWORD *)(v20 + 40) = v19;
          *(_QWORD *)(v20 + 16) = CcCachemapUninitWorkerThread;
          *(_QWORD *)(v20 + 24) = v20;
          *(_QWORD *)v20 = 0LL;
          v21 = (__int64 *)*((_QWORD *)a2 + 21);
          if ( (_DWORD *)*v21 != v11 )
            goto LABEL_14;
          *(_QWORD *)v20 = v11;
          ++v19;
          *(_QWORD *)(v20 + 8) = v21;
          *v21 = v20;
          *((_QWORD *)a2 + 21) = v20;
          if ( v19 >= *(_DWORD *)(a1 + 868) )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v22 = *(_QWORD **)(a1 + 24);
        if ( *v22 != a1 + 16 )
LABEL_14:
          __fastfail(3u);
        *((_QWORD *)a2 + 5) = v22;
        *v8 = a1 + 16;
        v7 = 1;
        *v22 = v8;
        v24 = CcNumberNumaNodes;
        *(_QWORD *)(a1 + 24) = v8;
        *(_QWORD *)(a1 + 8LL * a4 + 112) = a2;
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitializeNumaNode: Initialized NumaNode=%p(id:%lu %% #nodes:%lu), Partition=%p \n",
          a2,
          a4,
          v24,
          (const void *)a1);
      }
    }
  }
  return v7;
}
