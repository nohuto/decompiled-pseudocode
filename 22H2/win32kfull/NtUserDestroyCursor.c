/*
 * XREFs of NtUserDestroyCursor @ 0x1C0028C50
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002B6EC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  AtomicExecutionCheck *v4; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _BOOL8 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::EnforceConsistency(v4);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  LOBYTE(v6) = 3;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v7 = HMValidateHandle(a1, v6);
  v11 = 0LL;
  v12 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v19 = 87LL;
LABEL_13:
        UserSetLastError(v19);
        goto LABEL_6;
      }
    }
    else if ( PsGetCurrentProcess(v9, v8, v10) != gpepCSRSS )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpepCSRSS);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( *(_QWORD *)(v12 + 24) != CurrentProcessWin32Process )
      {
LABEL_12:
        v19 = 5LL;
        goto LABEL_13;
      }
    }
    if ( *(_QWORD *)(v12 + 48) == v12 )
    {
      v11 = _DestroyCursor((struct tagCURSOR *)v12, a2);
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_6:
  v13 = PsGetCurrentThreadWin32Thread();
  --*(_DWORD *)(v13 + 48);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v11;
}
