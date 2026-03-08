/*
 * XREFs of ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1C00F33A0
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C020E594 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CPTPProcessor::IsOurKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = 0;
  v5 = (unsigned __int8)a1;
  if ( !(_BYTE)a2
    && !_InterlockedCompareExchange64(
          (volatile signed __int64 *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3560),
          0LL,
          0LL) )
  {
    return 0;
  }
  if ( (unsigned __int8)(v5 - 48) <= 0x3Fu )
  {
    v7 = 0xFFFF07FFFFFE03FFuLL;
    if ( _bittest64((const __int64 *)&v7, (unsigned int)(v5 - 48)) )
      return 1;
  }
  if ( (unsigned __int8)v5 <= 0x20u )
  {
    v8 = 0x100002200LL;
    if ( _bittest64(&v8, v5) )
      return 1;
  }
  LOBYTE(v5) = v5 + 70;
  if ( (unsigned __int8)v5 <= 0x25u )
  {
    v9 = 0x3E0000007FLL;
    if ( _bittest64(&v9, v5) )
      return 1;
  }
  return v4;
}
