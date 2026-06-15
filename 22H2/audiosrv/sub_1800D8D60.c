/*
 * XREFs of sub_1800D8D60 @ 0x1800D8D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1800D8D60(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    CoTaskMemFree(v1);
}
