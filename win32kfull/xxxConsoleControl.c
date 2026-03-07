__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  void *v11; // rcx
  __int64 v12; // rcx
  PVOID v13; // r15
  int v14; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v16; // r8
  unsigned int v17; // edx
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  char *v28; // rcx
  _QWORD *v29; // r12
  _DWORD *v30; // rbx
  char *v31; // rax
  __int64 v32; // rax
  __int64 CurrentProcess; // [rsp+60h] [rbp-68h]
  __int128 v34; // [rsp+78h] [rbp-50h] BYREF
  __int64 v35; // [rsp+88h] [rbp-40h]
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 != 8 )
      return (unsigned int)-1073741811;
    return (unsigned int)xxxUserNotifyConsoleApplication(a2);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5420LL);
    v19 = -1073741637;
    if ( a3 != 24 )
      return (unsigned int)-1073741811;
    return v19;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 == 24 )
    {
      xxxSetConsoleCaretInfo(a2);
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 == 16 )
    {
      v32 = ValidateHwnd(*(_QWORD *)a2);
      if ( v32 )
      {
        *(_DWORD *)(*(_QWORD *)(v32 + 16) + 884LL) = *((_DWORD *)a2 + 2);
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return (unsigned int)-1073741821;
    if ( a3 == 16 )
    {
      v20 = ValidateHwnd(*(_QWORD *)a2);
      v21 = v20;
      if ( !v20 )
        return v5;
      v22 = v20 + 40;
      v23 = *(_QWORD *)(v20 + 40);
      if ( (*(_BYTE *)(v23 + 18) & 4) != 0 || *(char *)(v23 + 19) < 0 || *(int *)(v23 + 200) < 8 )
        return v5;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
      v25 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v25 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      if ( *(_QWORD *)(*(_QWORD *)(v21 + 16) + 424LL) != v25 )
        return (unsigned int)-1073741790;
      v34 = 0LL;
      v35 = 0LL;
      ThreadLock(v21, &v34);
      v28 = *(char **)v22;
      v29 = (_QWORD *)(v21 + 24);
      if ( (*(_DWORD *)(*(_QWORD *)v22 + 232LL) & 0x10) != 0 )
      {
        v30 = (_DWORD *)(*((_QWORD *)v28 + 37) + *(_QWORD *)(*v29 + 128LL));
      }
      else
      {
        v30 = (_DWORD *)DesktopAlloc(*v29, *((unsigned int *)v28 + 50), 0LL);
        if ( !v30 )
        {
          v5 = -1073741801;
LABEL_41:
          ThreadUnlock1(v28, v26, v27);
          return v5;
        }
        if ( *(_QWORD *)(*(_QWORD *)v22 + 296LL) )
        {
          CurrentProcess = PsGetCurrentProcess(v28, v26, v27);
          v31 = *(char **)v22;
          LODWORD(Object) = *(_DWORD *)(*(_QWORD *)v22 + 200LL);
          memmove(v30, *((const void **)v31 + 37), (int)Object);
          if ( (*(_DWORD *)(CurrentProcess + 1124) & 0x40000008) == 0 )
            xxxClientFreeWindowClassExtraBytes(v21, *(_QWORD *)(*(_QWORD *)v22 + 296LL));
        }
        v28 = (char *)v30 - *(_QWORD *)(*v29 + 128LL);
        *(_QWORD *)(*(_QWORD *)v22 + 296LL) = v28;
      }
      if ( v30 )
      {
        *v30 = *((_DWORD *)a2 + 2);
        v30[1] = *((_DWORD *)a2 + 3);
      }
      *(_DWORD *)(*(_QWORD *)v22 + 232LL) |= 0x10u;
      goto LABEL_41;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 16 )
    return (unsigned int)-1073741811;
  v11 = *(void **)a2;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(v11, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v13 = Object;
  if ( (v5 & 0x80000000) == 0 )
  {
    v14 = *(_DWORD *)SGDGetUserSessionState(v12);
    if ( (unsigned int)PsGetProcessSessionId(v13) == v14 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(v13);
      v16 = ProcessWin32Process;
      if ( ProcessWin32Process )
        v16 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
      if ( v16 )
      {
        v17 = *(_DWORD *)(v16 + 12) | 0x4080000;
        if ( !*((_DWORD *)a2 + 2) )
          v17 = *(_DWORD *)(v16 + 12) & 0xFBF7FFFF;
        *(_DWORD *)(v16 + 12) = v17;
      }
      else
      {
        v5 = -1073741816;
      }
    }
    else
    {
      v5 = -1073741811;
    }
    ObfDereferenceObject(v13);
  }
  return v5;
}
