/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800EE800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  char result; // al

  result = 0;
  if ( !*((_BYTE *)this + 50) && *((_DWORD *)this + 9) == 3 )
    return 1;
  return result;
}
