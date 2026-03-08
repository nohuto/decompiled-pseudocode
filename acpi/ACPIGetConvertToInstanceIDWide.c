/*
 * XREFs of ACPIGetConvertToInstanceIDWide @ 0x1C002A404
 * Callers:
 *     ACPIGetConvertToInstanceID @ 0x1C002A39C (ACPIGetConvertToInstanceID.c)
 *     ACPIGetWorkerForString @ 0x1C002B860 (ACPIGetWorkerForString.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000B5D8 (RtlStringCchPrintfA.c)
 *     RtlStringCchPrintfW @ 0x1C000B900 (RtlStringCchPrintfW.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00438EC (ACPIAnsiStringToWideHelper.c)
 */

__int64 __fastcall ACPIGetConvertToInstanceIDWide(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  char *v10; // rax
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v14; // rbx
  char *v15; // rax
  wchar_t *Pool2; // rax

  if ( (a4 & 0x4000000) != 0 || !_bittest64((const signed __int64 *)(a1 + 8), 0x30u) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      LODWORD(v9) = 9;
      Pool2 = (wchar_t *)ExAllocatePool2(
                           (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                           18LL,
                           1399874369LL);
      v11 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfW(Pool2, 9uLL, L"%lx", *(unsigned int *)(a3 + 16));
        goto LABEL_20;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + v14) );
      v9 = (unsigned int)(v14 + 1);
      v15 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      2 * v9,
                      1399874369LL);
      v11 = v15;
      if ( v15 )
      {
        RtlStringCchPrintfA(v15, (unsigned int)v9, "%s", *(const char **)(a3 + 32));
        v12 = 2 * v9;
        goto LABEL_7;
      }
    }
    return 3221225626LL;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 616) + v8) );
  v9 = (unsigned int)(v8 + 1);
  v10 = (char *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, 2 * v9, 1399874369LL);
  v11 = v10;
  if ( !v10 )
    return 3221225626LL;
  RtlStringCchPrintfA(v10, (unsigned int)v9, "%s", *(const char **)(a1 + 616));
  v12 = 2 * v9;
LABEL_7:
  ACPIAnsiStringToWideHelper(v11, v12);
LABEL_20:
  *a5 = v11;
  if ( a6 )
    *a6 = 2 * v9;
  return 0LL;
}
