/*
 * XREFs of SymCryptFdefSizeofIntFromDigits @ 0x1403FFFFC
 * Callers:
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
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
