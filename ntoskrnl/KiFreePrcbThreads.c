/*
 * XREFs of KiFreePrcbThreads @ 0x140569908
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall KiFreePrcbThreads(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax
  void *v4; // rcx

  v2 = *(void **)(a1 + 34944);
  if ( v2 )
    result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  v4 = *(void **)(a1 + 13112);
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
