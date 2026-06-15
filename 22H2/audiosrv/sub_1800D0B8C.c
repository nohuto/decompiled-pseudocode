/*
 * XREFs of sub_1800D0B8C @ 0x1800D0B8C
 * Callers:
 *     sub_1800D1164 @ 0x1800D1164 (sub_1800D1164.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall sub_1800D0B8C(void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
