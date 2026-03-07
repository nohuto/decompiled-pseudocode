__int64 __fastcall ACPIBuildRunMethodRequest(
        __int64 a1,
        void (__fastcall *a2)(__int64, __int64, _QWORD),
        __int64 a3,
        int a4,
        int a5,
        char a6)
{
  _QWORD *v10; // rdi
  __int64 **v11; // rbx
  unsigned int v12; // ebx
  __int64 *v14; // rax

  v10 = 0LL;
  v11 = (__int64 **)ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v11 )
  {
    v12 = -1073741670;
    if ( !a2 )
      return v12;
LABEL_3:
    a2(a1, a3, v12);
    return v12;
  }
  if ( a2 )
  {
    v10 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
    if ( !v10 )
    {
      ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
      v12 = -1073741670;
      goto LABEL_3;
    }
  }
  if ( !*(_DWORD *)(a1 + 732) )
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v11);
    v12 = -1073741130;
    if ( !a2 )
      return v12;
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v10);
    goto LABEL_3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
  memset(v11, 0, 0x88uLL);
  *((_DWORD *)v11 + 4) = 1599293264;
  v11[16] = &AcpiBuildRunMethodList;
  *((_DWORD *)v11 + 21) = a5;
  *((_DWORD *)v11 + 6) = 3;
  v11[5] = (__int64 *)a1;
  *((_DWORD *)v11 + 20) = a4;
  *((_DWORD *)v11 + 5) = 4108;
  if ( a2 )
  {
    memset(v10, 0, 0x88uLL);
    *((_DWORD *)v10 + 4) = 1599293264;
    v10[16] = &AcpiBuildSynchronizationList;
    v10[10] = &AcpiBuildRunMethodList;
    *((_DWORD *)v10 + 6) = 3;
    v10[8] = a2;
    v10[9] = a3;
    v10[5] = a1;
    *((_DWORD *)v10 + 22) = a4;
    *((_DWORD *)v10 + 5) = 4106;
    *((_DWORD *)v10 + 23) = 1;
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v14 = (__int64 *)qword_1C006F4B8;
  if ( *(__int64 **)qword_1C006F4B8 != &AcpiBuildQueueList )
    goto LABEL_22;
  *v11 = &AcpiBuildQueueList;
  v11[1] = v14;
  *v14 = (__int64)v11;
  qword_1C006F4B8 = (__int64)v11;
  if ( a2 )
  {
    if ( *v11 == &AcpiBuildQueueList )
    {
      *v10 = &AcpiBuildQueueList;
      v10[1] = v11;
      *v11 = v10;
      qword_1C006F4B8 = (__int64)v10;
      goto LABEL_19;
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_19:
  if ( a6 )
    ACPIBuildScheduleDpc();
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  return 259LL;
}
