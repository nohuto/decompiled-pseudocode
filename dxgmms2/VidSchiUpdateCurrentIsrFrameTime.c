/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C003CCC8
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000B650 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C003A8B0 (VidSchiExecuteMmIoFlipAtISR.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  BOOL v7; // esi
  LARGE_INTEGER v9; // r9
  signed __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  LONGLONG v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+48h] [rbp-30h]

  v3 = 0LL;
  PerformanceCounter.LowPart = _InterlockedExchange((volatile __int32 *)(a2 + 44260), 0);
  v7 = a3 != 0;
  v9.QuadPart = 0LL;
  if ( !PerformanceCounter.LowPart )
  {
    LODWORD(v13) = a3 != 0;
    if ( a3 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v9 = PerformanceCounter;
      LODWORD(v13) = v7;
    }
LABEL_9:
    if ( !(_DWORD)v13 )
      return PerformanceCounter.LowPart;
    goto LABEL_10;
  }
  v9 = KeQueryPerformanceCounter(0LL);
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 44272), 0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 44144);
  v12 = v10;
  LODWORD(v13) = v7;
  PerformanceCounter.QuadPart = v9.QuadPart - v11;
  if ( !v12 )
    goto LABEL_9;
  if ( PerformanceCounter.QuadPart <= v12 )
    goto LABEL_9;
  PerformanceCounter.QuadPart /= v12;
  v13 = (v9.QuadPart - v11) / v12;
  if ( a3 )
    goto LABEL_9;
  if ( !PerformanceCounter.LowPart )
    return PerformanceCounter.LowPart;
  v9.QuadPart = v11 + v12 * PerformanceCounter.QuadPart;
LABEL_10:
  *(_QWORD *)(a2 + 44152) += (unsigned int)v13;
  v14 = *(_DWORD *)(a2 + 44256) + 1;
  *(_DWORD *)(a2 + 44256) = v14;
  if ( v14 < *(_DWORD *)(a2 + 82932) )
  {
    LOBYTE(PerformanceCounter.LowPart) = 1;
  }
  else
  {
    *(_DWORD *)(a2 + 44168) += v13;
    LOBYTE(PerformanceCounter.LowPart) = 0;
    *(_DWORD *)(a2 + 44256) = 0;
    *(LARGE_INTEGER *)(a2 + 44160) = v9;
  }
  *(_BYTE *)(a2 + 44184) = PerformanceCounter.LowPart;
  *(LARGE_INTEGER *)(a2 + 44144) = v9;
  if ( *(_BYTE *)(a2 + 8) && !*(_BYTE *)(a1 + 156) )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v18 = 0LL;
    v19 = 0;
    v17 = 0LL;
    PerformanceCounter.LowPart = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))DxgCoreInterface[61])(
                                   v15,
                                   0LL,
                                   0LL,
                                   &v17);
    if ( (PerformanceCounter.LowPart & 0x80000000) == 0 )
      v3 = *((_QWORD *)&v17 + 1);
    *(_QWORD *)(a2 + 44176) = v3;
  }
  return PerformanceCounter.LowPart;
}
