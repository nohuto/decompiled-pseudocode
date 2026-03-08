/*
 * XREFs of EnableMouseAcceleration @ 0x1C00D3E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnableMouseAcceleration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 result; // rax

  v4 = a1;
  result = SGDGetUserSessionState(a1, a2, a3, a4);
  *(_BYTE *)(*(_QWORD *)(result + 16008) + 112LL) = v4;
  return result;
}
