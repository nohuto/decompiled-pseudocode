__int64 __fastcall CPTPProcessor::xxxDownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rsi
  __int64 v6; // r12
  DWORD LowPart; // r15d
  int v8; // r9d
  __int64 v9; // r8
  bool v10; // cf
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v20[4]; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+34h] [rbp-2Ch]
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  __int128 v23; // [rsp+48h] [rbp-18h]

  v2 = 0;
  if ( a1 )
    v5 = *((_QWORD *)a1 + 8);
  else
    v5 = *((_QWORD *)gptiCurrent + 147);
  v6 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  InputTraceLogging::PTP::DownlevelInput(a1, a2);
  v8 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 < 2u )
  {
    *(_QWORD *)&v23 = 0LL;
    v22 = 0LL;
    WORD1(v22) = 128;
    if ( v8 )
      WORD2(v22) = 2048;
    else
      WORD2(v22) = 1024;
    WORD3(v22) = *((_WORD *)a2 + 2);
    v11 = (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() != 0 ? 3048 : 1000;
    UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
    ApiSetEditionSynthesizeMouseWheel(v5, (unsigned int)&v22, v6, LowPart, v11);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v20, v16, v17, v18);
  }
  else if ( *(_DWORD *)a2 == 2 )
  {
    v9 = *((_QWORD *)gptiCurrent + 55);
    v10 = *((_DWORD *)a2 + 1) != 0;
    *(_QWORD *)&v22 = 0LL;
    *((_QWORD *)&v22 + 1) = v5;
    *(_DWORD *)((char *)&v22 + 2) = (unsigned __int16)(v10 ? 16546 : -16222);
    v23 = 0LL;
    if ( v9 )
      LOBYTE(v22) = InternalMapVirtualKeyEx(0xA2u, 0, *(_QWORD *)(*(_QWORD *)(v9 + 48) + 32LL));
    xxxProcessKeyEvent((unsigned __int8 *)&v22, 0LL, 0, 0, 0LL, 0LL);
  }
  else
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 500);
    return (unsigned int)-1073741811;
  }
  return v2;
}
