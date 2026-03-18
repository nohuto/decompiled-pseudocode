/*
 * XREFs of SymCryptFdefIntCopy @ 0x14040D16C
 * Callers:
 *     SymCryptIntCopy @ 0x140400B8C (SymCryptIntCopy.c)
 *     SymCryptFdefIntToDivisor @ 0x14040B088 (SymCryptFdefIntToDivisor.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall SymCryptFdefIntCopy(__int64 a1, __int64 a2)
{
  void *result; // rax

  if ( a1 != a2 )
    return memmove((void *)(a2 + 32), (const void *)(a1 + 32), (unsigned int)(*(_DWORD *)(a2 + 4) << 6));
  return result;
}
