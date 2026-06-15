/*
 * XREFs of sub_1800B7B9C @ 0x1800B7B9C
 * Callers:
 *     sub_1800761B0 @ 0x1800761B0 (sub_1800761B0.c)
 *     sub_180076360 @ 0x180076360 (sub_180076360.c)
 *     sub_18007B830 @ 0x18007B830 (sub_18007B830.c)
 *     unknown_libname_120 @ 0x1800EF6ED (unknown_libname_120.c)
 *     sub_1800EF863 @ 0x1800EF863 (sub_1800EF863.c)
 *     sub_1801089A1 @ 0x1801089A1 (sub_1801089A1.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B7B9C(_Mtx_t *a1)
{
  int v1; // eax

  v1 = Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
