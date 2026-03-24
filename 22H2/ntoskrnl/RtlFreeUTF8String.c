/*
 * XREFs of RtlFreeUTF8String @ 0x14090FB50
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall RtlFreeUTF8String(__int64 a1, ULONG a2)
{
  void *v3; // rcx

  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, a2);
    *(_OWORD *)a1 = 0LL;
  }
}
