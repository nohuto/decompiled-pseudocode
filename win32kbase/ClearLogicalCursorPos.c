/*
 * XREFs of ClearLogicalCursorPos @ 0x1C00D4180
 * Callers:
 *     InitLoadResources @ 0x1C0015CF0 (InitLoadResources.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 */

_DWORD *__fastcall ClearLogicalCursorPos(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax
  int v5; // edx

  result = (_DWORD *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( result )
  {
    v5 = *((_DWORD *)gpsi + 1241);
    result[15] = *((_DWORD *)gpsi + 1240);
    result[16] = v5;
    result[17] = 18;
  }
  return result;
}
