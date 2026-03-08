/*
 * XREFs of ?StartCompositionEarly@CFlipExBuffer@@UEBA_NXZ @ 0x1C007DEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipExBuffer::StartCompositionEarly(CFlipExBuffer *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 627) )
  {
    if ( *((_BYTE *)this + 629) )
      return *((_DWORD *)this + 96) == 0;
  }
  return result;
}
