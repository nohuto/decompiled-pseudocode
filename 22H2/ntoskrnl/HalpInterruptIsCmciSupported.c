/*
 * XREFs of HalpInterruptIsCmciSupported @ 0x1403CF164
 * Callers:
 *     HalpIsCmciImplemented @ 0x140999C54 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x140378710 (HalpInterruptFindLines.c)
 */

bool HalpInterruptIsCmciSupported()
{
  bool result; // al
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+34h] [rbp+Ch]

  result = 0;
  if ( *(_DWORD *)(HalpInterruptController + 216) == 2 )
  {
    v1 = *(_DWORD *)(HalpInterruptController + 232);
    v2 = -7;
    if ( HalpInterruptFindLines(&v1) )
      return 1;
  }
  return result;
}
