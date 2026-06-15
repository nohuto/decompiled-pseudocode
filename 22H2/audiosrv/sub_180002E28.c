/*
 * XREFs of sub_180002E28 @ 0x180002E28
 * Callers:
 *     sub_180002BB0 @ 0x180002BB0 (sub_180002BB0.c)
 *     sub_1800C6990 @ 0x1800C6990 (sub_1800C6990.c)
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 * Callees:
 *     sub_18001B5C0 @ 0x18001B5C0 (sub_18001B5C0.c)
 */

__int64 __fastcall sub_180002E28(__int64 *a1)
{
  __int64 result; // rax
  ATL::CAtlException *v3; // [rsp+20h] [rbp-18h] BYREF

  try
  {
    if ( *(int *)(*a1 - 8) > 1 )
      sub_18001B5C0(a1, *(unsigned int *)(*a1 - 16));
    result = *a1;
  }
  catch ( ATL::CAtlException *v3 )
  {
    if ( *(_DWORD *)v3 == -1073741571 )
      o__resetstkoflw();
    return 0LL;
  }
  return result;
}
