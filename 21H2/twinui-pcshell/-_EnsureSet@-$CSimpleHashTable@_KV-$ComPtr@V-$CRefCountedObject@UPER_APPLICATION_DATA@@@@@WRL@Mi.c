/*
 * XREFs of ?_EnsureSet@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJXZ @ 0x1801C519C
 * Callers:
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x1801C4E3C (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005EE14 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_EnsureSet(
        __int64 a1)
{
  unsigned int v1; // r8d
  void **v2; // r9
  unsigned __int64 v3; // rcx

  v1 = 0;
  v2 = (void **)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v3 = *(unsigned int *)(a1 + 4);
    *v2 = 0LL;
    if ( is_mul_ok(v3, 0x18uLL) )
      return (unsigned int)CTLocalAllocPolicy::Alloc((void *)v3, (v3 * (unsigned __int128)0x18u) >> 64, 24 * v3, v2);
    else
      return (unsigned int)-2147024362;
  }
  return v1;
}
