/*
 * XREFs of FormInquiryVpdSupportedPagesData @ 0x1C0012974
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0019C74 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryVpdSupportedPagesData(__int64 a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  _DWORD *v7; // rcx
  _DWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v9);
  v7 = v9;
  if ( *v9 >= 0xBu )
  {
    *(_WORD *)SrbDataBuffer = v5;
    *(_DWORD *)(SrbDataBuffer + 3) = -2088763386;
    *(_WORD *)(SrbDataBuffer + 7) = -20048;
    *(_BYTE *)(SrbDataBuffer + 9) = -78;
    *v7 = 11;
    *(_BYTE *)(v6 + 3) = 1;
  }
  else
  {
    LOBYTE(v5) = 36;
    LOBYTE(v4) = 5;
    LOBYTE(v3) = 6;
    NVMeSetSenseData(v6, v3, v4, v5);
    LODWORD(v5) = -1056964602;
  }
  return (unsigned int)v5;
}
