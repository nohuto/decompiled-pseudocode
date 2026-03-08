/*
 * XREFs of ACPIGetConvertToPnpIDWide @ 0x1C002A650
 * Callers:
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00298A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpID @ 0x1C002A5E8 (ACPIGetConvertToPnpID.c)
 *     ACPIGetWorkerForString @ 0x1C002B860 (ACPIGetWorkerForString.c)
 * Callees:
 *     ACPIAmliDoubleToNameWide @ 0x1C000B4F8 (ACPIAmliDoubleToNameWide.c)
 *     RtlStringCchPrintfA @ 0x1C000B5D8 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00438EC (ACPIAnsiStringToWideHelper.c)
 */

__int64 __fastcall ACPIGetConvertToPnpIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  __int64 v8; // rbx
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 v11; // r14
  char *v12; // rdi
  const char *v13; // r9
  int v15; // eax
  const char *v16; // rsi
  __int64 v17; // rbx
  char *Pool2; // rax

  if ( (a4 & 0x4000000) != 0 || !_bittest64((const signed __int64 *)(a1 + 8), 0x2Fu) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v10 = 18;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        18LL,
                        1399874369LL);
      v12 = Pool2;
      if ( Pool2 )
      {
        ACPIAmliDoubleToNameWide(Pool2, *(_DWORD *)(a3 + 16), 1);
        goto LABEL_24;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v15 = *(_DWORD *)(a3 + 24);
      v16 = *(const char **)(a3 + 32);
      if ( !v15 )
        return 3221225485LL;
      if ( *v16 == 42 )
      {
        ++v16;
        if ( v15 == 1 )
          return 3221225485LL;
      }
      v17 = -1LL;
      do
        ++v17;
      while ( v16[v17] );
      v9 = v17 + 2;
      v10 = 2 * v9;
      v11 = 2 * v9;
      v12 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      v11,
                      1399874369LL);
      if ( v12 )
      {
        v13 = v16;
        goto LABEL_7;
      }
    }
    return 3221225626LL;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v8) );
  v9 = v8 - 3;
  v10 = 2 * v9;
  v11 = 2 * v9;
  v12 = (char *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v11, 1399874369LL);
  if ( !v12 )
    return 3221225626LL;
  v13 = (const char *)(*(_QWORD *)(a1 + 608) + 5LL);
LABEL_7:
  RtlStringCchPrintfA(v12, v9, "*%s", v13);
  ACPIAnsiStringToWideHelper(v12, v11);
LABEL_24:
  *a5 = v12;
  if ( a6 )
    *a6 = v10;
  return 0LL;
}
