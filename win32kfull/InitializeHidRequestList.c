/*
 * XREFs of InitializeHidRequestList @ 0x1C00F5870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall InitializeHidRequestList(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *result; // rax

  v1 = (_QWORD *)(SGDGetUserSessionState(a1) + 376);
  v1[1] = v1;
  *v1 = v1;
  v3 = (_QWORD *)(SGDGetUserSessionState(v2) + 392);
  v3[1] = v3;
  *v3 = v3;
  result = (_QWORD *)(SGDGetUserSessionState(v4) + 408);
  result[1] = result;
  *result = result;
  return result;
}
