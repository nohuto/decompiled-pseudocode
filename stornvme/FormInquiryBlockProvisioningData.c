/*
 * XREFs of FormInquiryBlockProvisioningData @ 0x1C0012194
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0019C74 (ScsiInquiryRequest.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     IsDeallocateSupported @ 0x1C0014A90 (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockProvisioningData(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 SrbDataBuffer; // r11
  unsigned __int8 v8; // di
  _DWORD *v9; // rbx
  unsigned int v10; // r9d
  char v11; // al
  __int64 v12; // r10
  __int64 v13; // r11
  char v14; // cl
  __int64 v15; // rdx
  char v16; // dl
  char v17; // dl
  _DWORD *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v19);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v8 = *(_BYTE *)(*(unsigned int *)(v6 + 52) + v6 + 10);
  else
    v8 = *(_BYTE *)(v6 + 7);
  v9 = v19;
  if ( *v19 >= 8u )
  {
    *(_BYTE *)(SrbDataBuffer + 3) = 4;
    LOBYTE(v3) = *(_BYTE *)(SrbDataBuffer + 5) & 0x98;
    *(_WORD *)SrbDataBuffer = -19968;
    *(_BYTE *)(SrbDataBuffer + 5) = v3;
    v11 = IsDeallocateSupported(a1, v3);
    v14 = v15 & 0x7F | (v11 != 0 ? 0x80 : 0);
    LOBYTE(v15) = *(_BYTE *)(v13 + 6);
    *(_BYTE *)(v13 + 5) = v14;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v8 + 1952) + 65LL) == (_BYTE)v10 )
    {
      if ( (unsigned __int8)IsDeallocateSupported(a1, v15) )
        v16 = v17 & 0xF8 | 1;
      else
        v16 = v17 & 0xF8;
    }
    else
    {
      v16 = v15 & 0xF8 | 2;
    }
    *(_BYTE *)(v13 + 6) = v16;
    *v9 = 8;
    *(_BYTE *)(v12 + 3) = 1;
  }
  else
  {
    LOBYTE(v5) = 36;
    LOBYTE(v4) = 5;
    LOBYTE(v3) = 6;
    NVMeSetSenseData(v6, v3, v4, v5);
    return (unsigned int)-1056964602;
  }
  return v10;
}
