/*
 * XREFs of HvpFillFileName @ 0x14072F4B8
 * Callers:
 *     HvHiveStartFileBacked @ 0x14072F1D4 (HvHiveStartFileBacked.c)
 *     HvHiveStartMemoryBacked @ 0x1407FF060 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall HvpFillFileName(__int64 a1, unsigned __int16 *a2)
{
  void *v2; // rdi
  void *result; // rax
  unsigned int v5; // r10d
  int v6; // r9d
  size_t v7; // r8

  v2 = (void *)(a1 + 48);
  result = memset((void *)(a1 + 48), 0, 0x40uLL);
  v5 = 0;
  if ( a2 )
  {
    v6 = *a2;
    v7 = 62LL;
    if ( (unsigned __int16)v6 >= 0x40u )
      v5 = v6 - 62;
    else
      v7 = *a2;
    return memmove(v2, (const void *)(*((_QWORD *)a2 + 1) + v5), v7);
  }
  return result;
}
