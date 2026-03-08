/*
 * XREFs of NtUserDestroyInputContext @ 0x1C01CF610
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01B88F4 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  int v2; // ebx
  struct tagIMC *v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v6);
  if ( (*gpsi & 4) != 0 )
  {
    v3 = (struct tagIMC *)HMValidateHandle(a1, 0x11u);
    v2 = 0;
    if ( v3 )
      v2 = DestroyInputContext(v3);
  }
  else
  {
    UserSetLastError(120);
    v2 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v6);
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
