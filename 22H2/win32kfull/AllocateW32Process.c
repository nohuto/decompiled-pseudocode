/*
 * XREFs of AllocateW32Process @ 0x1C00E3E40
 * Callers:
 *     W32pProcessCallout @ 0x1C00E3A50 (W32pProcessCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall AllocateW32Process(__int64 a1)
{
  int v2; // edi
  volatile signed __int32 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
  if ( PsGetProcessWin32Process(a1) )
  {
    v2 = 1073741851;
  }
  else
  {
    v4 = (volatile signed __int32 *)Win32AllocPoolWithQuota(W32ProcessSize, 1768977237LL);
    v7 = v4;
    if ( v4 )
    {
      memset((void *)v4, 0, W32ProcessSize);
      LOBYTE(v8) = 1;
      GdiPreUserProcessCallout(v7, v8);
      *(_QWORD *)v7 = a1;
      v2 = PsSetProcessWin32Process(a1, v7, 0LL);
      if ( v2 < 0 )
      {
        UserSetLastError(5LL, v9, v10);
        Win32FreePool((void *)v7);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v7);
        _InterlockedIncrement(v7 + 2);
      }
    }
    else
    {
      UserSetLastError(8LL, v5, v6);
      v2 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v2;
}
