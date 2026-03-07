__int64 __fastcall RIMUnInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LIST_ENTRY *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _LIST_ENTRY *v17; // rax
  char *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax

  if ( *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 352) )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(v5, v4, v6, v7) + 88) )
    {
      v8 = (_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 88) + 24LL);
      if ( *v8 )
        ZwSetSystemInformation(SystemUnloadGdiDriverInformation, v8, 8uLL);
    }
    v12 = (struct _LIST_ENTRY *)SGDGetUserSessionState(v9, v8, v10, v11);
    dumpLeaks(v12 + 19, "RIMObj leaks");
    v17 = (struct _LIST_ENTRY *)SGDGetUserSessionState(v14, v13, v15, v16);
    dumpRimDevLeaksAndCleanup(v17 + 20, v18);
    v23 = (struct _LIST_ENTRY *)SGDGetUserSessionState(v20, v19, v21, v22);
    dumpLeaks(v23 + 21, "RIMInputObserver leaks");
    v28 = SGDGetUserSessionState(v25, v24, v26, v27);
    if ( *(_QWORD *)(v28 + 376) != v28 + 376 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 325LL);
    v33 = SGDGetUserSessionState(v30, v29, v31, v32);
    if ( *(_QWORD *)(v33 + 392) != v33 + 392 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 326LL);
    v38 = SGDGetUserSessionState(v35, v34, v36, v37);
    if ( *(_QWORD *)(v38 + 408) != v38 + 408 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 327LL);
  }
  return 0LL;
}
