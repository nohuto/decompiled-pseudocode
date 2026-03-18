/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C01F1A90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(__int64 a1, __int64 a2, _DWORD *a3)
{
  void *v4; // rsi
  void *v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ProcessWin32Process; // rbx
  __int64 v10; // rax
  int v11; // r8d
  _DWORD *v12; // rdx
  PVOID v13; // rcx
  PVOID v15; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = (void *)(int)a2;
  v5 = (void *)(int)a1;
  EnterSharedCrit(a1, a2, a3);
  v15 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v8, v7) != gpepCSRSS && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS) )
  {
    v6 = -1073741790;
    goto LABEL_12;
  }
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&v15) < 0 || (v10 = PsGetProcessWin32Process(v15)) == 0 )
  {
LABEL_2:
    v6 = -1073741811;
    goto LABEL_12;
  }
  v11 = (unsigned __int8)CheckAccess(ProcessWin32Process + 880, v10 + 880);
  v12 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v12 = (_DWORD *)MmUserProbeAddress;
  *v12 = *v12;
  *a3 = v11;
  v6 = 0;
LABEL_12:
  if ( Object )
    ObfDereferenceObject(Object);
  v13 = v15;
  if ( v15 )
    ObfDereferenceObject(v15);
  UserSessionSwitchLeaveCrit(v13);
  return v6;
}
