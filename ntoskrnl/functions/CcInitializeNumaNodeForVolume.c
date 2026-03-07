char __fastcall CcInitializeNumaNodeForVolume(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  char v7; // di
  _QWORD *v8; // r14
  _DWORD *v9; // r15
  _DWORD *v10; // r12
  _DWORD *v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // ebp
  __int64 PoolWithTagFromNode; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rax
  unsigned int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rax
  _QWORD *v28; // rcx

  v7 = 0;
  memset(a2, 0, 0x1B8uLL);
  *a2 = 28836598;
  v8 = a2 + 8;
  a2[1] = 2;
  v9 = a2 + 14;
  *((_QWORD *)a2 + 2) = a1;
  v10 = a2 + 34;
  v11 = a2 + 40;
  *((_QWORD *)a2 + 1) = *(_QWORD *)(a1 + 32);
  *((_QWORD *)a2 + 10) = a2 + 18;
  *((_QWORD *)a2 + 9) = a2 + 18;
  *((_QWORD *)a2 + 12) = a2 + 22;
  *((_QWORD *)a2 + 11) = a2 + 22;
  *((_QWORD *)a2 + 14) = a2 + 26;
  *((_QWORD *)a2 + 13) = a2 + 26;
  *((_QWORD *)a2 + 16) = a2 + 30;
  *((_QWORD *)a2 + 15) = a2 + 30;
  *((_QWORD *)a2 + 37) = a2 + 72;
  *((_QWORD *)a2 + 36) = a2 + 72;
  *((_QWORD *)a2 + 51) = a2 + 100;
  *((_QWORD *)a2 + 50) = a2 + 100;
  *((_QWORD *)a2 + 40) = a2 + 78;
  *((_QWORD *)a2 + 39) = a2 + 78;
  *((_QWORD *)a2 + 54) = a2 + 106;
  *((_QWORD *)a2 + 53) = a2 + 106;
  v12 = a4 | 0x80000000;
  a2[6] = a4;
  *((_QWORD *)a2 + 5) = a2 + 8;
  v13 = 0;
  *((_QWORD *)a2 + 4) = a2 + 8;
  *((_QWORD *)a2 + 8) = a2 + 14;
  *((_QWORD *)a2 + 7) = a2 + 14;
  *((_QWORD *)a2 + 18) = a2 + 34;
  *((_QWORD *)a2 + 17) = a2 + 34;
  *((_QWORD *)a2 + 21) = a2 + 40;
  *((_QWORD *)a2 + 20) = a2 + 40;
  if ( *(_DWORD *)(a1 + 776) )
  {
    while ( 1 )
    {
      PoolWithTagFromNode = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, v12, 0);
      v15 = PoolWithTagFromNode;
      if ( !PoolWithTagFromNode )
        break;
      *(_DWORD *)(PoolWithTagFromNode + 32) = 1;
      v16 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(v15 + 36) = -1;
      *(_QWORD *)(v15 + 56) = v16;
      *(_QWORD *)(v15 + 64) = a1;
      *(_QWORD *)(v15 + 72) = a2;
      *(_DWORD *)(v15 + 40) = v13;
      *(_QWORD *)(v15 + 16) = CcWorkerThread;
      *(_QWORD *)(v15 + 24) = v15;
      *(_QWORD *)v15 = 0LL;
      v17 = (__int64 *)*((_QWORD *)a2 + 8);
      if ( (_DWORD *)*v17 != v9 )
        goto FatalListEntryError_58;
      *(_QWORD *)v15 = v9;
      ++v13;
      *(_QWORD *)(v15 + 8) = v17;
      *v17 = v15;
      v12 = a4 | 0x80000000;
      *((_QWORD *)a2 + 8) = v15;
      if ( v13 >= *(_DWORD *)(a1 + 776) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v18 = 0;
    if ( *(_DWORD *)(a1 + 800) )
    {
      while ( 1 )
      {
        v19 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, v12, 0);
        v20 = v19;
        if ( !v19 )
          break;
        *(_DWORD *)(v19 + 32) = 2;
        v21 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(v20 + 36) = -1;
        *(_QWORD *)(v20 + 56) = v21;
        *(_QWORD *)(v20 + 64) = a1;
        *(_QWORD *)(v20 + 72) = a2;
        *(_DWORD *)(v20 + 40) = v18;
        *(_QWORD *)(v20 + 16) = CcWorkerThread;
        *(_QWORD *)(v20 + 24) = v20;
        *(_QWORD *)v20 = 0LL;
        v22 = (__int64 *)*((_QWORD *)a2 + 18);
        if ( (_DWORD *)*v22 != v10 )
          goto FatalListEntryError_58;
        *(_QWORD *)v20 = v10;
        ++v18;
        *(_QWORD *)(v20 + 8) = v22;
        *v22 = v20;
        v12 = a4 | 0x80000000;
        *((_QWORD *)a2 + 18) = v20;
        if ( v18 >= *(_DWORD *)(a1 + 800) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v23 = 0;
      if ( *(_DWORD *)(a1 + 804) )
      {
        while ( 1 )
        {
          v24 = ExpAllocatePoolWithTagFromNode(NonPagedPoolNx, 0x50uLL, 1901552451LL, a4 | 0x80000000, 0);
          v25 = v24;
          if ( !v24 )
            break;
          *(_DWORD *)(v24 + 32) = 5;
          v26 = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(v25 + 36) = -1;
          *(_QWORD *)(v25 + 56) = v26;
          *(_QWORD *)(v25 + 64) = a1;
          *(_QWORD *)(v25 + 72) = a2;
          *(_DWORD *)(v25 + 40) = v23;
          *(_QWORD *)(v25 + 16) = CcCachemapUninitWorkerThread;
          *(_QWORD *)(v25 + 24) = v25;
          *(_QWORD *)v25 = 0LL;
          v27 = (__int64 *)*((_QWORD *)a2 + 21);
          if ( (_DWORD *)*v27 != v11 )
            goto FatalListEntryError_58;
          *(_QWORD *)v25 = v11;
          ++v23;
          *(_QWORD *)(v25 + 8) = v27;
          *v27 = v25;
          *((_QWORD *)a2 + 21) = v25;
          if ( v23 >= *(_DWORD *)(a1 + 804) )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v28 = *(_QWORD **)(a1 + 56);
        if ( *v28 != a1 + 48 )
FatalListEntryError_58:
          __fastfail(3u);
        *((_QWORD *)a2 + 5) = v28;
        *v8 = a1 + 48;
        v7 = 1;
        *v28 = v8;
        *(_QWORD *)(a1 + 56) = v8;
        *(_QWORD *)(a1 + 8LL * a4 + 64) = a2;
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitializeNumaNodeForVolume: Initialized NumaNode=%p(id:%lu %% #nodes:%lu), PrivateVCM=%p(vid:%2lx)\n",
          a2,
          a4,
          CcNumberNumaNodes,
          (const void *)a1,
          *(_DWORD *)(a1 + 24));
      }
    }
  }
  return v7;
}
