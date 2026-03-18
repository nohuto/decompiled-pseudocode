/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C00F2780
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  PVOID v5; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  int v9; // edi
  unsigned int v10; // ecx
  ULONG64 v11; // rcx
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v18; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v5 = 0LL;
  v18 = 0LL;
  EnterSharedCrit(Handle, a2, a3);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v9 = 1;
  }
  else
  {
    Object = 0LL;
    v9 = 1;
    v13 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v5 = Object;
    v18 = Object;
    if ( v13 < 0 )
    {
      UserSetLastError(87LL, v14);
      v9 = 0;
      goto LABEL_12;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v15 = 87LL;
      goto LABEL_17;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v5);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v10 = *(_DWORD *)(CurrentProcessWin32Process + 820);
    LODWORD(v16) = (v10 >> 4) & 3;
    HIDWORD(v16) = (v10 & 0x40) != 0;
    if ( (v10 & 0x100) != 0 )
      HIDWORD(v16) = ((v10 & 0x40) != 0) | 2;
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = v16;
    goto LABEL_10;
  }
  v15 = 1471LL;
LABEL_17:
  UserSetLastError(v15, v8);
  v9 = 0;
LABEL_10:
  if ( v5 )
    ObfDereferenceObject(v5);
LABEL_12:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
