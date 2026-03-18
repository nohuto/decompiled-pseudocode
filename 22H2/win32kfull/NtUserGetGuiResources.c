/*
 * XREFs of NtUserGetGuiResources @ 0x1C0015050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetGuiResources(HANDLE Handle, unsigned int a2)
{
  PVOID v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int *v14; // rax
  unsigned int PeakHandleCount; // eax
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  __int64 ProcessWin32Process; // rax
  unsigned int v20; // edi
  unsigned int v21; // edi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  EnterSharedCrit();
  v9 = 0;
  if ( a2 > 4 )
    goto LABEL_12;
  if ( Handle == (HANDLE)-2LL )
  {
    if ( a2 )
    {
      v12 = a2 - 1;
      if ( !v12 )
      {
        v14 = (unsigned int *)giheCount;
        goto LABEL_19;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 2 )
          goto LABEL_11;
        v14 = (unsigned int *)giheCountPeak;
LABEL_19:
        v9 = *v14;
        goto LABEL_11;
      }
      PeakHandleCount = GreGetPeakHandleCount();
    }
    else
    {
      PeakHandleCount = GreGetHandleCount();
    }
    v9 = PeakHandleCount;
    goto LABEL_11;
  }
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v7 = (_DWORD *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v6 = -*(_QWORD *)CurrentProcessWin32Process;
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v7 = (_DWORD *)(v5 & CurrentProcessWin32Process);
    }
    goto LABEL_6;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v4 = Object;
  if ( v16 < 0 )
  {
LABEL_12:
    UserSetLastError(87LL);
    goto LABEL_11;
  }
  v18 = *(_DWORD *)SGDGetUserSessionState(v17);
  if ( (unsigned int)PsGetProcessSessionId(v4) != v18 )
    goto LABEL_27;
  ProcessWin32Process = PsGetProcessWin32Process(v4);
  v7 = (_DWORD *)ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v6 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v7 = (_DWORD *)(v6 & ProcessWin32Process);
  }
LABEL_6:
  if ( v7 )
  {
    if ( a2 )
    {
      v20 = a2 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 2 )
            v9 = v7[18];
        }
        else
        {
          v9 = v7[16];
        }
      }
      else
      {
        v9 = v7[17];
      }
    }
    else
    {
      v9 = v7[15];
    }
    goto LABEL_9;
  }
LABEL_27:
  UserSetLastError(87LL);
LABEL_9:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
