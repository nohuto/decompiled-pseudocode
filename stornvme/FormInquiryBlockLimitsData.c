/*
 * XREFs of FormInquiryBlockLimitsData @ 0x1C0011F6C
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0019C74 (ScsiInquiryRequest.c)
 * Callees:
 *     GetControllerMaxTransferSize @ 0x1C0007A5C (GetControllerMaxTransferSize.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     IsDeallocateSupported @ 0x1C0014A90 (IsDeallocateSupported.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 SrbDataBuffer; // r9
  __int64 v6; // r11
  unsigned __int8 v7; // cl
  unsigned int v8; // r10d
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned int ControllerMaxTransferSize; // eax
  _BYTE *v13; // r9
  __int64 v14; // rdx
  int v15; // ecx
  _BYTE *v16; // r9
  __int64 v17; // r11
  int v18; // r8d
  unsigned __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  _DWORD *v25; // [rsp+48h] [rbp+10h] BYREF

  v25 = 0LL;
  SrbDataBuffer = GetSrbDataBuffer(a2, &v25);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(v6 + 52) + v6 + 10);
  else
    v7 = *(_BYTE *)(v6 + 7);
  if ( *v25 >= 0x40u )
  {
    v9 = v7;
    *(_OWORD *)SrbDataBuffer = 0LL;
    *(_OWORD *)(SrbDataBuffer + 16) = 0LL;
    *(_OWORD *)(SrbDataBuffer + 32) = 0LL;
    *(_OWORD *)(SrbDataBuffer + 48) = 0LL;
    *(_BYTE *)(SrbDataBuffer + 1) = -80;
    v10 = *(_QWORD *)(a1 + 8LL * v7 + 1952);
    v11 = *(_DWORD *)(v10 + 52);
    LODWORD(v10) = *(_DWORD *)(v10 + 104) / v11;
    *(_BYTE *)(SrbDataBuffer + 7) = v10;
    *(_BYTE *)(SrbDataBuffer + 6) = BYTE1(v10);
    ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
    v13[10] = (unsigned __int16)(ControllerMaxTransferSize / v11) >> 8;
    v13[11] = ControllerMaxTransferSize / v11;
    v13[9] = (ControllerMaxTransferSize / v11) >> 16;
    v13[8] = (ControllerMaxTransferSize / v11) >> 24;
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v9 + 1952) + 100LL) % v11;
    v15 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v9 + 1952) + 100LL) / v11;
    v13[14] = BYTE1(v15);
    v13[15] = v15;
    v13[12] = HIBYTE(v15);
    v13[13] = BYTE2(v15);
    if ( (unsigned __int8)IsDeallocateSupported(a1, v14) )
    {
      v18 = *(unsigned __int8 *)(a1 + 4347);
      if ( !*(_BYTE *)(a1 + 4347) )
        v18 = 256;
      v19 = *(_QWORD *)(a1 + 4352);
      if ( v19 )
      {
        v20 = -1;
        if ( v19 <= 0xFFFFFFFF )
          v20 = *(_QWORD *)(a1 + 4352);
      }
      else
      {
        v20 = (0x40000000 / v11) << 6;
      }
      v21 = *(_DWORD *)(a1 + 56);
      v16[3] = 60;
      if ( !v21 )
        v21 = v20;
      v16[27] = v18;
      v16[23] = v21;
      v16[22] = BYTE1(v21);
      v16[21] = BYTE2(v21);
      v16[26] = BYTE1(v18);
      v16[25] = BYTE2(v18);
      v16[20] = HIBYTE(v21);
      v16[24] = HIBYTE(v18);
      v22 = *(_BYTE **)(a1 + 8 * v9 + 1952);
      v16[31] = v22[160];
      v16[30] = v22[161];
      v16[29] = v22[162];
      v16[28] = v22[163];
      v23 = *(_BYTE **)(a1 + 8 * v9 + 1952);
      if ( *((_DWORD *)v23 + 41) != v8 )
      {
        v16[35] = v23[164];
        v16[34] = v23[165];
        v16[33] = v23[166];
        v16[32] = v23[167] | 0x80;
      }
    }
    else
    {
      v16[3] = 60;
    }
    *(_BYTE *)(v17 + 3) = 1;
  }
  else
  {
    LOBYTE(SrbDataBuffer) = 36;
    LOBYTE(v4) = 5;
    LOBYTE(v3) = 6;
    NVMeSetSenseData(v6, v3, v4, SrbDataBuffer);
    return (unsigned int)-1056964602;
  }
  return v8;
}
