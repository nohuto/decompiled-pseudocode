/*
 * XREFs of WheaAddrTranslateAndAddToDefectListInPlugin @ 0x140A04FEC
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x140A0555C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     WheapAddToDefectListInPlugin @ 0x14060FE04 (WheapAddToDefectListInPlugin.c)
 *     WheapTranslateAddressInPlugin @ 0x140A05B24 (WheapTranslateAddressInPlugin.c)
 */

__int64 __fastcall WheaAddrTranslateAndAddToDefectListInPlugin(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // [rsp+20h] [rbp-50h] BYREF
  __int64 v6; // [rsp+30h] [rbp-40h]
  __m256i v7; // [rsp+38h] [rbp-38h] BYREF
  __int128 v8; // [rsp+58h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    v3 = a2[1];
    *(_OWORD *)v7.m256i_i8 = *a2;
    v4 = a2[2];
    *(_OWORD *)&v7.m256i_u64[2] = v3;
    v8 = v4;
  }
  else
  {
    result = WheapTranslateAddressInPlugin(a1, &v5);
    if ( (int)result < 0 )
      return result;
    v7.m256i_i64[0] = 0LL;
    v8 = 0x6FFuLL;
    *(_OWORD *)&v7.m256i_u64[1] = v5;
    v7.m256i_i64[3] = v6;
  }
  return WheapAddToDefectListInPlugin((__int128 *)v7.m256i_i8);
}
