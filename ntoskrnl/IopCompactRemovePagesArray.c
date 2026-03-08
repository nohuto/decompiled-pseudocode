/*
 * XREFs of IopCompactRemovePagesArray @ 0x14055AA70
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x140559F94 (IoAddPagesForPartialKernelDump.c)
 *     IopAddAddressRangeToRemovePagesArray @ 0x14055A2A4 (IopAddAddressRangeToRemovePagesArray.c)
 * Callees:
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

_UNKNOWN **IopCompactRemovePagesArray()
{
  _UNKNOWN **result; // rax
  int v1; // esi
  unsigned int *v2; // rdi
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned __int64 *v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v1 = 0;
  if ( IopRemovePagesArray )
  {
    qsort((void *)(IopRemovePagesArray + 8), *(unsigned int *)IopRemovePagesArray, 0x10uLL, IopRemovePagesRunsSort);
    v2 = (unsigned int *)IopRemovePagesArray;
    v3 = 1;
    v4 = *(_DWORD *)IopRemovePagesArray;
    if ( *(_DWORD *)IopRemovePagesArray > 1u )
    {
      v5 = (unsigned __int64 *)(IopRemovePagesArray + 8);
      v6 = IopRemovePagesArray;
      do
      {
        v7 = *v5;
        v8 = *v5 + *(_QWORD *)(v6 + 16);
        v9 = *(_QWORD *)&v2[4 * v3 + 2];
        v10 = v9 + *(_QWORD *)&v2[4 * v3 + 4];
        if ( v8 - 1 < v9 - 1 )
        {
          v6 = (__int64)&v2[4 * ++v1];
          v5 = (unsigned __int64 *)(v6 + 8);
          *(_OWORD *)(v6 + 8) = *(_OWORD *)&v2[4 * v3 + 2];
        }
        else
        {
          if ( v7 >= v9 )
            v7 = *(_QWORD *)&v2[4 * v3 + 2];
          *v5 = v7;
          if ( v8 - 1 <= v10 - 1 )
            v8 = v10;
          *(_QWORD *)(v6 + 16) = v8 - v7;
        }
        v4 = *v2;
        ++v3;
      }
      while ( v3 < *v2 );
    }
    result = (_UNKNOWN **)memset(&v2[4 * (v1 + 1) + 2], 0, 16LL * (v4 - v1 - 1));
    *v2 = v1 + 1;
  }
  return result;
}
