/*
 * XREFs of PiPnpRtlCacheObjectBaseKey @ 0x1406D0C78
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406CFC70 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiPnpRtlObjectEventCreate @ 0x1406CEB28 (PiPnpRtlObjectEventCreate.c)
 *     _PnpOpenObjectRegKey @ 0x1406CECB8 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1406D0D80 (PiPnpRtlGetCurrentOperation.c)
 */

__int64 __fastcall PiPnpRtlCacheObjectBaseKey(__int64 a1, __int64 a2, signed int a3, _QWORD *a4)
{
  int CurrentOperation; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  char *v13; // [rsp+48h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  if ( a3 >= 7 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    CurrentOperation = PiPnpRtlGetCurrentOperation(&v12);
    if ( CurrentOperation >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
      CurrentOperation = PiPnpRtlObjectEventCreate(a2, a3, v12, &v13);
      if ( CurrentOperation >= 0 && v13 )
      {
        v11 = v13 + 16;
        if ( *((_QWORD *)v13 + 2)
          || (CurrentOperation = PnpOpenObjectRegKey(a1, a2, a3, 0x2000000, 0, (__int64)v11), CurrentOperation >= 0) )
        {
          *a4 = *(_QWORD *)v11;
        }
        else
        {
          *(_QWORD *)v11 = 0LL;
        }
      }
      ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
      KeLeaveCriticalRegion();
    }
  }
  return (unsigned int)CurrentOperation;
}
