__int64 __fastcall ScsiReadCapacityRequest(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  _BYTE *SrbDataBuffer; // r10
  unsigned __int64 v9; // r11
  unsigned __int8 v10; // dl
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  int *v15; // r9
  int v17; // ecx
  __int64 v18; // r8
  unsigned int v19; // ecx
  char v20; // al
  char v21; // al
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  char v27; // cl
  char v28; // dl
  int *v29; // [rsp+30h] [rbp-28h] BYREF
  int v30; // [rsp+60h] [rbp+8h]
  unsigned __int64 v31; // [rsp+68h] [rbp+10h]

  v29 = 0LL;
  SrbDataBuffer = (_BYTE *)GetSrbDataBuffer(a2, &v29);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v10 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v10 = *(_BYTE *)(a2 + 7);
  v11 = v10;
  v12 = *(_QWORD *)(a1 + 8LL * v10 + 1952);
  v13 = *(unsigned int *)(v12 + 52);
  v14 = *(_QWORD *)(v12 + 56) - 1LL;
  v30 = *(_DWORD *)(v12 + 52);
  v31 = v14;
  if ( *(_BYTE *)(v12 + 66) != (_BYTE)v9 || *(_WORD *)(v12 + 48) != (_WORD)v9 )
  {
    v14 = v9;
    v31 = v9;
  }
  v15 = v29;
  if ( (unsigned int)*v29 < 8 || (v17 = 12, a4 == 16) && (unsigned int)*v29 < 0xC || !SrbDataBuffer )
  {
    LOBYTE(v15) = 36;
    LOBYTE(v13) = 5;
    LOBYTE(v14) = 6;
    NVMeSetSenseData(a2, v14, v13, v15);
    return 3238002692LL;
  }
  if ( a4 != 16 || *a3 != 0x9E )
  {
    SrbDataBuffer[6] = BYTE1(v30);
    SrbDataBuffer[5] = BYTE2(v30);
    SrbDataBuffer[4] = HIBYTE(v30);
    SrbDataBuffer[7] = v13;
    if ( v14 < 0xFFFFFFFF )
    {
      SrbDataBuffer[3] = v14;
      SrbDataBuffer[2] = BYTE1(v14);
      *SrbDataBuffer = BYTE3(v14);
      SrbDataBuffer[1] = BYTE2(v14);
    }
    else
    {
      *(_DWORD *)SrbDataBuffer = -1;
    }
    *v15 = 8;
    goto LABEL_42;
  }
  if ( (a3[1] & 0x1F) == 0x10 )
  {
    SrbDataBuffer[6] = BYTE1(v31);
    SrbDataBuffer[5] = BYTE2(v31);
    SrbDataBuffer[4] = BYTE3(v31);
    SrbDataBuffer[3] = BYTE4(v31);
    SrbDataBuffer[2] = BYTE5(v31);
    SrbDataBuffer[1] = BYTE6(v31);
    *SrbDataBuffer = HIBYTE(v31);
    SrbDataBuffer[10] = BYTE1(v30);
    SrbDataBuffer[9] = BYTE2(v30);
    SrbDataBuffer[8] = HIBYTE(v30);
    SrbDataBuffer[7] = v14;
    SrbDataBuffer[11] = v13;
    if ( (unsigned int)*v15 < 0x10 )
    {
LABEL_37:
      *v15 = v17;
LABEL_42:
      *(_BYTE *)(a2 + 3) = 1;
      return (unsigned int)v9;
    }
    SrbDataBuffer[12] &= 0xF0u;
    v18 = *(_QWORD *)(a1 + 8 * v11 + 1952);
    v19 = *(_DWORD *)(v18 + 104);
    if ( !v19 && *(_DWORD *)(a1 + 152) == (_DWORD)v9 )
    {
      v20 = SrbDataBuffer[13];
      if ( *(_DWORD *)(v18 + 52) == 512 )
        v21 = v20 & 0xF0 | 3;
      else
        v21 = v20 & 0xF0;
      SrbDataBuffer[13] = v21;
      goto LABEL_36;
    }
    v22 = *(_DWORD *)(a1 + 152);
    if ( v19 )
    {
      if ( !v22 )
        goto LABEL_29;
      if ( v19 < v22 )
        v22 = *(_DWORD *)(v18 + 104);
    }
    v19 = v22;
    if ( !v22 )
    {
      v23 = 1;
      goto LABEL_30;
    }
LABEL_29:
    v24 = ((((v19 - 1) >> 1) | (v19 - 1)) >> 2) | ((v19 - 1) >> 1) | (v19 - 1);
    v25 = (((v24 >> 4) | v24) >> 8) | (v24 >> 4) | v24;
    v23 = (v25 | HIWORD(v25)) + 1;
LABEL_30:
    v26 = v23 / *(_DWORD *)(v18 + 52);
    if ( v26 )
    {
      v27 = v9;
      while ( v26 > 1 )
      {
        v26 >>= 1;
        ++v27;
      }
      SrbDataBuffer[13] ^= (SrbDataBuffer[13] ^ v27) & 0xF;
    }
    else
    {
      SrbDataBuffer[13] &= 0xF0u;
    }
LABEL_36:
    v28 = SrbDataBuffer[14] & 0xC0;
    SrbDataBuffer[15] = v9;
    SrbDataBuffer[14] = v28;
    SrbDataBuffer[14] = v28 & 0x3F | (*(_BYTE *)(*(_QWORD *)(a1 + 8 * v11 + 1952) + 65LL) << 7);
    v17 = (unsigned int)*v15 < 0x20 ? 16 : 32;
    goto LABEL_37;
  }
  LOBYTE(v15) = 32;
  LOBYTE(v13) = 5;
  LOBYTE(v14) = 6;
  NVMeSetSenseData(a2, v14, v13, v15);
  LODWORD(v9) = -1056964601;
  return (unsigned int)v9;
}
