/*
 * XREFs of NtUserGetCaretBlinkTime @ 0x1C00A16D0
 * Callers:
 *     <none>
 * Callees:
 *     CheckGrantedAccess @ 0x1C00A1770 (CheckGrantedAccess.c)
 */

__int64 __fastcall NtUserGetCaretBlinkTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // ebx
  _QWORD *v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx

  EnterSharedCrit(a1, a2, a3);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  v7 = 0;
  v8 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v8 = (_QWORD *)(v5 & CurrentProcessWin32Process);
  }
  if ( *v8 == gpepCSRSS )
    goto LABEL_7;
  v9 = PsGetCurrentProcessWin32Process(gpepCSRSS);
  if ( v9 )
    v9 &= -(__int64)(*(_QWORD *)v9 != 0LL);
  if ( (unsigned int)CheckGrantedAccess(*(unsigned int *)(v9 + 672), 2LL) )
  {
LABEL_7:
    v10 = gpsi;
    v7 = *(_DWORD *)(gpsi + 4984LL);
  }
  UserSessionSwitchLeaveCrit(v10, v5, v8, v6);
  return v7;
}
