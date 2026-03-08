/*
 * XREFs of MiFreeDriverInitialization @ 0x140729EFC
 * Callers:
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x14081B9F8 (MiLoadImportDll.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084B4CC (MmFreeBootDriverInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSnapDriverRange @ 0x14072A118 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x14072A51C (MiFreeInitializationCode.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  v5 = 0LL;
  result = MI_IS_PHYSICAL_ADDRESS(v1);
  if ( (!(_DWORD)result || v1 == PsNtosImageBase || v1 == PsHalImageBase)
    && (*(_DWORD *)(a1 + 104) & 0x800) == 0
    && (!dword_140D1D228 || v1 != PsNtosImageBase && v1 != PsHalImageBase) )
  {
    v4 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v4, 2, 0, (__int64)&v5, (__int64)&v6);
      v4 = result;
      if ( v5 )
        result = MiFreeInitializationCode(a1, v5, v6, 0LL);
    }
    while ( v4 );
  }
  return result;
}
