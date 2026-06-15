/*
 * XREFs of sub_180046F70 @ 0x180046F70
 * Callers:
 *     sub_18002CFD0 @ 0x18002CFD0 (sub_18002CFD0.c)
 *     unknown_libname_208 @ 0x1800464A8 (unknown_libname_208.c)
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 *     sub_1800C6238 @ 0x1800C6238 (sub_1800C6238.c)
 *     sub_1800C8AF8 @ 0x1800C8AF8 (sub_1800C8AF8.c)
 *     sub_1800D1C6C @ 0x1800D1C6C (sub_1800D1C6C.c)
 *     sub_1800D1F10 @ 0x1800D1F10 (sub_1800D1F10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180046F70(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = (_DWORD *)(a1 - 16);
    if ( *v1 == 56797 )
      return _o_free(v1);
  }
  return result;
}
