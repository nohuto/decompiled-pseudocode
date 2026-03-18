/*
 * XREFs of SymCryptFdefIntCreate @ 0x14040D260
 * Callers:
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 * Callees:
 *     SymCryptFdefSizeofIntFromDigits @ 0x14040D570 (SymCryptFdefSizeofIntFromDigits.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

_DWORD *__fastcall SymCryptFdefIntCreate(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebp
  _DWORD *result; // rax

  v6 = SymCryptFdefSizeofIntFromDigits(a3);
  if ( a2 < v6 )
    SymCryptFatal(1768846435LL);
  result = a1;
  a1[1] = a3;
  a1[2] = v6;
  *a1 = 1732837376;
  return result;
}
