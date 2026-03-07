__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v4; // r12d
  KPROCESSOR_MODE v5; // r13
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // rax
  void *ProcessWin32WindowStation; // rdi
  int v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  BOOLEAN v21; // al
  int v22; // ecx
  unsigned int v23; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  PVOID *v32; // rdi
  _QWORD *v33; // rcx
  PVOID *v34; // rdx
  ULONG v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 ThreadWin32Thread; // rax
  struct _OBJECT_HANDLE_INFORMATION HandleAttributes; // [rsp+48h] [rbp-19h] BYREF
  PVOID Object; // [rsp+50h] [rbp-11h] BYREF
  void *TargetHandle; // [rsp+58h] [rbp-9h] BYREF
  __int128 v43; // [rsp+60h] [rbp-1h] BYREF
  __int64 v44; // [rsp+70h] [rbp+Fh]
  __int128 v45; // [rsp+78h] [rbp+17h] BYREF
  __int64 v46; // [rsp+88h] [rbp+27h]
  PVOID v47; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v5 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2, a3);
  TargetHandle = 0LL;
  HandleAttributes = 0LL;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ProcessWin32Process;
  if ( ProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v5, &Object, &HandleAttributes);
  v13 = Object;
  v14 = v11;
  if ( v11 < 0 )
  {
    v35 = RtlNtStatusToDosError(v11);
    UserSetLastError(v35);
    return v14;
  }
  if ( *v13 != *(_DWORD *)SGDGetUserSessionState(v12) )
  {
    UserSetLastError(87);
    ObfDereferenceObject(v13);
    return 3221225485LL;
  }
  if ( v10 )
  {
    v15 = *(_QWORD *)(v10 + 656);
    if ( v15 )
    {
      if ( (_DWORD *)v15 != v13 )
      {
        v26 = v15 + 112;
        v27 = *(_QWORD *)(v15 + 112);
        if ( v27 && *(_QWORD *)(*(_QWORD *)(v27 + 16) + 424LL) == v10 )
        {
          if ( v4 )
          {
            HMAssignmentUnlock(v26);
          }
          else
          {
            v44 = 0LL;
            v46 = 0LL;
            v43 = 0LL;
            v45 = 0LL;
            PushW32ThreadLock((__int64)v13, &v43, UserDereferenceObject);
            ThreadLockAlways(*(_QWORD *)(*(_QWORD *)(v10 + 656) + 112LL), &v45);
            xxxDisownClipboard(*(struct tagWND **)(*(_QWORD *)(v10 + 656) + 112LL));
            ThreadUnlock1(v37, v36, v38);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(ThreadWin32Thread + 16) = v43;
          }
        }
        v28 = *(_QWORD *)(v10 + 656) + 96LL;
        if ( *(_QWORD *)v28 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 16LL) + 424LL) == v10 )
        {
          HMAssignmentUnlock(v28);
          *(_QWORD *)(*(_QWORD *)(v10 + 656) + 80LL) = 0LL;
        }
        v29 = *(_QWORD *)(v10 + 656);
        v30 = *(_QWORD *)(v29 + 80);
        if ( v30 && *(_QWORD *)(v30 + 424) == v10 )
          *(_QWORD *)(v29 + 80) = 0LL;
        v31 = *(_QWORD *)(v10 + 656) + 104LL;
        if ( *(_QWORD *)v31 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 16LL) + 424LL) == v10 )
          HMAssignmentUnlock(v31);
        v32 = (PVOID *)(*(_QWORD *)(v10 + 656) + 152LL);
        while ( 1 )
        {
          v33 = *v32;
          if ( !*v32 )
            break;
          v34 = (PVOID *)(v33 + 30);
          if ( *(_QWORD *)(v33[2] + 424LL) == v10 )
          {
            v47 = *v32;
            *v32 = *v34;
            *v34 = 0LL;
            *((_DWORD *)v47 + 80) &= ~0x800000u;
            HMAssignmentUnlock(&v47);
          }
          else
          {
            v32 = (PVOID *)(v33 + 30);
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(v10 + 664) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v13);
      return 3221225495LL;
    }
    v25 = *(_QWORD *)(v10 + 664);
    if ( v25 )
      SetHandleFlag(v25, 1LL, 0LL);
  }
  LockObjectAssignment(v10 + 656, v13);
  ObfDereferenceObject(v13);
  *(_QWORD *)(v10 + 664) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    v47 = 0LL;
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v5, &v47, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v13 != v47 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v47);
    }
  }
  if ( !PsGetProcessWin32WindowStation(CurrentProcess)
    && ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) >= 0 )
  {
    PsSetProcessWindowStation(CurrentProcess, TargetHandle);
  }
  v17 = *(_DWORD *)(v10 + 12);
  *(_DWORD *)(v10 + 672) = HandleAttributes.GrantedAccess;
  v18 = v17;
  v19 = v17 & 0xFFFBFFFF;
  v20 = v18 | 0x40000;
  if ( (v13[16] & 4) == 0 )
    v19 = v20;
  *(_DWORD *)(v10 + 12) = v19;
  v21 = RtlAreAllAccessesGranted(HandleAttributes.GrantedAccess, 0x200u);
  v22 = *(_DWORD *)(v10 + 12);
  if ( v21 )
    v23 = v22 | 0x10;
  else
    v23 = v22 & 0xFFFFFFEF;
  *(_DWORD *)(v10 + 12) = v23;
  return 0LL;
}
