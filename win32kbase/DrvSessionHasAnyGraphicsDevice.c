/*
 * XREFs of DrvSessionHasAnyGraphicsDevice @ 0x1C00D87D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 */

__int64 __fastcall DrvSessionHasAnyGraphicsDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v5 = 1;
  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
    WdLogSingleEntry0(1LL);
  if ( gProtocolType != -1 )
  {
    v6 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
    if ( gProtocolType )
      v7 = *(_QWORD *)(v6 + 1344);
    else
      v7 = *(_QWORD *)(v6 + 1352);
    if ( !v7 || (*(_DWORD *)(v7 + 160) & 0x2000000) != 0 && !*(_QWORD *)(v7 + 128) )
      return 0;
  }
  return v5;
}
