/*
 * XREFs of VslpSkStartProfiling @ 0x140890B80
 * Callers:
 *     VslpEtwClassicCallback @ 0x140890930 (VslpEtwClassicCallback.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     WmiQueryTraceInformation @ 0x140788C40 (WmiQueryTraceInformation.c)
 *     VslpSkCreateBuffers @ 0x140890974 (VslpSkCreateBuffers.c)
 *     VslpSkMapBuffers @ 0x140890AB8 (VslpSkMapBuffers.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall VslpSkStartProfiling(unsigned __int16 *a1)
{
  NTSTATUS result; // eax
  unsigned int v3; // esi
  int v4; // ebp
  unsigned __int64 v5; // rbx
  unsigned int v6; // r15d
  PVOID PoolWithTag; // rax
  unsigned int *v8; // rdi
  size_t v9; // rbx
  int v10; // ebx
  ULONG v11; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+38h] [rbp-50h] BYREF
  __int128 v13; // [rsp+48h] [rbp-40h]

  v12 = 0LL;
  v13 = 0LL;
  result = WmiQueryTraceInformation(TraceSessionSettingsClass, &v12, 0x20u, &v11, a1);
  if ( result >= 0 )
  {
    v3 = HIDWORD(v12);
    v4 = DWORD1(v12);
    v5 = ((unsigned __int64)HIDWORD(v12) + 63) >> 6;
    if ( DWORD1(v12) > 0x48 )
    {
      if ( DWORD1(v13) )
        VslpFlushTimerInterval = DWORD1(v13);
      v6 = 16 * (((unsigned __int64)HIDWORD(v12) + 63) >> 6) + HIDWORD(v12) * DWORD1(v12) + 24;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x54736D56u);
      VslpEventLog = PoolWithTag;
      v8 = (unsigned int *)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v6);
        v8[2] = v5;
        v9 = 8LL * (unsigned int)v5;
        v8[1] = v4;
        v8[3] = v6;
        *v8 = v3;
        memset(v8 + 6, 255, v9);
        memset(&v8[2 * v8[2] + 6], 0, v9);
        VslpLoggerId = *a1;
        VslpSkCreateBuffers(v4, v3);
        ExInitializePushLock(&VslpBufferFlushRundown);
        v10 = VslpSkMapBuffers();
        if ( v10 >= 0 )
        {
          KeInitializeTimerEx(&VslpFlushTimer, NotificationTimer);
          KeInitializeDpc(&VslpFlushDpc, (PKDEFERRED_ROUTINE)VslpSkFlushBufferCallback, 0LL);
          KiSetTimerEx(
            (__int64)&VslpFlushTimer,
            -10000000LL * (unsigned int)VslpFlushTimerInterval,
            0,
            0,
            (__int64)&VslpFlushDpc);
        }
        else
        {
          ExFreePoolWithTag(VslpEventLog, 0x54736D56u);
          VslpEventLog = 0LL;
          VslpLoggerId = 0LL;
        }
        return v10;
      }
      else
      {
        return -1073741670;
      }
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
