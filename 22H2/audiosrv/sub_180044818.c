/*
 * XREFs of sub_180044818 @ 0x180044818
 * Callers:
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180044818(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    CoTaskMemFree(v2);
}
