__int64 __fastcall ExpPartitionCreatePoolInternal(__int64 a1, int a2, int a3, unsigned __int16 *a4, int a5)
{
  __int64 Pool2; // rbx
  __int64 v10; // r15
  __int64 v11; // r8
  int v12; // r9d
  int v13; // esi
  int WorkerThread; // edi

  Pool2 = ExAllocatePool2(64LL, 736LL, 1817671749LL);
  if ( Pool2 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *a4);
    ExpWorkQueueInitialize(Pool2, a2, a3, a1, (__int64)a4, a5);
    v13 = 0;
    if ( 2 * *(_DWORD *)(Pool2 + 716) > 0 )
    {
      while ( 1 )
      {
        WorkerThread = ExpCreateWorkerThread((_QWORD *)Pool2, (int)v10 + 276, v11, v12);
        if ( WorkerThread < 0 )
          break;
        if ( ++v13 >= (2 * *(_DWORD *)(Pool2 + 716)) >> 1 )
          goto LABEL_3;
      }
      ExpWorkQueueDestroy(Pool2);
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
LABEL_3:
      WorkerThread = 0;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *a4) + 8LL * a5) = Pool2;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WorkerThread;
}
