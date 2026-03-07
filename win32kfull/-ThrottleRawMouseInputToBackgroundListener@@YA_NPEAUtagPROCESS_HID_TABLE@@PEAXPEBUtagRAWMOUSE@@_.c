char __fastcall ThrottleRawMouseInputToBackgroundListener(
        struct tagPROCESS_HID_TABLE *a1,
        void *a2,
        const struct tagRAWMOUSE *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 RawMouseThrottlingThresholds; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned __int64 v12; // rax
  int v13; // edx
  __int128 v15; // [rsp+50h] [rbp-B0h]
  __int128 v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+90h] [rbp-70h]
  _BYTE v18[128]; // [rsp+A0h] [rbp-60h] BYREF

  RawMouseThrottlingThresholds = GetRawMouseThrottlingThresholds(v18);
  v15 = *(_OWORD *)(RawMouseThrottlingThresholds + 48);
  v16 = *(_OWORD *)(RawMouseThrottlingThresholds + 96);
  v17 = *(_QWORD *)(RawMouseThrottlingThresholds + 112);
  if ( !_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)RawMouseThrottlingThresholds, 8))
    || (*((_DWORD *)a1 + 25) & 0x800) != 0 && !(unsigned int)*(_OWORD *)(RawMouseThrottlingThresholds + 32)
    || *(_WORD *)a3
    || *((_DWORD *)a3 + 1)
    || *((_DWORD *)a1 + 28) == 2 && !CanCoalesceRawInputPayload(a1, a2, a3) )
  {
    FlushThrottledRawMouseInput(a1, a5);
    return 0;
  }
  if ( *((_DWORD *)a1 + 28) == 1 )
  {
    if ( a4 < *((_QWORD *)a1 + 16) )
    {
      if ( a4 > *((_QWORD *)a1 + 15) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 411);
    }
    else
    {
      *((_DWORD *)a1 + 28) = 0;
    }
  }
  v11 = *((_DWORD *)a1 + 28);
  if ( !v11 )
  {
    *((_DWORD *)a1 + 28) = 1;
    *((_QWORD *)a1 + 15) = a4
                         + *((_QWORD *)&v16 + 1)
                         + *((_QWORD *)&v16 + 1) * (unsigned __int64)((unsigned int)rand() % DWORD2(v15)) / DWORD2(v15);
    v12 = *((_QWORD *)&v16 + 1) - v17 + a4;
    if ( v12 <= a4 )
      v12 = a4;
    *((_QWORD *)a1 + 16) = v12;
    return 0;
  }
  if ( v11 == 1 )
  {
    *((_DWORD *)a1 + 28) = 2;
    *((_QWORD *)a1 + 17) = a2;
    *((_QWORD *)a1 + 18) = 0LL;
    *((_DWORD *)a1 + 38) = *((_DWORD *)a3 + 5);
    *((_DWORD *)a1 + 42) = 0;
    InputTraceLogging::Mouse::ThrottleRawInput(a1);
    if ( a4 >= *((_QWORD *)a1 + 15) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 445);
  }
  v13 = *((_DWORD *)a1 + 28);
  if ( v13 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 449);
    v13 = *((_DWORD *)a1 + 28);
  }
  *((_DWORD *)a1 + 36) += *((_DWORD *)a3 + 3);
  *((_DWORD *)a1 + 37) += *((_DWORD *)a3 + 4);
  ++*((_DWORD *)a1 + 42);
  *((_QWORD *)a1 + 20) = a4;
  if ( a4 < *((_QWORD *)a1 + 15) )
  {
    if ( v13 == 2 )
    {
      LOBYTE(v10) = 1;
      ArmRawMouseThrottlingTimer(v10, (unsigned int)v16);
    }
  }
  else
  {
    FlushThrottledRawMouseInput(a1, a5);
    *((_QWORD *)a1 + 15) += *((_QWORD *)&v16 + 1);
    *((_QWORD *)a1 + 16) = *((_QWORD *)a1 + 15);
    *((_DWORD *)a1 + 28) = 1;
  }
  return 1;
}
