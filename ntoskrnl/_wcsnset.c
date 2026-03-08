/*
 * XREFs of _wcsnset @ 0x1403D4080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsnset(wchar_t *Str, wchar_t Val, size_t MaxCount)
{
  wchar_t *result; // rax

  result = Str;
  while ( MaxCount )
  {
    --MaxCount;
    if ( !*Str )
      break;
    *Str++ = Val;
  }
  return result;
}
