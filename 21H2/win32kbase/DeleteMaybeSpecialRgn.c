/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x1C009C0F0
 * Callers:
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(HRGN a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
