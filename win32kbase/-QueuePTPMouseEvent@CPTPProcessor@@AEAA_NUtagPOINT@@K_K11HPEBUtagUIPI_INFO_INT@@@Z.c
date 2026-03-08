/*
 * XREFs of ?QueuePTPMouseEvent@CPTPProcessor@@AEAA_NUtagPOINT@@K_K11HPEBUtagUIPI_INFO_INT@@@Z @ 0x1C020EE54
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C020E0C0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C020D77C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 */

char __fastcall CPTPProcessor::QueuePTPMouseEvent(
        LARGE_INTEGER *this,
        struct tagPOINT a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        const struct tagUIPI_INFO_INT *a8)
{
  int v9; // r14d
  LONG x; // edi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v18; // si
  LARGE_INTEGER PerformanceCounter; // rax
  int *QuadPart; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  LARGE_INTEGER v25; // xmm1_8
  int v26; // eax
  _BYTE v28[20]; // [rsp+20h] [rbp-48h]
  LONG y; // [rsp+7Ch] [rbp+14h]

  y = a2.y;
  v9 = a3;
  x = a2.x;
  v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(this, a2, a3, a4);
  RIMLockExclusive(v12 + 3600);
  if ( *(_DWORD *)this[310].QuadPart < 0x40u )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QuadPart = (int *)this[309].QuadPart;
    v18 = 1;
    this[306] = PerformanceCounter;
    *QuadPart = ((unsigned __int8)*QuadPart + 1) & 0x3F;
    *(_DWORD *)v28 = 0x800000;
    v24 = SGDGetUserSessionState(QuadPart, v21, v22, v23)
        + 3616
        + ((unsigned __int64)*(unsigned int *)this[309].QuadPart << 7);
    *(LARGE_INTEGER *)v24 = this[65];
    *(_QWORD *)(v24 + 40) = a5;
    *(_QWORD *)(v24 + 48) = a6;
    *(_QWORD *)(v24 + 32) = a4;
    *(_OWORD *)(v24 + 56) = *(_OWORD *)&this[302].LowPart;
    *(_OWORD *)(v24 + 72) = *(_OWORD *)&this[304].LowPart;
    *(_OWORD *)(v24 + 88) = *(_OWORD *)&this[306].LowPart;
    v25 = this[308];
    *(_DWORD *)(v24 + 112) = a7;
    *(LARGE_INTEGER *)(v24 + 104) = v25;
    v26 = *((_DWORD *)a8 + 2);
    *(_QWORD *)(v24 + 116) = *(_QWORD *)a8;
    *(_DWORD *)(v24 + 124) = v26;
    *(_OWORD *)&v28[4] = 0LL;
    *(_OWORD *)(v24 + 8) = *(_OWORD *)v28;
    *(_QWORD *)(v24 + 24) = 0LL;
    if ( (v9 & 2) != 0 )
    {
      *(_WORD *)(v24 + 12) |= 1u;
    }
    else
    {
      switch ( v9 )
      {
        case 4:
          *(_WORD *)(v24 + 12) |= 2u;
          goto LABEL_6;
        case 8:
          *(_WORD *)(v24 + 12) |= 4u;
          goto LABEL_6;
        case 16:
          *(_WORD *)(v24 + 12) |= 8u;
          goto LABEL_6;
      }
    }
    if ( (v9 & 1) != 0 )
    {
      *(_DWORD *)(v24 + 24) = y;
      *(_DWORD *)(v24 + 20) = x;
LABEL_16:
      ++*(_DWORD *)this[310].QuadPart;
      goto LABEL_17;
    }
LABEL_6:
    if ( *(_DWORD *)(v24 + 20) || *(_DWORD *)(v24 + 24) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1438);
    goto LABEL_16;
  }
  v17 = SGDGetUserSessionState(v14, v13, v15, v16);
  ++*(_DWORD *)(v17 + 11912);
  InputTraceLogging::Mouse::DropInput();
  v18 = 0;
LABEL_17:
  *(_QWORD *)(v12 + 3608) = 0LL;
  ExReleasePushLockExclusiveEx(v12 + 3600, 0LL);
  KeLeaveCriticalRegion();
  return v18;
}
