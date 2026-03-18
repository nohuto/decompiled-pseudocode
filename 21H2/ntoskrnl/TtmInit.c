/*
 * XREFs of TtmInit @ 0x1408633F0
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 */

__int64 TtmInit()
{
  __int64 v0; // rdi
  __int64 v2; // rcx
  const wchar_t *v3; // rax
  __int16 v4; // cx
  int v5; // eax
  const wchar_t *v6; // rax
  __int16 v7; // di
  int v8; // eax
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-49h] BYREF
  __int128 v10[8]; // [rsp+48h] [rbp-39h] BYREF
  char v11; // [rsp+E8h] [rbp+67h] BYREF

  v0 = 0x7FFFLL;
  if ( TtmIsEnabled() )
  {
    memset(v10, 0, 0x78uLL);
    LOWORD(v10[0]) = 120;
    DWORD2(v10[0]) = 400;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF1 | 2;
    v2 = 0x7FFFLL;
    HIDWORD(v10[1]) = 2031619;
    *((_QWORD *)&v10[3] + 1) = TtmpOpenQueueHandle;
    *(_QWORD *)&v10[4] = TtmpCloseQueueHandle;
    *(__int128 *)((char *)v10 + 12) = TtmpQueueMapping;
    *((_QWORD *)&v10[4] + 1) = TtmpDeleteQueue;
    v3 = L"TerminalEventQueue";
    DWORD1(v10[2]) = 512;
    HIDWORD(v10[2]) = 176;
    SourceString = 0LL;
    while ( *v3 )
    {
      ++v3;
      if ( !--v2 )
        goto LABEL_11;
    }
    v4 = 2 * v2;
    SourceString.Buffer = L"TerminalEventQueue";
    SourceString.Length = -2 - v4;
    SourceString.MaximumLength = -v4;
LABEL_11:
    v5 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, (__int16 *)0x80, &TtmpQueueObjectType);
    if ( v5 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v5, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  ExInitializeResourceLite(&TtmpSessionLock);
  TtmpSession = 0LL;
  if ( TtmIsEnabled() )
  {
    if ( !TtmpProximityEscapeMsec )
      TtmpProximityEscapeMsec = 3000;
    TtmpTerminalInactivityTimeout = -300000000LL;
    ExInitializeResourceLite(&TtmpTerminalInactivityLock);
    KeInitializeTimerEx(&TtmpTerminalInactivityTimer, NotificationTimer);
    KeInitializeDpc(&TtmpTerminalInactivityTimerDpc, (PKDEFERRED_ROUTINE)TtmpTerminalInactivityTimerDpcRoutine, 0LL);
    TtmpTerminalInactivityWorkItem.Parameter = 0LL;
    TtmpTerminalInactivityWorkItem.WorkerRoutine = (void (__fastcall *)(void *))TtmpTerminalInactivityWorkerRoutine;
    TtmpTerminalInactivityWorkItem.List.Flink = 0LL;
    memset(v10, 0, 0x78uLL);
    LOWORD(v10[0]) = 120;
    DWORD2(v10[0]) = 400;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF1 | 6;
    *((_QWORD *)&v10[3] + 1) = TtmpOpenTerminalHandle;
    *(_QWORD *)&v10[4] = TtmpCloseTerminalHandle;
    *(__int128 *)((char *)v10 + 12) = TtmpTerminalMapping;
    *((_QWORD *)&v10[4] + 1) = TtmpDeleteTerminal;
    v6 = L"Terminal";
    HIDWORD(v10[1]) = 2031619;
    DWORD1(v10[2]) = 512;
    HIDWORD(v10[2]) = 288;
    SourceString = 0LL;
    while ( *v6 )
    {
      ++v6;
      if ( !--v0 )
        goto LABEL_20;
    }
    v7 = 2 * v0;
    SourceString.Buffer = L"Terminal";
    SourceString.Length = -2 - v7;
    SourceString.MaximumLength = -v7;
LABEL_20:
    v8 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, 0LL, &TtmpTerminalObjectType);
    if ( v8 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v8, 0LL, 0LL);
    ExSubscribeWnfStateChange(
      (int)&v11,
      (int)&WNF_SHEL_INACTIVITY_TIMEOUT_IN_MS,
      1,
      0,
      (__int64)TtmpWnfInactivityTimeoutCallback,
      0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140D3B908, (__int64)TtmpTraceLoggingCallback, 0LL);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140D3B8D0, 0LL, 0LL);
}
