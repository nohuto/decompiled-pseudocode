/*
 * XREFs of sub_18007EEB5 @ 0x18007EEB5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

void __fastcall sub_18007EEB5(
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
    sub_18005E8F8((__int64)"CAudioEndpointId::Copy", 157, a10);
  JUMPOUT(0x180005DE2LL);
}
