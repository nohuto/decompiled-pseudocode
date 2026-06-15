/*
 * XREFs of sub_180084A16 @ 0x180084A16
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

void __fastcall sub_180084A16(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( a10 < 0 )
    sub_18005E8F8((__int64)"CAudioEndpointId::Initialize", 140, a10);
  JUMPOUT(0x180018471LL);
}
