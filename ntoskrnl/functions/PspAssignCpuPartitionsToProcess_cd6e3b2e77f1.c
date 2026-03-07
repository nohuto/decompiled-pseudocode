__int64 __fastcall PspAssignCpuPartitionsToProcess(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // rdi
  _QWORD *Pool2; // r14
  _QWORD *v9; // r15
  __int64 v10; // rax
  void *v11; // rbx
  __int64 v12; // r13
  __int64 v13; // r12
  int v14; // esi
  PVOID *v15; // r15

  v6 = 0LL;
  if ( a4 - 1 > 0x7FF )
    return (unsigned int)-1073741811;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * a4, 1349546832LL);
  v9 = Pool2;
  v10 = ExAllocatePool2(64LL, 8LL * a4, 1349546832LL);
  v11 = (void *)v10;
  if ( Pool2 && v10 )
  {
    if ( a4 )
    {
      v12 = a3 - (_QWORD)Pool2;
      v13 = v10 - (_QWORD)Pool2;
      while ( 1 )
      {
        v14 = PspReferenceCpuPartitionByHandle(*(_QWORD *)((char *)v9 + v12), (__int64)&Pool2[v6]);
        if ( v14 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        *(_QWORD *)((char *)v9 + v13) = *v9;
        ++v9;
        if ( (unsigned int)v6 >= a4 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v14 = KeAssignCpuPartitionsToProcess((__int64)v11, a4, a1, a5);
    }
    goto LABEL_10;
  }
  v14 = -1073741670;
  if ( Pool2 )
  {
LABEL_10:
    if ( (_DWORD)v6 )
    {
      v15 = (PVOID *)Pool2;
      do
      {
        if ( *v15 != PspSystemCpuPartition )
          ObfDereferenceObjectWithTag(*v15, 0x50707350u);
        ++v15;
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v14;
}
