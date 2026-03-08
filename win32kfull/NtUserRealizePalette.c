/*
 * XREFs of NtUserRealizePalette @ 0x1C0148270
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealizePalette @ 0x1C0217A18 (xxxRealizePalette.c)
 */

__int64 __fastcall NtUserRealizePalette(HDC a1)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(a1) = xxxRealizePalette(a1);
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)a1;
}
