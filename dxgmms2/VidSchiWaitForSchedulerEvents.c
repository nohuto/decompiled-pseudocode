/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C00A5590
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0006850 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiAcceptsIncomingWork @ 0x1C0006830 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0006E50 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C0007920 (VidSchIsTDRPending.c)
 *     VidSchiIsFlipQueueBusy @ 0x1C0008100 (VidSchiIsFlipQueueBusy.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1C00A5940 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C01063DC (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(__int64 a1)
{
  unsigned int v2; // edx
  __int64 *v3; // rsi
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // r14
  int v7; // eax
  bool v8; // di
  char IsFlipQueueBusy; // si
  LARGE_INTEGER v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r11
  unsigned int v13; // r8d
  unsigned int i; // eax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  ULONG v18; // r10d
  union _LARGE_INTEGER *Timeout; // r9
  union _LARGE_INTEGER v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  unsigned int v25; // eax
  _BYTE v27[8]; // [rsp+40h] [rbp-88h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-80h] BYREF
  union _LARGE_INTEGER v29; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v31; // [rsp+70h] [rbp-58h]
  PVOID Object[2]; // [rsp+78h] [rbp-50h] BYREF
  __int128 v33; // [rsp+88h] [rbp-40h]

  v30[0] = a1 + 1248;
  v30[1] = a1 + 1192;
  v31 = a1 + 1360;
  while ( 1 )
  {
    v3 = v30;
    v4 = 1;
    v5 = 0;
    if ( VidSchiAcceptsIncomingWork(a1) )
      v4 = v2;
    while ( 1 )
    {
      v6 = *v3;
      *(_QWORD *)(v6 + 48) = MEMORY[0xFFFFF78000000320];
      if ( KeReadStateEvent((PRKEVENT)v6) )
        break;
      ++v5;
      ++v3;
      if ( v5 >= v4 )
        goto LABEL_6;
    }
    *(_QWORD *)(v6 + 40) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)v6);
LABEL_6:
    if ( v5 == v4 )
    {
      VidSchiProfilePerformanceTick(14LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      while ( 1 )
      {
        do
        {
          v7 = *(_DWORD *)(a1 + 728);
          v29.QuadPart = 0LL;
          v8 = v7 || *(_DWORD *)(a1 + 68) || *(_DWORD *)(a1 + 72);
          IsFlipQueueBusy = VidSchiIsFlipQueueBusy(a1);
          if ( VidSchiAcceptsIncomingWork(a1) )
          {
            PerformanceFrequency.QuadPart = 0LL;
            v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( is_mul_ok(v10.QuadPart, 0x989680uLL) )
              v11 = (unsigned __int64)v10.QuadPart
                  * (unsigned __int128)0x989680uLL
                  / (unsigned __int64)PerformanceFrequency.QuadPart;
            else
              v11 = 10000000 * (v10.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
                  + 10000000
                  * (v10.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                  / PerformanceFrequency.QuadPart;
            v12 = -1LL;
            if ( *(_BYTE *)(a1 + 3152) )
              v12 = *(_QWORD *)(a1 + 3136);
            v13 = *(_DWORD *)(a1 + 80);
            for ( i = 0; i < v13; ++i )
            {
              if ( i >= *(_DWORD *)(a1 + 704) )
                v15 = *(__int64 **)(a1 + 632);
              else
                v15 = (__int64 *)(*(_QWORD *)(a1 + 632) + 8LL * i);
              v16 = *v15;
              v17 = *(_QWORD *)(v16 + 128);
              if ( v17 && v12 >= v17 )
                v12 = *(_QWORD *)(v16 + 128);
            }
            if ( (v8 || IsFlipQueueBusy) && v12 >= v11 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
              v12 = v11 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
            v18 = 3;
            if ( v12 == -1LL )
            {
              Timeout = 0LL;
              *(_BYTE *)(a1 + 716) = 1;
            }
            else
            {
              *(_BYTE *)(a1 + 716) = 0;
              Timeout = &v29;
              v20.QuadPart = 0LL;
              if ( v12 > v11 )
                v20.QuadPart = v11 - v12;
              v29 = v20;
            }
          }
          else
          {
            Timeout = 0LL;
            v18 = 1;
            *(_BYTE *)(a1 + 716) = 0;
          }
          v21 = v18;
          *(_OWORD *)Object = 0LL;
          v22 = 0LL;
          v33 = 0LL;
          v23 = MEMORY[0xFFFFF78000000320];
          do
          {
            v24 = (_QWORD *)v30[v22++];
            v24[3] = v23;
            Object[v22 - 1] = v24;
            --v21;
          }
          while ( v21 );
          v25 = KeWaitForMultipleObjects(v18, Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
          *(_BYTE *)(a1 + 716) = 0;
          v5 = v25;
        }
        while ( v25 > 1 && v25 != 258 );
        v27[0] = 0;
        if ( v25 != 258 || !(unsigned int)VidSchiCheckHwProgress(a1, v27) )
          break;
        if ( v27[0] )
        {
          v5 = 1;
          break;
        }
      }
      VidSchiProfilePerformanceTick(15LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v5 )
      break;
    VidSchiHandleControlEvent(a1);
    if ( VidSchIsTDRPending(a1) )
      return 258LL;
  }
  if ( VidSchIsTDRPending(a1) )
    return 258;
  return v5;
}
