/*
 * XREFs of NtUserUpdateInputContext @ 0x1C00A7070
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z @ 0x1C00A7108 (-UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserUpdateInputContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int updated; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v15);
  if ( (*gpsi & 4) != 0 )
  {
    v6 = HMValidateHandle(a1, 0x11u);
    updated = 0;
    if ( v6 )
      updated = UpdateInputContext(v6, a2, a3);
  }
  else
  {
    UserSetLastError(120LL);
    updated = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v15, v7, v8);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return updated;
}
