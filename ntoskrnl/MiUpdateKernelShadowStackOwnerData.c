/*
 * XREFs of MiUpdateKernelShadowStackOwnerData @ 0x140642A9C
 * Callers:
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiValidateKernelShadowStackPage @ 0x140642B48 (MiValidateKernelShadowStackPage.c)
 */

void __fastcall MiUpdateKernelShadowStackOwnerData(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 *v7; // rbx

  v4 = a1 + 8;
  v5 = a1 + 16;
  if ( a1 + 8 < (unsigned __int64)(a1 + 16) )
  {
    v6 = (a4 >> 3) & 0xFFFFFFFFFFELL;
    do
    {
      v7 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v4) >> 12) & 0xFFFFFFFFFFLL)
                              - 0x220000000000LL);
      MiValidateKernelShadowStackPage(v4);
      v4 += 8LL;
      *v7 = v6 | *v7 & 0xFFFFF00000000001uLL;
    }
    while ( v4 < v5 );
  }
}
