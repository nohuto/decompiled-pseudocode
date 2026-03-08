/*
 * XREFs of UserIsCurrentSessionHostServiceSession @ 0x1C00D3BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentSessionHostServiceSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ecx
  _BOOL8 result; // rax

  v4 = *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4);
  result = 0LL;
  if ( v4 == gServiceSessionId )
    return gServiceSessionId == 0;
  return result;
}
