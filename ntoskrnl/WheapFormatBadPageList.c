/*
 * XREFs of WheapFormatBadPageList @ 0x14060FF08
 * Callers:
 *     WheapInsertPageToList @ 0x140610044 (WheapInsertPageToList.c)
 * Callees:
 *     qsort_s @ 0x1403D4C90 (qsort_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

_UNKNOWN **__fastcall WheapFormatBadPageList(char *a1, unsigned int a2, unsigned int *a3)
{
  _UNKNOWN **result; // rax
  unsigned int v4; // ebx
  unsigned int v7; // edi
  char *v8; // rdx
  char *v9; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a2;
  if ( a2 > 1 )
  {
    qsort_s(a1, a2, 8uLL, WheapPfnComparisonHelper, 0LL);
    v7 = 0;
    do
    {
      result = (_UNKNOWN **)(v4 - 1);
      if ( v7 >= (unsigned int)result )
        break;
      v8 = &a1[8 * v7 + 8];
      v9 = &a1[8 * v7];
      result = *(_UNKNOWN ***)v8;
      if ( *(_QWORD *)v9 == *(_QWORD *)v8 )
      {
        result = (_UNKNOWN **)memmove(v9, v8, 8LL * (v4 - v7 - 1));
        --v4;
      }
      else
      {
        ++v7;
      }
    }
    while ( v4 > 1 );
  }
  if ( a3 )
    *a3 = v4;
  return result;
}
