__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v8; // edi
  __int64 Pool2; // rbx
  int v10; // edx

  v8 = 0;
  Pool2 = ExAllocatePool2(64LL, 64LL, 1834249587LL);
  if ( Pool2 )
  {
    if ( SmKmStoreReference(a1, *(_DWORD *)(a2 + 6016)) )
    {
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 48) = 0LL;
      *(_QWORD *)(Pool2 + 56) = 0LL;
      *(_QWORD *)(Pool2 + 16) = SmKmStoreTerminateWorker;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 40) = a2 + 6216;
      *(_QWORD *)(Pool2 + 32) = a1;
      *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a2 + 6016);
      v10 = *(_DWORD *)(a1 + 1856) & 1;
      *(_DWORD *)(Pool2 + 56) = a3;
      *(_DWORD *)(Pool2 + 52) = v10;
      *(_DWORD *)(Pool2 + 60) = a4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, CriticalWorkQueue);
    }
    else
    {
      v8 = -1073741431;
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
