/*
 * XREFs of NtUserShowCaret @ 0x1C00060A0
 * Callers:
 *     <none>
 * Callees:
 *     zzzShowCaret @ 0x1C0006108 (zzzShowCaret.c)
 */

__int64 __fastcall NtUserShowCaret(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax

  EnterCrit(0LL, 0LL);
  v2 = 0;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_3;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    v2 = zzzShowCaret(v3);
  UserSessionSwitchLeaveCrit();
  return v2;
}
