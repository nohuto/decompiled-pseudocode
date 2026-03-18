/*
 * XREFs of SymCryptFdefSizeofIntFromDigits @ 0x14040551C
 * Callers:
 *     SymCryptSizeofIntFromDigits @ 0x1403F9410 (SymCryptSizeofIntFromDigits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefSizeofIntFromDigits(int a1)
{
  if ( (unsigned int)(a1 - 1) > 0x7FF )
    return 0LL;
  else
    return (unsigned int)((a1 << 6) + 32);
}
