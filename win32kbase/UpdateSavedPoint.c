/*
 * XREFs of UpdateSavedPoint @ 0x1C0218D90
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 */

_DWORD *__fastcall UpdateSavedPoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax
  _DWORD *v5; // r8
  int v6; // edx

  result = (_DWORD *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  v5 = result;
  if ( result )
  {
    *((_QWORD *)gpsi + 619) = 0LL;
    v6 = *((_DWORD *)gpsi + 1241);
    result[15] = *((_DWORD *)gpsi + 1240);
    result[16] = v6;
    result[17] = 18;
    result = (_DWORD *)gptCursorAsync;
    *((_QWORD *)v5 + 431) = 0LL;
    *((_QWORD *)v5 + 430) = result;
  }
  return result;
}
