/*
 * XREFs of FormInquiryBlockLimitsData @ 0x1C0002824
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00056F8 (ScsiInquiryRequest.c)
 * Callees:
 *     IsDeallocateSupported @ 0x1C000566C (IsDeallocateSupported.c)
 *     GetControllerMaxTransferSize @ 0x1C000569C (GetControllerMaxTransferSize.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // eax
  _BYTE *v13; // r9
  __int64 v14; // r11
  int v15; // eax
  __int64 v16; // rdx
  char v17; // al
  _BYTE *v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  unsigned int v21; // r8d
  int v22; // ebx
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  __int16 v29; // [rsp+48h] [rbp+10h]
  char v30; // [rsp+4Ah] [rbp+12h]
  char v31; // [rsp+4Bh] [rbp+13h]

  v3 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = 60LL;
    v6 = *(_QWORD *)(a2 + 64);
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    v5 = 16LL;
    v7 = *(_BYTE *)(a2 + 7);
  }
  if ( *(_DWORD *)(v3 + v5) < 0x40u )
  {
    LOBYTE(v6) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v3, a2, a3, v6);
    return (unsigned int)-1056964602;
  }
  else
  {
    v8 = v7;
    *(_OWORD *)v6 = 0LL;
    *(_OWORD *)(v6 + 16) = 0LL;
    *(_OWORD *)(v6 + 32) = 0LL;
    *(_OWORD *)(v6 + 48) = 0LL;
    *(_BYTE *)(v6 + 1) = -80;
    v9 = *(_QWORD *)(a1 + 8LL * v7 + 1752);
    v10 = *(_DWORD *)(v9 + 52);
    v11 = *(_DWORD *)(v9 + 104) % v10;
    v29 = *(_DWORD *)(v9 + 104) / v10;
    *(_BYTE *)(v6 + 9) = v29;
    *(_BYTE *)(v6 + 8) = HIBYTE(v29);
    *(_BYTE *)(v6 + 7) = v30;
    *(_BYTE *)(v6 + 6) = v31;
    v12 = (unsigned int)GetControllerMaxTransferSize(a1, v11, a3) / v10;
    v13[11] = v12;
    v13[10] = BYTE1(v12);
    v13[9] = BYTE2(v12);
    v13[8] = HIBYTE(v12);
    v15 = *(_DWORD *)(*(_QWORD *)(v14 + 8 * v8 + 1752) + 100LL) / v10;
    v16 = *(_DWORD *)(*(_QWORD *)(v14 + 8 * v8 + 1752) + 100LL) % v10;
    v13[15] = v15;
    v13[14] = BYTE1(v15);
    v13[13] = BYTE2(v15);
    v13[12] = HIBYTE(v15);
    v17 = IsDeallocateSupported(v14, v16);
    v21 = 0;
    if ( v17 )
    {
      v22 = *(unsigned __int8 *)(v20 + 4147);
      if ( !*(_BYTE *)(v20 + 4147) )
        v22 = 256;
      v23 = *(_QWORD *)(v20 + 4152);
      if ( v23 )
      {
        v24 = -1;
        if ( v23 <= 0xFFFFFFFF )
          v24 = *(_QWORD *)(v20 + 4152);
      }
      else
      {
        v24 = (0x40000000 / v10) << 6;
      }
      v25 = *(_DWORD *)(v20 + 56);
      v18[3] = 60;
      if ( !v25 )
        v25 = v24;
      v18[27] = v22;
      v18[23] = v25;
      v18[22] = BYTE1(v25);
      v18[21] = BYTE2(v25);
      v18[26] = BYTE1(v22);
      v18[25] = BYTE2(v22);
      v18[20] = HIBYTE(v25);
      v18[24] = HIBYTE(v22);
      v26 = *(_BYTE **)(v20 + 8 * v8 + 1752);
      v18[31] = v26[160];
      v18[30] = v26[161];
      v18[29] = v26[162];
      v18[28] = v26[163];
      v27 = *(_BYTE **)(v20 + 8 * v8 + 1752);
      if ( *((_DWORD *)v27 + 41) )
      {
        v18[35] = v27[164];
        v18[34] = v27[165];
        v18[33] = v27[166];
        v18[32] = v27[167] | 0x80;
      }
    }
    else
    {
      v18[3] = 60;
    }
    *(_BYTE *)(v19 + 3) = 1;
  }
  return v21;
}
