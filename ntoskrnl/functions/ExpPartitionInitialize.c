__int64 __fastcall ExpPartitionInitialize(__int64 a1)
{
  _QWORD *Pool2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int16 v7; // si
  __int64 v8; // r14
  __int64 v9; // rcx
  int PoolInternal; // ebx
  __int64 result; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1817671749LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = 8 * (unsigned int)(unsigned __int16)KeNumberNodes;
    *Pool2 = a1;
    v5 = ExAllocatePool2(64LL, v4, 1817671749LL);
    v3[1] = v5;
    if ( v5 )
    {
      v6 = ExAllocatePool2(64LL, 8 * (unsigned int)(unsigned __int16)KeNumberNodes, 1817671749LL);
      v3[2] = v6;
      if ( v6 )
      {
        v7 = 0;
        if ( !KeNumberNodes )
        {
LABEL_12:
          *((_DWORD *)v3 + 6) = 252;
          result = 0LL;
          *(_QWORD *)(a1 + 16) = v3;
          return result;
        }
        while ( 1 )
        {
          v8 = 0LL;
          if ( (_UNKNOWN *)KeNodeBlock[v7] != (_UNKNOWN *)((char *)&KiNodeInit + 304 * v7) )
            v8 = KeNodeBlock[v7];
          *(_QWORD *)(v3[2] + 8LL * v7) = ExAllocatePool2(64LL, 280LL, 1817671749LL);
          v9 = *(_QWORD *)(v3[2] + 8LL * v7);
          if ( !v9 )
            break;
          ExpWorkQueueManagerInitialize(v9, v3, v8);
          *(_QWORD *)(v3[1] + 8LL * v7) = ExAllocatePool2(64LL, 64LL, 1817671749LL);
          if ( !*(_QWORD *)(v3[1] + 8LL * v7) )
            break;
          PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v8, 0);
          if ( PoolInternal < 0 )
            goto LABEL_13;
          PoolInternal = ExpPartitionCreatePoolInternal((_DWORD)v3, 0, ExpMaximumKernelWorkerThreads, v8, 1);
          if ( PoolInternal < 0 )
            goto LABEL_13;
          if ( ++v7 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_12;
        }
      }
    }
    PoolInternal = -1073741801;
LABEL_13:
    ExpPartitionDestroy(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)PoolInternal;
}
