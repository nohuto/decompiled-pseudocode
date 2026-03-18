/*
 * XREFs of NtUserDestroyInputContext @ 0x1C0149860
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01498D8 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  struct tagIMC *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rcx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v8);
  if ( (*gpsi & 4) != 0 )
  {
    v2 = (struct tagIMC *)HMValidateHandle(a1, 0x11u);
    v5 = 0;
    if ( v2 )
      v5 = DestroyInputContext(v2);
  }
  else
  {
    UserSetLastError(120LL, gpsi);
    v5 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v8, v3, v4);
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
