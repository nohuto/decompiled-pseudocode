/*
 * XREFs of AllocateW32Process @ 0x1C00C54A0
 * Callers:
 *     W32pProcessCallout @ 0x1C00C4FD0 (W32pProcessCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C00C55C8 (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 __fastcall AllocateW32Process(__int64 a1)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+58h] [rbp+10h] BYREF

  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpW32FastMutex);
  if ( PsGetProcessWin32Process(a1) )
  {
    v2 = 1073741851;
  }
  else
  {
    v5 = Win32AllocPoolWithQuotaZInit(W32ProcessSize, 1768977237LL);
    if ( v5 )
    {
      v11 = 0;
      SystemPrng(&v11, 4LL);
      wil_details_FeatureReporting_ReportUsageToService(v7, v6, 0, 0);
      v8 = v11;
      LOBYTE(v9) = 1;
      if ( !v11 )
        v8 = 1;
      v11 = v8;
      *(_DWORD *)(v5 + 292) = v8;
      GdiPreUserProcessCallout(v5, v9);
      *(_QWORD *)v5 = a1;
      v2 = PsSetProcessWin32Process(a1, v5, 0LL);
      if ( v2 < 0 )
      {
        UserSetLastError(5LL, v10);
        Win32FreePool(v5);
      }
      else
      {
        ObfReferenceObject(*(PVOID *)v5);
        _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
      }
    }
    else
    {
      UserSetLastError(8LL, v4);
      v2 = -1073741801;
    }
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpW32FastMutex);
  return (unsigned int)v2;
}
