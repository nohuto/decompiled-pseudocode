/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x1C0042860
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(HPALETTE a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
