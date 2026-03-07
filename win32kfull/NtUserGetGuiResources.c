__int64 __fastcall NtUserGetGuiResources(HANDLE Handle, unsigned int a2)
{
  PVOID v4; // rbp
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 CurrentProcessWin32Process; // rax
  _DWORD *v8; // r8
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int *v12; // rax
  unsigned int PeakHandleCount; // eax
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  int v16; // ebx
  __int64 ProcessWin32Process; // rax
  unsigned int v18; // edi
  unsigned int v19; // edi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  EnterSharedCrit();
  v6 = 0;
  if ( a2 > 4 )
    goto LABEL_12;
  if ( Handle == (HANDLE)-2LL )
  {
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( !v10 )
      {
        v12 = (unsigned int *)giheCount;
        goto LABEL_19;
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 2 )
          goto LABEL_11;
        v12 = (unsigned int *)giheCountPeak;
LABEL_19:
        v6 = *v12;
        goto LABEL_11;
      }
      PeakHandleCount = GreGetPeakHandleCount();
    }
    else
    {
      PeakHandleCount = GreGetHandleCount();
    }
    v6 = PeakHandleCount;
    goto LABEL_11;
  }
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v8 = (_DWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v5 = -*(_QWORD *)CurrentProcessWin32Process;
      v8 = (_DWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
    }
    goto LABEL_6;
  }
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v4 = Object;
  if ( v14 < 0 )
  {
LABEL_12:
    UserSetLastError(87LL);
    goto LABEL_11;
  }
  v16 = *(_DWORD *)SGDGetUserSessionState(v15);
  if ( (unsigned int)PsGetProcessSessionId(v4) != v16 )
    goto LABEL_27;
  ProcessWin32Process = PsGetProcessWin32Process(v4);
  v8 = (_DWORD *)ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v5 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v8 = (_DWORD *)(v5 & ProcessWin32Process);
  }
LABEL_6:
  if ( v8 )
  {
    if ( a2 )
    {
      v18 = a2 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 2 )
            v6 = v8[18];
        }
        else
        {
          v6 = v8[16];
        }
      }
      else
      {
        v6 = v8[17];
      }
    }
    else
    {
      v6 = v8[15];
    }
    goto LABEL_9;
  }
LABEL_27:
  UserSetLastError(87LL);
LABEL_9:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_11:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
