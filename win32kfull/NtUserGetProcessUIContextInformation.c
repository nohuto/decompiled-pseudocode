__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r14
  PVOID v5; // rsi
  __int64 v6; // rcx
  int v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v12; // r8
  int v13; // ecx
  ULONG64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v17; // ecx
  __int64 v18; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v20; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v5 = 0LL;
  v20 = 0LL;
  EnterSharedCrit(Handle, a2, a3);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v12 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v7 = 1;
  }
  else
  {
    Object = 0LL;
    v7 = 1;
    v8 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v5 = Object;
    v20 = Object;
    if ( v8 < 0 )
    {
      UserSetLastError(87);
      v7 = 0;
      goto LABEL_15;
    }
    v10 = *(_DWORD *)SGDGetUserSessionState(v9);
    if ( (unsigned int)PsGetProcessSessionId(v5) != v10 )
    {
      v17 = 87;
      goto LABEL_22;
    }
    ProcessWin32Process = PsGetProcessWin32Process(v5);
    v12 = ProcessWin32Process;
    if ( ProcessWin32Process )
      v12 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  }
  if ( v12 && (*(_DWORD *)(v12 + 12) & 0x21) != 0 )
  {
    v13 = *(_DWORD *)(v12 + 812);
    HIDWORD(v18) = (v13 & 0x40) != 0;
    if ( (v13 & 0x100) != 0 )
      HIDWORD(v18) = ((v13 & 0x40) != 0) | 2;
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    LODWORD(v18) = (*(_DWORD *)(v12 + 812) >> 4) & 3;
    *v3 = v18;
    goto LABEL_13;
  }
  v17 = 1471;
LABEL_22:
  UserSetLastError(v17);
  v7 = 0;
LABEL_13:
  if ( v5 )
    ObfDereferenceObject(v5);
LABEL_15:
  UserSessionSwitchLeaveCrit(v14);
  return v7;
}
