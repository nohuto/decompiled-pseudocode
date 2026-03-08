/*
 * XREFs of AslUnicodeStringFree @ 0x140A513A0
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140A4FB10 (SdbResolveDatabaseEx.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall AslUnicodeStringFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      memset(v2, 66, *(unsigned __int16 *)(a1 + 2));
      v3 = *(void **)(a1 + 8);
      if ( v3 )
        ExFreePoolWithTag(v3, 0x74705041u);
    }
    *(_OWORD *)a1 = 0LL;
  }
}
