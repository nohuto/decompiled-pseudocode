/*
 * XREFs of NtUserUpdateInputContext @ 0x1C003B580
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z @ 0x1C003B518 (-UpdateInputContext@@YAHPEAUtagIMC@@W4_UPDATEINPUTCONTEXTCLASS@@_K@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserUpdateInputContext(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  int updated; // ebx
  __int64 v9; // rcx
  char v11; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  if ( (*gpsi & 4) != 0 )
  {
    LOBYTE(v6) = 17;
    v7 = HMValidateHandle(a1, v6);
    updated = 0;
    if ( v7 )
      updated = UpdateInputContext(v7, a2, a3);
  }
  else
  {
    UserSetLastError(120LL);
    updated = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9);
  return updated;
}
