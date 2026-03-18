/*
 * XREFs of NtUserWindowFromDC @ 0x1C00EDFF0
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C00EE034 (_WindowFromDC.c)
 */

__int64 __fastcall NtUserWindowFromDC(HDC a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx

  EnterSharedCrit(a1, a2, a3);
  v4 = (__int64 *)WindowFromDC(a1);
  v6 = 0LL;
  if ( v4 )
    v6 = *v4;
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
