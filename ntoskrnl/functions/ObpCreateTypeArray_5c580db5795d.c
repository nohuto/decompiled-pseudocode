unsigned int *__fastcall ObpCreateTypeArray(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // r15
  _QWORD *v4; // rax
  unsigned int *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int *Pool2; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  struct _KTHREAD *v11; // rax
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)(a1 + 23);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 23), 0LL);
  v4 = *a1;
  v5 = 0LL;
  v6 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v4 = (_QWORD *)*v4;
      v7 = v6++;
    }
    while ( v4 != a1 );
    if ( v6 )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8 * v7 + 16, 1916887631LL);
      v5 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = v6;
        v9 = 0LL;
        v10 = *a1;
        while ( v10 != a1 )
        {
          *(_QWORD *)&v5[2 * v9 + 2] = v10;
          if ( !ObReferenceObjectSafe((__int64)(v10 + 10)) )
            *(_QWORD *)&v5[2 * v9 + 2] = 0LL;
          v10 = (_QWORD *)*v10;
          v9 = (unsigned int)(v9 + 1);
        }
      }
    }
  }
  ExReleasePushLockEx(v2, 0LL);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
