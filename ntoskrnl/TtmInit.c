/*
 * XREFs of TtmInit @ 0x14080E764
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall TtmInit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  int v10; // eax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-49h] BYREF
  __int128 v12[8]; // [rsp+40h] [rbp-39h] BYREF
  char v13; // [rsp+E0h] [rbp+67h] BYREF

  if ( TtmIsEnabled(a1, a2) )
  {
    memset(v12, 0, 0x78uLL);
    LOWORD(v12[0]) = 120;
    DWORD2(v12[0]) = 400;
    BYTE2(v12[0]) = BYTE2(v12[0]) & 0xF1 | 2;
    v5 = 0x7FFFLL;
    HIDWORD(v12[1]) = 2031619;
    *((_QWORD *)&v12[3] + 1) = TtmpOpenQueueHandle;
    *(_QWORD *)&v12[4] = TtmpCloseQueueHandle;
    *(__int128 *)((char *)v12 + 12) = TtmpQueueMapping;
    *((_QWORD *)&v12[4] + 1) = TtmpDeleteQueue;
    v6 = L"TerminalEventQueue";
    DWORD1(v12[2]) = 512;
    HIDWORD(v12[2]) = 176;
    SourceString = 0LL;
    while ( *v6 )
    {
      ++v6;
      if ( !--v5 )
        goto LABEL_11;
    }
    SourceString.Buffer = L"TerminalEventQueue";
    SourceString.Length = 2 * (0x7FFF - v5);
    SourceString.MaximumLength = SourceString.Length + 2;
LABEL_11:
    v7 = ObCreateObjectTypeEx(&SourceString, v12, 0LL, (__int16 *)0x80, &TtmpQueueObjectType);
    if ( v7 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v7, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  ExInitializeResourceLite(&TtmpSessionLock);
  TtmpSession = 0LL;
  if ( TtmIsEnabled(v3, v2) )
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
    memset(v12, 0, 0x78uLL);
    LOWORD(v12[0]) = 120;
    DWORD2(v12[0]) = 400;
    BYTE2(v12[0]) = BYTE2(v12[0]) & 0xF1 | 6;
    v8 = 0x7FFFLL;
    HIDWORD(v12[1]) = 2031619;
    *((_QWORD *)&v12[3] + 1) = TtmpOpenTerminalHandle;
    *(_QWORD *)&v12[4] = TtmpCloseTerminalHandle;
    *(__int128 *)((char *)v12 + 12) = TtmpTerminalMapping;
    *((_QWORD *)&v12[4] + 1) = TtmpDeleteTerminal;
    v9 = L"Terminal";
    DWORD1(v12[2]) = 512;
    HIDWORD(v12[2]) = 288;
    SourceString = 0LL;
    while ( *v9 )
    {
      ++v9;
      if ( !--v8 )
        goto LABEL_20;
    }
    SourceString.Buffer = L"Terminal";
    SourceString.Length = 2 * (0x7FFF - v8);
    SourceString.MaximumLength = SourceString.Length + 2;
LABEL_20:
    v10 = ObCreateObjectTypeEx(&SourceString, v12, 0LL, 0LL, &TtmpTerminalObjectType);
    if ( v10 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v10, 0LL, 0LL);
    ExSubscribeWnfStateChange(
      (__int64)&v13,
      (__int64)&WNF_SHEL_INACTIVITY_TIMEOUT_IN_MS,
      1,
      0,
      (__int64)TtmpWnfInactivityTimeoutCallback,
      0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140D53948);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140D53910);
}
