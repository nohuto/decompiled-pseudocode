/*
 * XREFs of ViThunkCreateThunkTable @ 0x1409D9F84
 * Callers:
 *     VfThunkAddDriverThunks @ 0x1409D9830 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409D98B4 (VfThunkAddSpecialDriverThunks.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall ViThunkCreateThunkTable(void *Src, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  char *result; // rax
  __int64 v7; // rbx

  v4 = a2 >> 4;
  result = (char *)ExAllocatePoolWithTag(PagedPool, 16 * (v4 + 2), 0x74566D4Du);
  v7 = (__int64)result;
  if ( result )
  {
    memmove(result + 32, Src, 16 * v4);
    result = (char *)v7;
    *(_QWORD *)(v7 + 16) = a3;
    *(_DWORD *)(v7 + 24) = v4;
  }
  return result;
}
