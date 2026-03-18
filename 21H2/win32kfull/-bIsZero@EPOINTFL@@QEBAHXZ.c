/*
 * XREFs of ?bIsZero@EPOINTFL@@QEBAHXZ @ 0x1C00911B8
 * Callers:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EPOINTFL::bIsZero(EPOINTFL *this)
{
  return *(float *)this == 0.0 && *((float *)this + 1) == 0.0;
}
