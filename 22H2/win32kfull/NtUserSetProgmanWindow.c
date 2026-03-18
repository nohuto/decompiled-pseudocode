/*
 * XREFs of NtUserSetProgmanWindow @ 0x1C01DC900
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _SetProgmanWindow @ 0x1C02305DC (_SetProgmanWindow.c)
 */

__int64 __fastcall NtUserSetProgmanWindow(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v11; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  v2 = 0;
  if ( a1 )
  {
    v3 = ValidateHwnd(a1);
    if ( !v3 )
      goto LABEL_6;
  }
  else
  {
    v3 = 0LL;
  }
  v2 = SetProgmanWindow(v3);
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11, v4, v5);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v2;
}
