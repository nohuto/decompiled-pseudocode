/*
 * XREFs of _GetLocaleName @ 0x1800BBC98
 * Callers:
 *     _Getctype @ 0x1800B3B68 (_Getctype.c)
 *     _Getcvt @ 0x1800B3D8C (_Getcvt.c)
 *     _Getcoll @ 0x1800CED74 (_Getcoll.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetLocaleName(int a1)
{
  wchar_t *result; // rax

  result = _wsetlocale(a1, 0LL);
  if ( result )
  {
    if ( *result == 67 )
      result = (wchar_t *)(-(__int64)(result[1] != 0) & (unsigned __int64)result);
    if ( result )
      return _wcsdup(result);
  }
  return result;
}
