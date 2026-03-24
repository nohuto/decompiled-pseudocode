/*
 * XREFs of SetHandleFlag @ 0x1C0046E40
 * Callers:
 *     CloseProtectedHandle @ 0x1C0046DF8 (CloseProtectedHandle.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0029550 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int *v8; // rbx
  ULONG v9; // eax
  ULONG *v11; // rax
  ULONG *v12; // r14
  const void *v13; // rdx

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
  {
    v8 = (unsigned int *)(CurrentProcessWin32Process + 720);
    v9 = *(_DWORD *)(CurrentProcessWin32Process + 720);
    if ( a3 )
    {
      if ( v5 >= v9 )
      {
        v11 = (ULONG *)Win32AllocPoolWithQuotaZInit((unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3, 0x69707355u);
        v12 = v11;
        if ( !v11 )
        {
          v4 = 0;
          goto LABEL_5;
        }
        v13 = (const void *)*((_QWORD *)v8 + 1);
        if ( v13 )
        {
          memmove(v11, v13, (unsigned __int64)*v8 >> 3);
          Win32FreePool(*((_QWORD *)v8 + 1));
        }
        RtlInitializeBitMap((PRTL_BITMAP)v8, v12, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits((PRTL_BITMAP)v8, v5, 1u);
    }
    else if ( v5 < v9 )
    {
      RtlClearBits((PRTL_BITMAP)v8, v5, 1u);
    }
  }
LABEL_5:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}
