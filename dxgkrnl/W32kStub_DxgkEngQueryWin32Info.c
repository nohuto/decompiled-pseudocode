/*
 * XREFs of W32kStub_DxgkEngQueryWin32Info @ 0x1C0392500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kStub_DxgkEngQueryWin32Info(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) != 4 )
    return 3221225485LL;
  if ( *(_DWORD *)a1 == 2 )
  {
    **(_DWORD **)(a1 + 8) = 0;
  }
  else
  {
    if ( *(_DWORD *)a1 != 3 )
      return 3221225659LL;
    **(_BYTE **)(a1 + 8) = 0;
  }
  return 0LL;
}
