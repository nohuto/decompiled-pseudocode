/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C001FAA0
 * Callers:
 *     <none>
 * Callees:
 *     zzzUnhookWindowsHookEx @ 0x1C001FAF4 (zzzUnhookWindowsHookEx.c)
 *     HMValidateHandle @ 0x1C00670E0 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  struct tagHOOK *v3; // rax
  __int64 v4; // rcx
  int v5; // ebx

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 5;
  v3 = (struct tagHOOK *)HMValidateHandle(a1, v2);
  v5 = 0;
  if ( v3 )
    v5 = zzzUnhookWindowsHookEx(v3);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
