/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x1C01F7DE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _ImpersonateDdeClientWindow @ 0x1C02179A0 (_ImpersonateDdeClientWindow.c)
 */

__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  char v14; // [rsp+40h] [rbp+18h] BYREF

  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
  v5 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v5;
  if ( v5 )
  {
    v10 = ValidateHwnd(a2);
    if ( v10 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v6 = *(_QWORD *)(v10 + 16);
      if ( v6 == ThreadWin32Thread )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) == *(_QWORD *)(v6 + 424) )
          v8 = 1;
        else
          v8 = ImpersonateDdeClientWindow(v9, v10);
      }
      else
      {
        UserSetLastError(87LL, v6);
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, v6, v7);
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
