/*
 * XREFs of xxxDesktopThread @ 0x1C0069C00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0015028 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C003C7A8 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     xxxDesktopThreadWaiter @ 0x1C006A140 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C006A3B0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00BE0EC (xxxCleanupMotherDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // r12d
  int v3; // esi
  const WCHAR *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  const wchar_t *v8; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v10; // r15
  tagQ *v11; // r14
  __int64 v12; // rcx
  struct _KEVENT *v13; // rcx
  void *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ebx
  __int64 v23; // rcx
  unsigned int v24; // r12d
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  LegacyInputDispatcher *v32; // rcx
  LegacyInputDispatcher *v33; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  PRKEVENT v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  struct _KEVENT *v52; // rcx
  bool v53; // zf
  void *v54; // rcx
  PRKEVENT v55; // rcx
  __int64 v56; // rax
  signed __int32 v57[8]; // [rsp+8h] [rbp-89h] BYREF
  char v58; // [rsp+38h] [rbp-59h]
  int v59; // [rsp+3Ch] [rbp-55h]
  int v60; // [rsp+40h] [rbp-51h]
  LegacyInputDispatcher *v61; // [rsp+48h] [rbp-49h] BYREF
  int ProcessInformation; // [rsp+50h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  PRKEVENT v64; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v65[9]; // [rsp+70h] [rbp-21h]

  v60 = 0;
  v58 = 0;
  v61 = 0LL;
  v2 = 0;
  DestinationString = 0LL;
  memset_0(&v64, 0, 0x50uLL);
  v3 = *(_DWORD *)a1 & 2;
  SetThreadBasePriority(KeGetCurrentThread(), v3 != 0 ? 12 : 16);
  if ( !v3 )
  {
    if ( qword_1C035E198 )
    {
      v59 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 836LL);
    }
    qword_1C035E198 = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  }
  v4 = L"IO_DT";
  if ( v3 )
    v4 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v4);
  if ( v3 )
  {
    v8 = L"Win32k Desktop Thread (NOIO_DT)";
  }
  else
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v6, v5, v7);
    if ( CurrentThreadWin32Thread )
      *(_DWORD *)(CurrentThreadWin32Thread + 44) |= 2u;
    v8 = L"Win32k Desktop Thread (IO_DT)";
  }
  SetThreadName(-2LL, v8);
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v3 || qword_1C035E198) )
  {
    ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread());
    *((_QWORD *)a1 + 2) = ThreadWin32Thread;
    v10 = ThreadWin32Thread;
    v11 = (tagQ *)*((_QWORD *)ThreadWin32Thread + 54);
    *((_QWORD *)a1 + 3) = v11;
    ++*((_DWORD *)v11 + 100);
    *((_QWORD *)ThreadWin32Thread + 58) = gpkdiStatic;
    *((_QWORD *)ThreadWin32Thread + 77) = 0LL;
    if ( (int)LegacyInputDispatcher::Create(&v61) < 0 )
    {
      *(_DWORD *)a1 |= 8u;
      _InterlockedOr(v57, 0);
      KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
      if ( !v3 )
      {
        v39 = qword_1C035E198;
LABEL_83:
        Win32FreePool(v39);
        qword_1C035E198 = 0LL;
      }
    }
    else
    {
      if ( !v3 )
      {
        v35 = 1;
        v64 = Feedback::gpevtPointerCursorOperation;
        v65[0] = OnPointerCursorOperation;
        if ( !gDWMCapable )
        {
          v40 = SGDGetUserSessionState(v12);
          v35 = 2;
          v41 = *(_QWORD *)(v40 + 16824);
          v65[2] = OnPTPMouseOperation;
          v65[1] = v41;
        }
        v2 = v35 + 1;
        v36 = 2LL * v35;
        v60 = v35 + 1;
        v65[v36 - 1] = qword_1C035E198;
        v65[v36] = lambda_e277e00ef720cdd7e05078d97cf7089b_::_lambda_invoker_cdecl_;
        v37 = *(unsigned int *)SGDGetUserSessionState(v36);
        if ( (_DWORD)v37 == gServiceSessionId )
        {
          v38 = SGDGetUserSessionState(v37);
          CBaseInput::InitializeSensor(*(CBaseInput **)(v38 + 3272));
          v58 = 1;
        }
        else if ( !gDWMCapable )
        {
          v58 = 1;
          v42 = SGDGetUserSessionState(v37);
          v43 = CBaseInput::InitializeSensor(*(CBaseInput **)(v42 + 3272));
          if ( v43 >= 0 )
          {
            if ( gProtocolType )
            {
              EnterCrit(1LL, 0LL);
              v46 = SGDGetUserSessionState(v45);
              CBaseInput::HandleTSRequest(*(_QWORD *)(v46 + 3272), 0LL);
              UserSessionSwitchLeaveCrit(v48, v47, v49, v50);
            }
            v51 = SGDGetUserSessionState(v44);
            CBaseInput::Read(*(CBaseInput **)(v51 + 3272));
          }
        }
      }
      EnterCrit(1LL, 0LL);
      v13 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
      *(_DWORD *)a1 |= 4u;
      KeSetEvent(v13, 1, 0);
      v14 = (void *)*((_QWORD *)a1 + 7);
      ObReferenceObjectByPointer(v14, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
      UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
      KeWaitForSingleObject(v14, WrUserRequest, 0, 0, 0LL);
      EnterCrit(1LL, 0LL);
      ObfDereferenceObject(v14);
      if ( (*(_DWORD *)a1 & 8) != 0 )
      {
        _InterlockedOr(v57, 0);
        if ( *((_QWORD *)a1 + 1) )
          xxxCleanupMotherDesktopWindow(a1);
        v52 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
        if ( v52 )
          KeSetEvent(v52, 1, 0);
        v53 = (*((_DWORD *)v11 + 100))-- == 1;
        if ( v53 && !tagQ::IsAnyThreadAttached(v11) && (*((_DWORD *)v11 + 99) & 0x4000000) != 0 )
        {
          v59 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1015LL);
        }
        v54 = (void *)*((_QWORD *)a1 + 7);
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        *(_DWORD *)a1 = 0;
        if ( v54 )
        {
          ObfDereferenceObject(v54);
          *((_QWORD *)a1 + 7) = 0LL;
        }
        if ( v58 )
          CleanupSensorExplicitly(0LL);
        v33 = v61;
        if ( v61 )
          LegacyInputDispatcher::`scalar deleting destructor'(v61);
        if ( !v3 )
        {
          v55 = qword_1C035E198;
          if ( !qword_1C035E198 )
          {
            v59 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1034LL);
            v55 = qword_1C035E198;
          }
          Win32FreePool(v55);
          qword_1C035E198 = 0LL;
        }
      }
      else
      {
        tagTERMINAL::SetDTEThread(a1);
        ProcessInformation = 1;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
        v22 = v2 + 1;
        v23 = 2LL * v2;
        v65[2 * v2 - 1] = *((_QWORD *)v10 + 182);
        if ( v2 + 1 > 5 )
        {
          v59 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1058LL);
        }
        if ( v3 || gDWMCapable )
        {
          v24 = v2 + 1;
        }
        else
        {
          SGDGetUserSessionState(v23);
          v24 = v2 + 10;
        }
        LegacyInputDispatcher::Initialize(v61, 1, 0, v24, v22, (struct LegacyDispatcherObject *)&v64);
        if ( v24 != v22 && !gDWMCapable )
        {
          v56 = SGDGetUserSessionState(v25);
          CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v56 + 3272), v61);
        }
        v26 = v60;
        *((_DWORD *)v61 + 15) = v60;
        if ( v3 )
          qword_1C035E1A8 = (__int64)v61;
        else
          qword_1C035E1A0 = (__int64)v61;
        do
        {
          do
            LOBYTE(v25) = 1;
          while ( (unsigned int)xxxDesktopThreadWaiter(v25, 0LL) != v26 );
        }
        while ( (unsigned int)xxxHandleDesktopMessages(v10, a1) );
        if ( a1 == (struct tagTERMINAL *)gTermIO[0] )
          gdwHydraHint |= 0x100000u;
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 8) = 0;
        *(_DWORD *)a1 = 0;
        v30 = *((_QWORD *)v10 + 57);
        if ( v30 )
        {
          HMAssignmentUnlock(v30 + 192);
          v31 = *(_QWORD **)(*((_QWORD *)v10 + 57) + 8LL);
          if ( v31[3] )
          {
            *(_QWORD *)(*v31 + 8LL) = 0LL;
            HMAssignmentUnlock(v31 + 3);
          }
        }
        *((_QWORD *)v10 + 58) = gpkdiStatic;
        if ( !*((_DWORD *)v11 + 100) )
        {
          v60 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1158LL);
        }
        --*((_DWORD *)v11 + 100);
        if ( *((tagQ **)v10 + 54) != v11 )
          zzzDestroyQueue(v11, v10);
        if ( v58 )
          CleanupSensorExplicitly(0LL);
        v32 = v61;
        if ( v61 )
          LegacyInputDispatcher::`scalar deleting destructor'(v61);
        v61 = 0LL;
        UserSessionSwitchLeaveCrit(v32, v27, v28, v29);
        if ( !v3 )
        {
          Win32FreePool(qword_1C035E198);
          qword_1C035E198 = 0LL;
        }
        ProcessInformation = 0;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
        EnterCrit(1LL, 0LL);
        tagTERMINAL::ClearDTEThread(a1);
      }
      UserSessionSwitchLeaveCrit(v33, v19, v20, v21);
    }
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v57, 0);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v3 )
    {
      v39 = qword_1C035E198;
      if ( qword_1C035E198 )
        goto LABEL_83;
    }
  }
}
