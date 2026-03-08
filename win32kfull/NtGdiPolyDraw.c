/*
 * XREFs of NtGdiPolyDraw @ 0x1C02C67A0
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x1C008D8A4 (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GrePolyDraw@@YAHPEAUHDC__@@AEAV?$umptr_r@UtagPOINT@@@@AEAV?$umptr_r@E@@K@Z @ 0x1C02AD894 (-GrePolyDraw@@YAHPEAUHDC__@@AEAV-$umptr_r@UtagPOINT@@@@AEAV-$umptr_r@E@@K@Z.c)
 *     ?init_probe@?$umptr_r@UtagPOINT@@@@SA?AV1@PEAUtagPOINT@@_K1@Z @ 0x1C02C4458 (-init_probe@-$umptr_r@UtagPOINT@@@@SA-AV1@PEAUtagPOINT@@_K1@Z.c)
 */

__int64 __fastcall NtGdiPolyDraw(HDC a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // edi
  _QWORD v9[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  if ( a4 <= 0x1FFFFFFF )
  {
    umptr_r<tagPOINT>::init_probe((__int64)v10, a2, a4);
    umptr_r<unsigned char>::init_probe((__int64)v9, a3, a4, 1LL);
    if ( v10[0] )
    {
      if ( v9[0] )
        return (unsigned int)GrePolyDraw(a1, (__int64)v10, (__int64)v9, a4);
    }
  }
  return v4;
}
