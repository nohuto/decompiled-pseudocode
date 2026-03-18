/*
 * XREFs of NtUserAssociateInputContext @ 0x1C0106D30
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1C0106DEC (-AssociateInputContextEx@@YA-AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  char v13; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_10;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, v6);
    goto LABEL_10;
  }
  if ( a2 )
  {
    v9 = HMValidateHandle(a2, 0x11u);
    if ( v9 )
      goto LABEL_5;
LABEL_10:
    v10 = 2;
    goto LABEL_6;
  }
  v9 = 0LL;
LABEL_5:
  v10 = AssociateInputContextEx(v7, v9, a3);
LABEL_6:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13, v6, v8);
  UserSessionSwitchLeaveCrit(v11);
  return v10;
}
