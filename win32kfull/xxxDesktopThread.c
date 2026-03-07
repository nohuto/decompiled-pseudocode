// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // r12d
  int v3; // esi
  const WCHAR *v4; // rdx
  __int64 v5; // rcx
  const wchar_t *v6; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v8; // r15
  tagQ *v9; // r14
  __int64 v10; // rcx
  struct _KEVENT *v11; // rcx
  void *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  unsigned int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  LegacyInputDispatcher *v23; // rcx
  LegacyInputDispatcher *v24; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  PRKEVENT v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  struct _KEVENT *v40; // rcx
  bool v41; // zf
  void *v42; // rcx
  PRKEVENT v43; // rcx
  __int64 v44; // rax
  signed __int32 v45[8]; // [rsp+8h] [rbp-89h] BYREF
  char v46; // [rsp+38h] [rbp-59h]
  int v47; // [rsp+3Ch] [rbp-55h]
  int v48; // [rsp+40h] [rbp-51h]
  LegacyInputDispatcher *v49; // [rsp+48h] [rbp-49h] BYREF
  int ProcessInformation; // [rsp+50h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  PRKEVENT v52; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v53[9]; // [rsp+70h] [rbp-21h]

  v48 = 0;
  v46 = 0;
  v49 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset_0(&v52, 0, 0x50uLL);
  v3 = *(_DWORD *)a1 & 2;
  SetThreadBasePriority(KeGetCurrentThread(), v3 != 0 ? 12 : 16);
  if ( !v3 )
  {
    if ( qword_1C0361180 )
    {
      v47 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 835LL);
    }
    qword_1C0361180 = (PRKEVENT)CreateKernelEvent(1LL);
  }
  v4 = L"IO_DT";
  if ( v3 )
    v4 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v4);
  if ( v3 )
  {
    v6 = L"Win32k Desktop Thread (NOIO_DT)";
  }
  else
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 44) |= 2u;
    v6 = L"Win32k Desktop Thread (IO_DT)";
  }
  SetThreadName(-2LL, v6);
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v3 || qword_1C0361180) )
  {
    ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *((_QWORD *)a1 + 2) = ThreadWin32Thread;
    v8 = ThreadWin32Thread;
    v9 = (tagQ *)*((_QWORD *)ThreadWin32Thread + 54);
    *((_QWORD *)a1 + 3) = v9;
    ++*((_DWORD *)v9 + 100);
    *((_QWORD *)ThreadWin32Thread + 58) = gpkdiStatic;
    *((_QWORD *)ThreadWin32Thread + 77) = 0LL;
    if ( (int)LegacyInputDispatcher::Create(&v49) < 0 )
    {
      *(_DWORD *)a1 |= 8u;
      _InterlockedOr(v45, 0);
      KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
      if ( !v3 )
      {
        v30 = qword_1C0361180;
LABEL_83:
        Win32FreePool(v30);
        qword_1C0361180 = 0LL;
      }
    }
    else
    {
      if ( !v3 )
      {
        v26 = 1;
        v52 = Feedback::gpevtPointerCursorOperation;
        v53[0] = OnPointerCursorOperation;
        if ( !gDWMCapable )
        {
          v31 = SGDGetUserSessionState(v10);
          v26 = 2;
          v32 = *(_QWORD *)(v31 + 16824);
          v53[2] = OnPTPMouseOperation;
          v53[1] = v32;
        }
        v2 = v26 + 1;
        v27 = 2LL * v26;
        v48 = v26 + 1;
        v53[v27 - 1] = qword_1C0361180;
        v53[v27] = lambda_dc20bfb5fb2414edf034afb823885887_::_lambda_invoker_cdecl_;
        v28 = *(unsigned int *)SGDGetUserSessionState(v27);
        if ( (_DWORD)v28 == gServiceSessionId )
        {
          v29 = SGDGetUserSessionState(v28);
          CBaseInput::InitializeSensor(*(CBaseInput **)(v29 + 3272));
          v46 = 1;
        }
        else if ( !gDWMCapable )
        {
          v46 = 1;
          v33 = SGDGetUserSessionState(v28);
          v34 = CBaseInput::InitializeSensor(*(CBaseInput **)(v33 + 3272));
          if ( v34 >= 0 )
          {
            if ( gProtocolType )
            {
              EnterCrit(1LL, 0LL);
              v37 = SGDGetUserSessionState(v36);
              CBaseInput::HandleTSRequest(*(_QWORD *)(v37 + 3272), 0LL);
              UserSessionSwitchLeaveCrit(v38);
            }
            v39 = SGDGetUserSessionState(v35);
            CBaseInput::Read(*(CBaseInput **)(v39 + 3272));
          }
        }
      }
      EnterCrit(1LL, 0LL);
      v11 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
      *(_DWORD *)a1 |= 4u;
      KeSetEvent(v11, 1, 0);
      v12 = (void *)*((_QWORD *)a1 + 7);
      ObReferenceObjectByPointer(v12, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
      UserSessionSwitchLeaveCrit(v13);
      KeWaitForSingleObject(v12, WrUserRequest, 0, 0, 0LL);
      EnterCrit(1LL, 0LL);
      ObfDereferenceObject(v12);
      if ( (*(_DWORD *)a1 & 8) != 0 )
      {
        _InterlockedOr(v45, 0);
        if ( *((_QWORD *)a1 + 1) )
          xxxCleanupMotherDesktopWindow((__int64)a1);
        v40 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
        if ( v40 )
          KeSetEvent(v40, 1, 0);
        v41 = (*((_DWORD *)v9 + 100))-- == 1;
        if ( v41 && !tagQ::IsAnyThreadAttached(v9) && (*((_DWORD *)v9 + 99) & 0x4000000) != 0 )
        {
          v47 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1014LL);
        }
        v42 = (void *)*((_QWORD *)a1 + 7);
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        *(_DWORD *)a1 = 0;
        if ( v42 )
        {
          ObfDereferenceObject(v42);
          *((_QWORD *)a1 + 7) = 0LL;
        }
        if ( v46 )
          CleanupSensorExplicitly(0LL);
        v24 = v49;
        if ( v49 )
          LegacyInputDispatcher::`scalar deleting destructor'(v49);
        if ( !v3 )
        {
          v43 = qword_1C0361180;
          if ( !qword_1C0361180 )
          {
            v47 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1033LL);
            v43 = qword_1C0361180;
          }
          Win32FreePool(v43);
          qword_1C0361180 = 0LL;
        }
      }
      else
      {
        tagTERMINAL::SetDTEThread(a1);
        ProcessInformation = 1;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
        v14 = v2 + 1;
        v15 = 2LL * v2;
        v53[2 * v2 - 1] = *((_QWORD *)v8 + 182);
        if ( v2 + 1 > 5 )
        {
          v47 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1057LL);
        }
        if ( v3 || gDWMCapable )
        {
          v16 = v2 + 1;
        }
        else
        {
          SGDGetUserSessionState(v15);
          v16 = v2 + 11;
        }
        LegacyInputDispatcher::Initialize(v49, 1, 0, v16, v14, (struct LegacyDispatcherObject *)&v52);
        if ( v16 != v14 && !gDWMCapable )
        {
          v44 = SGDGetUserSessionState(v17);
          CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v44 + 3272), v49);
        }
        v20 = v48;
        *((_DWORD *)v49 + 15) = v48;
        if ( v3 )
          qword_1C0361188 = (__int64)v49;
        else
          qword_1C0361190 = (__int64)v49;
        do
        {
          do
            LOBYTE(v17) = 1;
          while ( (unsigned int)xxxDesktopThreadWaiter(v17, 0LL, v18, v19) != v20 );
        }
        while ( (unsigned int)xxxHandleDesktopMessages(v8, a1) );
        if ( a1 == (struct tagTERMINAL *)gTermIO[0] )
          gdwHydraHint |= 0x100000u;
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 8) = 0;
        *(_DWORD *)a1 = 0;
        v21 = *((_QWORD *)v8 + 57);
        if ( v21 )
        {
          HMAssignmentUnlock(v21 + 184);
          v22 = *(_QWORD **)(*((_QWORD *)v8 + 57) + 8LL);
          if ( v22[3] )
          {
            *(_QWORD *)(*v22 + 8LL) = 0LL;
            HMAssignmentUnlock(v22 + 3);
          }
        }
        *((_QWORD *)v8 + 58) = gpkdiStatic;
        if ( !*((_DWORD *)v9 + 100) )
        {
          v48 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1157LL);
        }
        --*((_DWORD *)v9 + 100);
        if ( *((tagQ **)v8 + 54) != v9 )
          zzzDestroyQueue(v9, v8);
        if ( v46 )
          CleanupSensorExplicitly(0LL);
        v23 = v49;
        if ( v49 )
          LegacyInputDispatcher::`scalar deleting destructor'(v49);
        v49 = 0LL;
        UserSessionSwitchLeaveCrit(v23);
        if ( !v3 )
        {
          Win32FreePool(qword_1C0361180);
          qword_1C0361180 = 0LL;
        }
        ProcessInformation = 0;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
        EnterCrit(1LL, 0LL);
        tagTERMINAL::ClearDTEThread(a1);
      }
      UserSessionSwitchLeaveCrit(v24);
    }
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v45, 0);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v3 )
    {
      v30 = qword_1C0361180;
      if ( qword_1C0361180 )
        goto LABEL_83;
    }
  }
}
