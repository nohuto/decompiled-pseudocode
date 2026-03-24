/*
 * XREFs of NtUserWindowFromDC @ 0x1C0100540
 * Callers:
 *     <none>
 * Callees:
 *     _WindowFromDC @ 0x1C010059C (_WindowFromDC.c)
 */

__int64 __fastcall NtUserWindowFromDC(HDC a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( WindowFromDC(a1) )
    v3 = *(_QWORD *)WindowFromDC(a1);
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
