/*
 * XREFs of xxxDesktopThread @ 0x1C00D9400
 * Callers:
 *     <none>
 * Callees:
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C000A648 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00D6A54 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D9B74 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C00D9CA4 (xxxDesktopThreadWaiter.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // edi
  char v3; // r12
  int v4; // r14d
  const WCHAR *v5; // rdx
  __int64 CurrentThreadWin32Thread; // rax
  const wchar_t *v7; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v9; // r13
  _DWORD *v10; // r15
  PRKEVENT v11; // rcx
  __int64 v12; // rcx
  struct _KEVENT *v13; // rcx
  void *v14; // rbx
  __int64 v15; // rcx
  struct _KEVENT *v16; // rcx
  bool v17; // zf
  void *v18; // rcx
  LegacyInputDispatcher *v19; // rcx
  PRKEVENT v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // edi
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  int v31; // eax
  LegacyInputDispatcher *v32; // rcx
  signed __int32 v33[8]; // [rsp+8h] [rbp-89h] BYREF
  int v34; // [rsp+38h] [rbp-59h]
  int v35; // [rsp+3Ch] [rbp-55h]
  LegacyInputDispatcher *v36; // [rsp+40h] [rbp-51h] BYREF
  int ProcessInformation; // [rsp+48h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v39[10]; // [rsp+68h] [rbp-29h] BYREF

  v35 = 0;
  v36 = 0LL;
  v2 = 0;
  v3 = 0;
  DestinationString = 0LL;
  memset(v39, 0, sizeof(v39));
  v4 = *(_DWORD *)a1 & 2;
  SetThreadBasePriority(KeGetCurrentThread(), v4 != 0 ? 12 : 16);
  if ( !v4 )
  {
    if ( qword_1C0339F08 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 847LL);
    }
    qword_1C0339F08 = (PRKEVENT)CreateKernelEvent(1LL);
  }
  v5 = L"IO_DT";
  if ( v4 )
    v5 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v5);
  if ( v4 )
  {
    v7 = L"Win32k Desktop Thread (NOIO_DT)";
  }
  else
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 48) = 1;
    v7 = L"Win32k Desktop Thread (IO_DT)";
  }
  SetThreadName(-2LL, v7);
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v4 || qword_1C0339F08) )
  {
    ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *((_QWORD *)a1 + 2) = ThreadWin32Thread;
    v9 = ThreadWin32Thread;
    v10 = (_DWORD *)*((_QWORD *)ThreadWin32Thread + 54);
    *((_QWORD *)a1 + 3) = v10;
    ++v10[99];
    *((_QWORD *)ThreadWin32Thread + 58) = gpkdiStatic;
    *((_QWORD *)ThreadWin32Thread + 77) = 0LL;
    if ( (int)LegacyInputDispatcher::Create(&v36) < 0 )
    {
      *(_DWORD *)a1 |= 8u;
      _InterlockedOr(v33, 0);
      KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
      if ( v4 )
        return;
      v11 = qword_1C0339F08;
      goto LABEL_75;
    }
    if ( !v4 )
    {
      v39[0] = Feedback::gpevtPointerCursorOperation;
      v39[1] = OnPointerCursorOperation;
      v39[3] = OnPTPMouseOperation;
      v39[4] = qword_1C0339F08;
      v39[5] = lambda_59a4e3142c84351a80394e9d40be16cb_::_lambda_invoker_cdecl_;
      v39[2] = gpevtPTPOperation;
      v39[6] = GetSynthesizedContainerMouseInputEvent();
      v2 = 4;
      v39[7] = ChildProcessRootSynthesizedMouseInput;
      v35 = 4;
      if ( gSessionId == gServiceSessionId )
      {
        CBaseInput::InitializeSensor(gpMouseSensor);
        v3 = 1;
      }
      else
      {
        v3 = 1;
        if ( (int)CBaseInput::InitializeSensor(gpMouseSensor) >= 0 )
        {
          if ( gProtocolType )
          {
            EnterCrit(0LL, 1LL);
            CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
            UserSessionSwitchLeaveCrit(v12);
          }
          CBaseInput::Read(gpMouseSensor);
        }
      }
    }
    EnterCrit(0LL, 1LL);
    v13 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
    *(_DWORD *)a1 |= 4u;
    KeSetEvent(v13, 1, 0);
    v14 = (void *)*((_QWORD *)a1 + 7);
    ObReferenceObjectByPointer(v14, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    if ( gdwInAtomicOperation )
    {
      v15 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v15);
    KeWaitForSingleObject(v14, WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
    ObfDereferenceObject(v14);
    if ( (*(_DWORD *)a1 & 8) != 0 )
    {
      _InterlockedOr(v33, 0);
      if ( *((_QWORD *)a1 + 1) )
        xxxCleanupMotherDesktopWindow((__int64)a1);
      v16 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
      if ( v16 )
        KeSetEvent(v16, 1, 0);
      v17 = v10[99]-- == 1;
      if ( v17 && !v10[98] && (v10[97] & 0x4000000) != 0 )
      {
        v34 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1021LL);
      }
      v18 = (void *)*((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 2) = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      *(_DWORD *)a1 = 0;
      if ( v18 )
      {
        ObfDereferenceObject(v18);
        *((_QWORD *)a1 + 7) = 0LL;
      }
      if ( v3 )
        CleanupSensorExplicitly(0LL);
      v19 = v36;
      if ( v36 )
        LegacyInputDispatcher::`scalar deleting destructor'(v36);
      if ( !v4 )
      {
        v20 = qword_1C0339F08;
        if ( !qword_1C0339F08 )
        {
          v34 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1040LL);
          v20 = qword_1C0339F08;
        }
        Win32FreePool(v20);
        qword_1C0339F08 = 0LL;
      }
    }
    else
    {
      *((_QWORD *)a1 + 8) = **((_QWORD **)a1 + 2);
      ProcessInformation = 1;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      v21 = 2LL * v2;
      v22 = v2 + 1;
      v39[v21] = *((_QWORD *)v9 + 177);
      v23 = v22 + 8;
      if ( v4 )
        v23 = v22;
      LegacyInputDispatcher::Initialize(v36, 1, 0, v23, v22, (struct LegacyDispatcherObject *)v39);
      if ( v23 != v22 )
        CBaseInput::RegisterDispatcherObject(gpMouseSensor, v36);
      v27 = v35;
      *((_DWORD *)v36 + 15) = v35;
      if ( v4 )
        qword_1C0339F10 = (__int64)v36;
      else
        qword_1C0339F18 = (__int64)v36;
      do
      {
        do
          LOBYTE(v24) = 1;
        while ( (unsigned int)xxxDesktopThreadWaiter(v24, 0LL, v25, v26) != v27 );
      }
      while ( (unsigned int)xxxHandleDesktopMessages(v9, a1) );
      if ( a1 == (struct tagTERMINAL *)gTermIO[0] )
        gdwHydraHint |= 0x100000u;
      *((_QWORD *)a1 + 2) = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      *((_DWORD *)a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
      v28 = *((_QWORD *)v9 + 57);
      if ( v28 )
      {
        HMAssignmentUnlock(v28 + 184);
        v29 = *((_QWORD *)v9 + 57);
        v30 = (_QWORD *)(*(_QWORD *)(v29 + 8) + 24LL);
        if ( *v30 )
        {
          *(_QWORD *)(**(_QWORD **)(v29 + 8) + 8LL) = 0LL;
          HMAssignmentUnlock(v30);
        }
      }
      *((_QWORD *)v9 + 58) = gpkdiStatic;
      v31 = v10[99];
      if ( !v31 )
      {
        v35 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1160LL);
        v31 = v10[99];
      }
      v10[99] = v31 - 1;
      if ( *((_DWORD **)v9 + 54) != v10 )
        zzzDestroyQueue(v10);
      if ( v3 )
        CleanupSensorExplicitly(0LL);
      v32 = v36;
      if ( v36 )
        LegacyInputDispatcher::`scalar deleting destructor'(v36);
      v36 = 0LL;
      UserSessionSwitchLeaveCrit(v32);
      if ( !v4 )
      {
        Win32FreePool(qword_1C0339F08);
        qword_1C0339F08 = 0LL;
      }
      ProcessInformation = 0;
      ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
      EnterCrit(0LL, 1LL);
      *((_QWORD *)a1 + 8) = 0LL;
    }
    UserSessionSwitchLeaveCrit(v19);
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v33, 0);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v4 )
    {
      v11 = qword_1C0339F08;
      if ( qword_1C0339F08 )
      {
LABEL_75:
        Win32FreePool(v11);
        qword_1C0339F08 = 0LL;
      }
    }
  }
}
