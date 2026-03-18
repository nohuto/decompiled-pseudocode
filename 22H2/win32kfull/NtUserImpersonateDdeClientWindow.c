/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x1C01D4F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01FB098 (_ImpersonateDdeClientWindow.c)
 */

__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdi
  struct tagTHREADINFO *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v20; // [rsp+40h] [rbp+18h] BYREF

  EnterSharedCrit(a1, a2, a3);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v20);
  v5 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v5;
  if ( v5 )
  {
    v10 = ValidateHwnd(a2);
    v13 = v10;
    if ( v10 )
    {
      v14 = *(struct tagTHREADINFO **)(v10 + 16);
      if ( v14 == PtiCurrentShared(v11, v6, v7, v12) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 424LL) == *((_QWORD *)v14 + 53) )
          v8 = 1;
        else
          v8 = ImpersonateDdeClientWindow(v9, v13);
      }
      else
      {
        UserSetLastError(87);
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v20, v6, v7);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v8;
}
