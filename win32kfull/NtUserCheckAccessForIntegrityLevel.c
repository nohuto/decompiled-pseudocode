/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C01CE4A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C0099860 (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(__int64 a1, __int64 a2, _DWORD *a3)
{
  void *v4; // rsi
  void *v5; // rbx
  unsigned int v6; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r8d
  _DWORD *v16; // rdx
  PVOID v17; // rcx
  PVOID v19; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = (void *)(int)a2;
  v5 = (void *)(int)a1;
  EnterSharedCrit(a1, a2, a3);
  v19 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v11 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v9 = -*(_QWORD *)ProcessWin32Process;
    v8 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v11 = v8 & ProcessWin32Process;
  }
  if ( !v11 )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v9, v8, v10) != gpepCSRSS )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( v11 != CurrentProcessWin32Process )
    {
      v6 = -1073741790;
      goto LABEL_17;
    }
  }
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&v19) < 0
    || (v13 = PsGetProcessWin32Process(v19)) == 0
    || (v14 = -(__int64)(*(_QWORD *)v13 != 0LL) & v13) == 0 )
  {
LABEL_2:
    v6 = -1073741811;
    goto LABEL_17;
  }
  v15 = (unsigned __int8)CheckAccess(v11 + 864, v14 + 864);
  v16 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v16 = *v16;
  *a3 = v15;
  v6 = 0;
LABEL_17:
  if ( Object )
    ObfDereferenceObject(Object);
  v17 = v19;
  if ( v19 )
    ObfDereferenceObject(v19);
  UserSessionSwitchLeaveCrit(v17);
  return v6;
}
