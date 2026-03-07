__int64 __fastcall NtGetCompleteWnfStateSubscription(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        volatile void *Address,
        SIZE_T Length)
{
  struct _KTHREAD *CurrentThread; // rax
  int v8; // ebx
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = -1073741811;
  v9 = KeGetCurrentThread()->ApcState.Process[1].EndPadding[0];
  if ( v9 )
  {
    if ( !a1 || !a2 )
      goto LABEL_11;
    if ( a3 && (!a4 || a4 == -1073741267) )
    {
      v10 = 0x7FFFFFFF0000LL;
      v11 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v11 = a1;
      v13 = *(_QWORD *)v11;
      if ( a2 < 0x7FFFFFFF0000LL )
        v10 = a2;
      v8 = ExpWnfCompleteThreadSubscriptions(v9, (unsigned int)&v13, *(_QWORD *)v10, a3, a4);
      if ( v8 >= 0 )
      {
LABEL_11:
        if ( (_DWORD)Length )
        {
          if ( (unsigned int)Length < 0x1030 )
          {
            v8 = -1073741789;
          }
          else
          {
            ProbeForWrite(Address, (unsigned int)Length, 8u);
            v8 = ExpWnfDeliverThreadNotifications(v9, Address, (unsigned int)Length);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
