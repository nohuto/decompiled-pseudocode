/*
 * XREFs of MiZeroAndConvertPage @ 0x14064DA84
 * Callers:
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402B4650 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14034DCB0 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiChangePageAttributeContiguous @ 0x140214270 (MiChangePageAttributeContiguous.c)
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 *     MiPfnBestZeroAttribute @ 0x1402CEAFC (MiPfnBestZeroAttribute.c)
 */

unsigned __int64 __fastcall MiZeroAndConvertPage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v6; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // r15
  BOOL v13; // esi

  v6 = a3;
  result = 0xAAAAAAAAAAAAAAABuLL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v10 = 1;
  if ( (a5 & 1) == 0 )
  {
    if ( (a5 & 2) == 0 || (result = *(unsigned int *)(a2 + 16), (result & 0x3E0) == 0) )
      v10 = 0;
  }
  v11 = *(unsigned __int8 *)(a2 + 34) >> 6;
  if ( (_DWORD)v6 == 3 )
    v12 = 1LL;
  else
    v12 = MiLargePageSizes[v6];
  v13 = v11 != a4;
  if ( (_DWORD)v10 )
  {
    if ( v11 != a4 && (unsigned int)MiPfnBestZeroAttribute(a2, a4) == a4 )
    {
      MiChangePageAttributeContiguous(v9, v12, a4, 0);
      v13 = 0;
    }
    if ( (_DWORD)v6 == 3 )
      result = MiZeroPhysicalPage(v10, v9, 0LL, a4);
    else
      result = MiZeroLargePage(v10, a2, v6, a4);
  }
  if ( v13 )
    return MiChangePageAttributeContiguous(v9, v12, a4, 1);
  return result;
}
