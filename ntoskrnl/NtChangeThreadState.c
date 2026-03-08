/*
 * XREFs of NtChangeThreadState @ 0x1409ACF20
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PsMultiResumeThread @ 0x140354658 (PsMultiResumeThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PsSuspendThread @ 0x1407DC9C0 (PsSuspendThread.c)
 */

__int64 __fastcall NtChangeThreadState(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v8; // edi
  char PreviousMode; // bl
  int v10; // edx
  int v11; // eax
  PVOID v12; // rcx
  struct _KTHREAD *CurrentThread; // r12
  PVOID v14; // r14
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v17; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v17 = 0LL;
  if ( a3 <= 1 )
  {
    if ( a5 )
      return (unsigned int)-1073741820;
    if ( a4 )
      return (unsigned int)-1073741811;
  }
  if ( a6 )
    return (unsigned int)-1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = ObpReferenceObjectByHandleWithTag(a1, 1, PspThreadStateChangeType, PreviousMode, 0x63547350u, &v17, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v10 = 0;
    if ( a3 <= 1 )
      v10 = 2;
    v11 = ObpReferenceObjectByHandleWithTag(
            a2,
            v10,
            (__int64)PsThreadType,
            PreviousMode,
            0x63547350u,
            &Object,
            0LL,
            0LL);
    v12 = Object;
    v8 = v11;
    if ( v11 >= 0 )
    {
      if ( *(PVOID *)v17 == Object )
      {
        CurrentThread = KeGetCurrentThread();
        v14 = v17;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v14 + 8, 0LL);
        if ( a3 )
        {
          if ( a3 == 1 )
          {
            if ( *((_DWORD *)v14 + 4) )
            {
              v8 = PsMultiResumeThread((__int64)Object, 0LL, 1u);
              if ( v8 >= 0 )
                --*((_DWORD *)v14 + 4);
            }
            else
            {
              v8 = -1073741811;
            }
          }
        }
        else if ( *((_DWORD *)v14 + 4) == 0x7FFFFFFF )
        {
          v8 = -1073741750;
        }
        else
        {
          v8 = PsSuspendThread((__int64)Object, 0LL);
          if ( v8 >= 0 )
            ++*((_DWORD *)v14 + 4);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v14 + 1);
        KeAbPostRelease((ULONG_PTR)v14 + 8);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v12 = Object;
      }
      else
      {
        v8 = -1073741811;
      }
    }
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x63547350u);
  }
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x63547350u);
  return (unsigned int)v8;
}
