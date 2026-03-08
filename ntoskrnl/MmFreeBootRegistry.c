/*
 * XREFs of MmFreeBootRegistry @ 0x140820DAC
 * Callers:
 *     CmpFreeBootRegistry @ 0x140615338 (CmpFreeBootRegistry.c)
 *     HvpDropPagedBins @ 0x140820B14 (HvpDropPagedBins.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiDeleteBootRange @ 0x14038BEB8 (MiDeleteBootRange.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void MmFreeBootRegistry()
{
  size_t *v0; // rax
  size_t *v1; // r14
  size_t v2; // rdi
  unsigned __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 PteAddress; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx

  v0 = (size_t *)_InterlockedCompareExchange64(&qword_140C69558, 1LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    v2 = *v0;
    v3 = v0 + 1;
    qsort(v0 + 1, *v0, 8uLL, MiRegistryVaSort);
    v4 = 0LL;
    if ( v2 )
    {
      while ( 1 )
      {
        PteAddress = MiGetPteAddress(*v3);
        if ( v4 == v2 - 1 )
          break;
        if ( v7 + 4096 != *++v3 )
          goto LABEL_9;
LABEL_5:
        if ( ++v4 >= v2 )
          goto LABEL_6;
      }
      ++v3;
LABEL_9:
      if ( v6 == 1 )
      {
        v8 = 1LL;
        v9 = PteAddress;
      }
      else
      {
        v8 = v6;
        v9 = PteAddress - 8 * v6 + 8;
      }
      MiDeleteBootRange(v9, v8, v6);
      goto LABEL_5;
    }
LABEL_6:
    ExFreePoolWithTag(v1, 0);
    qword_140C69558 = 0LL;
  }
}
