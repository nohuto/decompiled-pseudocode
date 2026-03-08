/*
 * XREFs of HalpInterruptIsCmciSupported @ 0x1403A99D0
 * Callers:
 *     HalpIsCmciImplemented @ 0x140A8E988 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x14028EE80 (HalpInterruptFindLines.c)
 */

bool HalpInterruptIsCmciSupported()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+34h] [rbp+Ch]

  if ( *(_DWORD *)(HalpInterruptController + 240) != 2 )
    return 0;
  v1 = *(_DWORD *)(HalpInterruptController + 256);
  v2 = -7;
  return HalpInterruptFindLines(&v1) != 0LL;
}
