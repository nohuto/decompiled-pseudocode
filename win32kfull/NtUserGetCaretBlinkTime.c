/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C00D7770
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C00D7810 (CheckGrantedAccess.c)
 */

__int64 __fastcall NtUserGetCaretBlinkTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx

  EnterSharedCrit(a1, a2, a3);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  v5 = 0;
  v6 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  if ( *v6 == gpepCSRSS )
    goto LABEL_7;
  v7 = PsGetCurrentProcessWin32Process(gpepCSRSS);
  if ( v7 )
    v7 &= -(__int64)(*(_QWORD *)v7 != 0LL);
  if ( (unsigned int)CheckGrantedAccess(*(unsigned int *)(v7 + 672), 2LL) )
  {
LABEL_7:
    v8 = gpsi;
    v5 = *(_DWORD *)(gpsi + 4984LL);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
