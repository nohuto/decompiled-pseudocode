/*
 * XREFs of ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01267E0
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C0124528 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     ?grow@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0125198 (-grow@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0125770 (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     memmove @ 0x1C0040840 (memmove.c)
 */

char __fastcall Rtl::KArray<Rtl::_KStringAtom *,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  void *v7; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * a1[1]);
      v7 = (void *)*((_QWORD *)a1 + 1);
      if ( v7 )
        ExFreePoolWithTag(v7, 0x7272414Bu);
      *a1 = v2;
      *((_QWORD *)a1 + 1) = v6;
      return 1;
    }
  }
  return 0;
}
