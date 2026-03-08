/*
 * XREFs of KiVerifyXcptFilter @ 0x140B5D724
 * Callers:
 *     KiVerifyXcpt2 @ 0x140B5D000 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt13 @ 0x140B5D150 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt11 @ 0x140B5D1A0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt5 @ 0x140B5D200 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt4 @ 0x140B5D250 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt3 @ 0x140B5D2A0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt1 @ 0x140B5D2F0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt0 @ 0x140B5D340 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt14 @ 0x140B5D390 (KiVerifyXcpt14.c)
 *     KiVerifyXcpt9 @ 0x140B5D3F0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt8 @ 0x140B5D450 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt7 @ 0x140B5D4B0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt6 @ 0x140B5D510 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt12 @ 0x140B5D570 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt10 @ 0x140B5D600 (KiVerifyXcpt10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiVerifyXcptFilter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}
