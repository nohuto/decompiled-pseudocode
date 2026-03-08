/*
 * XREFs of DpiIndirectCbNotifyCursorSupportChange @ 0x1C03A0040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiIndirectCbNotifyCursorSupportChange(__int64 a1)
{
  __int64 v1; // rdx
  _OWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 || !*(_BYTE *)(v1 + 1159) )
    return 3221225485LL;
  memset(v3, 0, sizeof(v3));
  LODWORD(v3[0]) = 13;
  return SMgrGdiCallout(v3, *(_QWORD *)(v1 + 5744), 0LL, 0LL, 0LL, 0LL);
}
