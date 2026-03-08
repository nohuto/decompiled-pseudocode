/*
 * XREFs of CcRemoveVacbArray @ 0x140535D48
 * Callers:
 *     CcDereferenceVacbArray @ 0x140535B1C (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

unsigned int **__fastcall CcRemoveVacbArray(unsigned int *a1)
{
  unsigned int v1; // edx
  __int64 v3; // r10
  int v4; // ecx
  _QWORD *v5; // r9
  int v6; // eax
  unsigned int *v7; // r9
  __int64 v8; // rcx
  unsigned int **result; // rax

  v1 = 0;
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x20DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *a1;
  if ( *(unsigned int **)(CcVacbArrays + 8 * v3) != a1 )
    KeBugCheckEx(0x34u, 0x213uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = CcVacbArraysHighestUsedIndex;
  if ( (_DWORD)v3 == CcVacbArraysHighestUsedIndex && CcVacbArraysHighestUsedIndex )
  {
    v5 = (_QWORD *)(CcVacbArrays + 8LL * (unsigned int)CcVacbArraysHighestUsedIndex);
    while ( !*v5 )
    {
      --v5;
      if ( !--v4 )
        goto LABEL_10;
    }
    CcVacbArraysHighestUsedIndex = v4;
  }
LABEL_10:
  v6 = CcVacbArraysAllocated;
  *(_QWORD *)(CcVacbArrays + 8 * v3) = 0LL;
  if ( !v6 )
    KeBugCheckEx(0x34u, 0x22FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcVacbArraysAllocated = v6 - 1;
  do
  {
    v7 = &a1[8 * v1 + 8 + 2 * v1];
    v8 = *(_QWORD *)v7;
    if ( *(unsigned int **)(*(_QWORD *)v7 + 8LL) != v7 || (result = (unsigned int **)*((_QWORD *)v7 + 1), *result != v7) )
      __fastfail(3u);
    ++v1;
    *result = (unsigned int *)v8;
    *(_QWORD *)(v8 + 8) = result;
  }
  while ( v1 < 0xCCC );
  CcNumberOfFreeVacbs -= 3276;
  return result;
}
