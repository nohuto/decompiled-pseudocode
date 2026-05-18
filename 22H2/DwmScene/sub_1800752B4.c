/*
 * XREFs of sub_1800752B4 @ 0x1800752B4
 * Callers:
 *     sub_18001174C @ 0x18001174C (sub_18001174C.c)
 *     sub_18001AF08 @ 0x18001AF08 (sub_18001AF08.c)
 *     sub_180065C80 @ 0x180065C80 (sub_180065C80.c)
 *     sub_1800670F0 @ 0x1800670F0 (sub_1800670F0.c)
 *     sub_1800731C0 @ 0x1800731C0 (sub_1800731C0.c)
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 *     sub_180076870 @ 0x180076870 (sub_180076870.c)
 *     sub_180078918 @ 0x180078918 (sub_180078918.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 *     sub_1800B9280 @ 0x1800B9280 (sub_1800B9280.c)
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BD2B0 @ 0x1800BD2B0 (sub_1800BD2B0.c)
 *     sub_1800BD620 @ 0x1800BD620 (sub_1800BD620.c)
 *     sub_1800BDA00 @ 0x1800BDA00 (sub_1800BDA00.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 *     sub_1800BE21C @ 0x1800BE21C (sub_1800BE21C.c)
 *     sub_1800BE268 @ 0x1800BE268 (sub_1800BE268.c)
 *     sub_1800BE2B4 @ 0x1800BE2B4 (sub_1800BE2B4.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800BF42C @ 0x1800BF42C (sub_1800BF42C.c)
 *     sub_1800BF6A4 @ 0x1800BF6A4 (sub_1800BF6A4.c)
 *     sub_1800C0384 @ 0x1800C0384 (sub_1800C0384.c)
 *     sub_1800C0970 @ 0x1800C0970 (sub_1800C0970.c)
 *     sub_1800C1360 @ 0x1800C1360 (sub_1800C1360.c)
 *     sub_1800C1DC0 @ 0x1800C1DC0 (sub_1800C1DC0.c)
 *     sub_1800C2154 @ 0x1800C2154 (sub_1800C2154.c)
 *     sub_1800C2944 @ 0x1800C2944 (sub_1800C2944.c)
 *     sub_1800C2CAC @ 0x1800C2CAC (sub_1800C2CAC.c)
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800C5744 @ 0x1800C5744 (sub_1800C5744.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800D77BC @ 0x1800D77BC (sub_1800D77BC.c)
 *     sub_1800EA2F0 @ 0x1800EA2F0 (sub_1800EA2F0.c)
 *     sub_1800F4650 @ 0x1800F4650 (sub_1800F4650.c)
 *     sub_18010A610 @ 0x18010A610 (sub_18010A610.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800752B4(__int64 a1, int a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = *(__int64 **)(a1 + 1080);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  if ( *((_BYTE *)v4 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  while ( !*((_BYTE *)v4 + 25) );
  if ( v3 == v2 || a2 < *((_DWORD *)v3 + 8) )
LABEL_8:
    v3 = v2;
  return v3[5];
}
