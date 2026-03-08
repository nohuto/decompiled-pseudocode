/*
 * XREFs of NtUserUnregisterHotKey @ 0x1C00B62A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C00B632C (-_UnregisterHotKey@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall NtUserUnregisterHotKey(__int64 a1, int a2)
{
  int v4; // ebx
  struct tagWND *v5; // rax
  __int64 v6; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v8);
  v4 = 0;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    v4 = _UnregisterHotKey(v5, a2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v8);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
