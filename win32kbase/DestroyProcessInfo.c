__int64 __fastcall DestroyProcessInfo(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KEVENT *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS ProcessExitStatus; // eax
  NTSTATUS v22; // eax
  __int64 k; // rsi
  __int64 m; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rcx
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rcx
  char *v34; // rcx
  char *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 *v41; // [rsp+80h] [rbp+40h] BYREF
  __int64 v42; // [rsp+88h] [rbp+48h] BYREF
  __int64 v43; // [rsp+90h] [rbp+50h] BYREF

  v1 = *(_DWORD *)(a1 + 1088);
  if ( v1 >= 0x19 )
  {
    if ( v1 >= 0x2D )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4133LL);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 1088) - 40) <= 4 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4134LL);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 1088) - 35) <= 4 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4135LL);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 1088) - 30) <= 4 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4136LL);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 1088) - 25) <= 4 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4137LL);
    }
  }
  v3 = *(_DWORD *)(a1 + 1092);
  if ( v3 >= 0x19 )
  {
    if ( v3 >= 0x2D )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4141LL);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 1092) - 40) <= 4 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4142LL);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 1092) - 35) <= 4 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4143LL);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 1092) - 30) <= 4 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4144LL);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 1092) - 25) <= 4 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4145LL);
    }
  }
  CitProcessCallout(a1, 0);
  v7 = *(struct _KEVENT **)(a1 + 16);
  if ( v7 == (struct _KEVENT *)-1LL )
    goto LABEL_26;
  if ( v7 )
  {
    KeSetEvent(v7, 1, 0);
    ObfDereferenceObject(*(PVOID *)(a1 + 16));
LABEL_26:
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v41, v4, v5, v6);
  CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)&v42);
  v11 = *(_DWORD *)(a1 + 12);
  if ( (v11 & 4) != 0 )
  {
    *(_DWORD *)(a1 + 12) = v11 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
      zzzCalcStartCursorHide(0LL, 0LL);
  }
  --gdwDeferWinEvent;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v41, v8, v9, v10);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v41, (struct _EX_PUSH_LOCK *)&gRotationProcessLock);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(_QWORD *)(j + 248) == a1 )
        *(_QWORD *)(j + 248) = 0LL;
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v41);
  if ( (*(_DWORD *)(a1 + 12) & 0x8000) != 0 )
  {
    PsUpdateComponentPower(*(_QWORD *)a1, 6LL, 0LL);
    v15 = *(_QWORD *)(a1 + 272);
    if ( v15 )
    {
      PsReleaseProcessWakeCounter(v15, 1LL);
      *(_QWORD *)(a1 + 272) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 824) && qword_1C02D6978 && (int)qword_1C02D6978() >= 0 && qword_1C02D6980 )
      qword_1C02D6980(a1);
    if ( *(_QWORD *)(a1 + 880) && qword_1C02D6988 && (int)qword_1C02D6988() >= 0 && qword_1C02D6990 )
      qword_1C02D6990(a1);
    if ( *(_QWORD *)(a1 + 888) != -1LL )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    if ( *(_QWORD *)(a1 + 896) != -1LL )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    if ( (*(_DWORD *)(a1 + 12) & 0x40001) == 0x40000 )
    {
      v16 = *(_QWORD *)(a1 + 656);
      if ( (!v16 || (*(_DWORD *)(v16 + 64) & 2) == 0) && qword_1C02D6998 && (int)qword_1C02D6998() >= 0 )
        PostPlaySoundMessage();
    }
    if ( (unsigned int)IsShellProcess(a1) && *(_QWORD *)(a1 + 336) == grpdeskIODefault )
    {
      if ( (int)IsCleanupIAMAccessSupported() >= 0 )
        CleanupIAMAccess();
      v18 = *(unsigned int *)(*(_QWORD *)(a1 + 656) + 64LL);
      if ( (v18 & 2) == 0 )
      {
        ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)a1);
        if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
        {
          v22 = PsGetProcessExitStatus(*(PEPROCESS *)a1);
          PostWinlogonMessage(1025LL, v22);
        }
      }
    }
    for ( k = grpWinStaList; k; k = *(_QWORD *)(k + 8) )
    {
      for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
      {
        v25 = *(_QWORD *)(m + 8);
        if ( *(_QWORD *)(v25 + 176) == a1 )
        {
          *(_QWORD *)(v25 + 176) = 0LL;
          if ( (struct tagDESKTOP *)m == grpdeskRitInput )
            SynchronizeContext(v18, v17, v19, v20);
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 12) & 0x40) != 0 && qword_1C02D76C8 )
      qword_1C02D76C8(a1);
    v26 = gppiList;
    v27 = &gppiList;
    while ( v26 )
    {
      if ( v26 == a1 )
      {
        *v27 = *(_QWORD *)(a1 + 368);
        break;
      }
      v27 = (__int64 *)(v26 + 368);
      v26 = *(_QWORD *)(v26 + 368);
    }
    v28 = *(_DWORD *)(a1 + 12);
    v29 = v28 & 0x4000;
    if ( (v28 & 0x4000) != 0 && (v28 & 0x200) != 0 )
      DelayedDestroyCacheDC(1);
    if ( qword_1C02D69A8 && (int)qword_1C02D69A8(v27) >= 0 )
    {
      v27 = 0LL;
      v41 = 0LL;
      if ( qword_1C02D69B0 )
      {
        qword_1C02D69B0(&v41);
        v27 = v41;
      }
      while ( v27 )
      {
        if ( *((_DWORD *)v27 + 5) == *(_DWORD *)(a1 + 56) )
          *((_DWORD *)v27 + 5) = 0;
        v27 = (__int64 *)*v27;
      }
    }
    if ( gppiScreenSaver == a1 )
    {
      gppiScreenSaver = 0LL;
      EtwTraceScreenSaverProcessEvent(2LL);
    }
    InputObjectMap::OnProcessTermination((__int64)v27, v17, v19, v20);
    if ( gppiUserApiHook == a1 && qword_1C02D69B8 && (int)qword_1C02D69B8() >= 0 && qword_1C02D69C0 )
      qword_1C02D69C0();
    if ( gppiDManipHook == a1 && qword_1C02D69C8 && (int)qword_1C02D69C8() >= 0 && qword_1C02D69D0 )
      qword_1C02D69D0();
    UnlockObjectAssignment((void **)(a1 + 656));
    UnlockObjectAssignment((void **)(a1 + 336));
    v33 = *(void **)(a1 + 384);
    if ( v33 )
    {
      CloseProtectedHandle(v33);
      *(_QWORD *)(a1 + 384) = 0LL;
    }
    *(_DWORD *)(a1 + 12) |= 0x1000u;
    v34 = *(char **)(a1 + 696);
    if ( v34 )
    {
      do
      {
        v35 = *(char **)v34;
        Win32FreePool(v34);
        v34 = v35;
      }
      while ( v35 );
    }
    *(_QWORD *)(a1 + 696) = 0LL;
    if ( qword_1C02D69D8 && (int)qword_1C02D69D8(v34) >= 0 && qword_1C02D69E0 )
      qword_1C02D69E0(a1);
    if ( a1 == gppiInputProvider )
      gppiInputProvider = 0LL;
    if ( a1 == gppiLockSFW )
      gppiLockSFW = 0LL;
    if ( *(_DWORD *)(a1 + 56) == gpidLogonUI )
    {
      gpidLogonUI = 0LL;
      LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = 0;
      if ( (*(_DWORD *)(a1 + 812) & 0x80000) != 0 && qword_1C02D6A08 && (int)qword_1C02D6A08(v34) >= 0 )
      {
        if ( qword_1C02D6A10 )
          qword_1C02D6A10(2LL, 0LL);
        *(_DWORD *)(a1 + 812) &= ~0x80000u;
      }
    }
    if ( *(_DWORD *)(a1 + 56) == gpidLogon )
      CleanupLogonProcess((__int64)v34, v30, v31, v32);
    v36 = *(unsigned int *)(a1 + 1084);
    if ( *(_QWORD *)(a1 + 1080) && (unsigned int)dword_1C02C92F8 > 5 )
    {
      LODWORD(v41) = *(_DWORD *)(a1 + 56);
      v42 = *(unsigned int *)(a1 + 1080);
      v43 = v36;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (int)&dword_1C02C92F8,
        (int)&unk_1C0294F5A,
        v31,
        v32,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v41);
    }
    if ( (unsigned int)Feature_439792958__private_IsEnabledDeviceUsage() )
      GreCleanDCAndSetOwnerEx(qword_1C02D2F88);
    else
      GreSetDCOwnerEx((__int64)qword_1C02D2F88, 0, 0, 1u);
    if ( qword_1C02D7358 )
      qword_1C02D7358(a1);
    RIMOnProcessDestroy(*(_QWORD *)a1, v37, v38, v39);
    LOBYTE(v40) = BYTE1(Microsoft_Windows_Win32kEnableBits);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
      McTemplateK0_EtwWriteTransfer(v40, &CompleteGuiProcessExecution, &W32kControlGuid);
    return v29;
  }
  else
  {
    if ( qword_1C02D76C8 )
      qword_1C02D76C8(a1);
    return 0LL;
  }
}
