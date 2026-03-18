/*
 * XREFs of FormInquiryVpdSupportedPagesData @ 0x1C000E56C
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00056F8 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryVpdSupportedPagesData(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ecx

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v3 = *(_QWORD *)(a2 + 64);
    v4 = 60LL;
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v4) < 0xBu )
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return (unsigned int)-1056964602;
  }
  else
  {
    *(_DWORD *)(v3 + 3) = -2088763386;
    v5 = 0;
    *(_WORD *)v3 = 0;
    *(_WORD *)(v3 + 7) = -20048;
    *(_BYTE *)(v3 + 9) = -78;
    *(_DWORD *)(a2 + v4) = 11;
    *(_BYTE *)(a2 + 3) = 1;
  }
  return v5;
}
