/*
 * XREFs of PiDqSerializationWrite @ 0x14078A540
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

unsigned __int64 __fastcall PiDqSerializationWrite(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned __int64 result; // rax

  v5 = *(unsigned int *)(a1 + 12);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) - v5);
  if ( (unsigned int)result < a3 )
  {
    *(_BYTE *)(a1 + 28) = 1;
  }
  else
  {
    result = (unsigned __int64)memmove((void *)(*(_QWORD *)a1 + v5), a2, a3);
    *(_DWORD *)(a1 + 12) += a3;
  }
  return result;
}
