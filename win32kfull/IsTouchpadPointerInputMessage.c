/*
 * XREFs of IsTouchpadPointerInputMessage @ 0x1C014420E
 * Callers:
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01C6C2C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTouchpadPointerInputMessage(int a1)
{
  return (unsigned int)(a1 - 577) <= 3 || (unsigned int)(a1 - 581) <= 5 || (unsigned int)(a1 - 593) <= 2;
}
