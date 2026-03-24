/*
 * XREFs of VidSchiWaitForSchedulerEvents @ 0x1C007EC40
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000B0A0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiIsFlipQueueBusy @ 0x1C0007060 (VidSchiIsFlipQueueBusy.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C00095F8 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000B6D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchIsTDRPending @ 0x1C000C140 (VidSchIsTDRPending.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     VidSchiCheckHwProgress @ 0x1C007EFE0 (VidSchiCheckHwProgress.c)
 *     VidSchiHandleControlEvent @ 0x1C00CE8A8 (VidSchiHandleControlEvent.c)
 */

__int64 __fastcall VidSchiWaitForSchedulerEvents(__int64 a1)
{
  PRKEVENT *v2; // rdi
  unsigned int v3; // esi
  unsigned int v4; // ebx
  PRKEVENT v5; // rcx
  int v6; // eax
  bool v7; // di
  char IsFlipQueueBusy; // si
  LARGE_INTEGER v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r11
  unsigned int v12; // r8d
  unsigned int i; // eax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  ULONG v17; // r10d
  union _LARGE_INTEGER *Timeout; // r9
  union _LARGE_INTEGER v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  PRKEVENT v23; // rcx
  unsigned int v24; // eax
  PRKEVENT v26; // rcx
  _BYTE v27[8]; // [rsp+40h] [rbp-88h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-80h] BYREF
  union _LARGE_INTEGER v29; // [rsp+50h] [rbp-78h] BYREF
  PRKEVENT Event[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v31; // [rsp+70h] [rbp-58h]
  PVOID Object[2]; // [rsp+78h] [rbp-50h] BYREF
  __int128 v33; // [rsp+88h] [rbp-40h]

  Event[0] = (PRKEVENT)(a1 + 1232);
  Event[1] = (PRKEVENT)(a1 + 1176);
  v31 = a1 + 1344;
  while ( 1 )
  {
    v2 = Event;
    v3 = 1;
    v4 = 0;
    if ( VidSchiAcceptsIncomingWork(a1) )
      v3 = 2;
    while ( 1 )
    {
      v5 = *v2;
      *(_QWORD *)&v5[2].Header.Lock = MEMORY[0xFFFFF78000000320];
      if ( KeReadStateEvent(v5) )
        break;
      ++v4;
      ++v2;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    v26 = Event[v4];
    v26[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v26);
LABEL_6:
    if ( v4 == v3 )
    {
      VidSchiProfilePerformanceTick(14LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      while ( 1 )
      {
        do
        {
          v6 = *(_DWORD *)(a1 + 720);
          v29.QuadPart = 0LL;
          v7 = v6 || *(_DWORD *)(a1 + 60) || *(_DWORD *)(a1 + 64);
          IsFlipQueueBusy = VidSchiIsFlipQueueBusy(a1);
          if ( VidSchiAcceptsIncomingWork(a1) )
          {
            PerformanceFrequency.QuadPart = 0LL;
            v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
            if ( is_mul_ok(v9.QuadPart, 0x989680uLL) )
              v10 = (unsigned __int64)v9.QuadPart
                  * (unsigned __int128)0x989680uLL
                  / (unsigned __int64)PerformanceFrequency.QuadPart;
            else
              v10 = 10000000 * (v9.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
                  + 10000000
                  * (v9.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart)
                  / PerformanceFrequency.QuadPart;
            v11 = -1LL;
            if ( *(_BYTE *)(a1 + 3056) )
              v11 = *(_QWORD *)(a1 + 3040);
            v12 = *(_DWORD *)(a1 + 72);
            for ( i = 0; i < v12; ++i )
            {
              if ( i >= *(_DWORD *)(a1 + 696) )
                v14 = *(__int64 **)(a1 + 624);
              else
                v14 = (__int64 *)(*(_QWORD *)(a1 + 624) + 8LL * i);
              v15 = *v14;
              v16 = *(_QWORD *)(v15 + 128);
              if ( v16 && v11 >= v16 )
                v11 = *(_QWORD *)(v15 + 128);
            }
            if ( (v7 || IsFlipQueueBusy) && v11 >= v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1) )
              v11 = v10 + ((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
            v17 = 3;
            if ( v11 == -1LL )
            {
              Timeout = 0LL;
              *(_BYTE *)(a1 + 708) = 1;
            }
            else
            {
              *(_BYTE *)(a1 + 708) = 0;
              Timeout = &v29;
              v19.QuadPart = 0LL;
              if ( v11 > v10 )
                v19.QuadPart = v10 - v11;
              v29 = v19;
            }
          }
          else
          {
            Timeout = 0LL;
            v17 = 1;
            *(_BYTE *)(a1 + 708) = 0;
          }
          v20 = v17;
          *(_OWORD *)Object = 0LL;
          v21 = 0LL;
          v33 = 0LL;
          v22 = MEMORY[0xFFFFF78000000320];
          do
          {
            v23 = Event[v21++];
            *(_QWORD *)&v23[1].Header.Lock = v22;
            Object[v21 - 1] = v23;
            --v20;
          }
          while ( v20 );
          v24 = KeWaitForMultipleObjects(v17, Object, WaitAny, Executive, 0, 0, Timeout, 0LL);
          *(_BYTE *)(a1 + 708) = 0;
          v4 = v24;
        }
        while ( v24 > 1 && v24 != 258 );
        v27[0] = 0;
        if ( v24 != 258 || !(unsigned int)VidSchiCheckHwProgress(a1, v27) )
          break;
        if ( v27[0] )
        {
          v4 = 1;
          break;
        }
      }
      VidSchiProfilePerformanceTick(15LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v4 )
      break;
    VidSchiHandleControlEvent(a1);
    if ( VidSchIsTDRPending(a1) )
      return 258LL;
  }
  if ( !VidSchIsTDRPending(a1) )
    return v4;
  return 258LL;
}
