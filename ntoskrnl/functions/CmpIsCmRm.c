bool __fastcall CmpIsCmRm(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // bl
  __int64 NextElement; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  while ( 1 )
  {
    NextElement = CmListGetNextElement(&CmpRmListHead, &v6, 0LL);
    if ( !NextElement )
      break;
    if ( (_QWORD *)NextElement == a1 )
    {
      if ( a1[6] && a1[7] && a1[4] )
        v3 = a1[5] != 0LL;
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
