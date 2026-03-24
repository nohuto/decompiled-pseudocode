/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C01F7030
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C003C118 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(int a1, int a2, _DWORD *a3)
{
  void *v4; // rsi
  void *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ProcessWin32Process; // rbx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // r8d
  _DWORD *v13; // rdx
  PVOID v14; // rcx
  PVOID v16; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = (void *)a2;
  v5 = (void *)a1;
  EnterSharedCrit(0LL, 1LL);
  v16 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v8, v7, v10) != gpepCSRSS
    && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS) )
  {
    v6 = -1073741790;
    goto LABEL_12;
  }
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&v16) < 0 || (v11 = PsGetProcessWin32Process(v16)) == 0 )
  {
LABEL_2:
    v6 = -1073741811;
    goto LABEL_12;
  }
  v12 = (unsigned __int8)CheckAccess(ProcessWin32Process + 880, v11 + 880);
  v13 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = *v13;
  *a3 = v12;
  v6 = 0;
LABEL_12:
  if ( Object )
    ObfDereferenceObject(Object);
  v14 = v16;
  if ( v16 )
    ObfDereferenceObject(v16);
  UserSessionSwitchLeaveCrit(v14);
  return v6;
}
