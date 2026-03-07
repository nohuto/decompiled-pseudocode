__int64 __fastcall AllocateW32Process(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  int v3; // ecx
  __int64 v4; // rdx
  int v5; // edi
  int v7; // [rsp+38h] [rbp+10h] BYREF

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
  if ( PsGetProcessWin32Process(a1) )
  {
    v5 = 1073741851;
  }
  else
  {
    v2 = (volatile signed __int32 *)Win32AllocPoolWithQuotaZInit(W32ProcessSize, 1768977237LL);
    if ( v2 )
    {
      v7 = 0;
      SystemPrng(&v7, 4LL);
      v3 = v7;
      LOBYTE(v4) = 1;
      if ( !v7 )
        v3 = 1;
      v7 = v3;
      *((_DWORD *)v2 + 73) = v3;
      GdiPreUserProcessCallout(v2, v4);
      *(_QWORD *)v2 = a1;
      v5 = PsSetProcessWin32Process(a1, v2, 0LL);
      if ( v5 < 0 )
      {
        UserSetLastError(5LL);
        Win32FreePool((void *)v2);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v2);
        _InterlockedAdd(v2 + 2, 1u);
      }
    }
    else
    {
      UserSetLastError(8LL);
      v5 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v5;
}
