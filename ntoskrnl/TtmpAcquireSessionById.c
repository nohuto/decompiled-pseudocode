__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  struct _KTHREAD *CurrentThread; // rax

  v2 = 0;
  v3 = a2;
  *a1 = 0LL;
  if ( TtmIsEnabled((__int64)a1, a2) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    if ( TtmpSession && *(_DWORD *)TtmpSession == v3 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById", 1697LL, 0xFFFFFFFFLL, 3221226581LL);
      ExReleaseResourceLite(&TtmpSessionLock);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 1686LL, 0xFFFFFFFFLL, 3221225659LL);
  }
  return v2;
}
