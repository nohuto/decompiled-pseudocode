/*
 * XREFs of EditionUpdateModifiersForHotkey @ 0x1C00EBD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionUpdateModifiersForHotkey(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (_DWORD)a1 )
  {
    result = SGDGetUserSessionState(a1);
    *(_DWORD *)(result + 13792) &= ~a2;
  }
  else
  {
    result = SGDGetUserSessionState(a1);
    *(_DWORD *)(result + 13792) |= a2;
  }
  return result;
}
