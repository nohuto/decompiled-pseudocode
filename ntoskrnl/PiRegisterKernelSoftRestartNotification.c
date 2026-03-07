__int64 __fastcall PiRegisterKernelSoftRestartNotification(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v8; // ebx
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax

  if ( PnpKsrEnabled )
  {
    if ( !PnpKsrPrepared || PnpKsrIsHhrPrepare )
    {
      Pool2 = ExAllocatePool2(256LL, 88LL, 1634758224LL);
      v11 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        v8 = PnpInitializeNotifyEntry(Pool2, 4, a2, a3, a1, (__int64)&PnpKsrNotifyLock);
        if ( v8 < 0 || (v8 = PnpDeferNotification((__int64)v11), v8 < 0) )
        {
          ExFreePoolWithTag(v11, 0x61706E50u);
        }
        else
        {
          ExAcquireFastMutex(&PnpKsrNotifyLock);
          v12 = (_QWORD *)qword_140C5AC78;
          if ( *(PVOID **)qword_140C5AC78 != &PnpKsrNotifyList )
            __fastfail(3u);
          *v11 = &PnpKsrNotifyList;
          v11[1] = v12;
          *v12 = v11;
          qword_140C5AC78 = (__int64)v11;
          ExReleaseFastMutex(&PnpKsrNotifyLock);
          *a4 = v11;
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741058;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
