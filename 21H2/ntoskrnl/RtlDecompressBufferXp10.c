/*
 * XREFs of RtlDecompressBufferXp10 @ 0x1409C0EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtractBitMap @ 0x1405E5500 (RtlExtractBitMap.c)
 *     Xp10ExecuteHuffmanDecode @ 0x1409C2AF0 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ReadAndValidateCrc @ 0x1409C4F84 (Xp10ReadAndValidateCrc.c)
 *     Xp10ReadMtfHeader @ 0x1409C505C (Xp10ReadMtfHeader.c)
 *     Xp10ValidateFrameHeaderAndFillParameters @ 0x1409C52E0 (Xp10ValidateFrameHeaderAndFillParameters.c)
 */

__int64 __fastcall RtlDecompressBufferXp10(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  unsigned int v10; // edi
  __int64 result; // rax
  int v12; // r11d
  unsigned int v13; // r13d
  unsigned int v14; // r14d
  unsigned int v15; // r10d
  unsigned __int8 *v16; // r9
  unsigned int v17; // r11d
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned __int8 *v20; // r9
  int v21; // ebx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // r9d
  unsigned int v27; // r12d
  _OWORD *v28; // [rsp+20h] [rbp-50h] BYREF
  int v29; // [rsp+28h] [rbp-48h] BYREF
  __int16 v30; // [rsp+2Ch] [rbp-44h]
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-38h]
  unsigned int v33; // [rsp+3Ch] [rbp-34h]
  __int64 v34; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-28h]
  unsigned int v36; // [rsp+4Ch] [rbp-24h]
  __int64 v37; // [rsp+50h] [rbp-20h] BYREF
  __int64 v38; // [rsp+58h] [rbp-18h]
  __int64 v39; // [rsp+60h] [rbp-10h] BYREF
  __int64 v40; // [rsp+68h] [rbp-8h]
  __int64 v41; // [rsp+A0h] [rbp+30h]

  v41 = a1;
  v37 = 0LL;
  v7 = a3;
  LODWORD(v38) = 0;
  v39 = 0LL;
  LODWORD(v40) = 0;
  v29 = 0;
  v30 = 0;
  if ( (unsigned int)(a4 - 6) <= 0x1FFFFFF9 )
  {
    LODWORD(v28) = *(_DWORD *)a3;
    v10 = 48;
    WORD2(v28) = *(_WORD *)(a3 + 4);
    v31 = a3;
    result = Xp10ValidateFrameHeaderAndFillParameters(&v28, &v29);
    if ( (int)result < 0 )
      return result;
    v34 = a1;
    v13 = 8 * v12;
    v36 = a2;
    *(_QWORD *)a7 = &v29;
    v14 = 0;
    v28 = (_OWORD *)(a7 + 8);
    v35 = 0;
    *(_OWORD *)(a7 + 8) = 0LL;
    while ( 1 )
    {
      v15 = v10 + 32;
      if ( v10 + 32 > v13 )
        break;
      v16 = (unsigned __int8 *)(v7 + ((unsigned __int64)v10 >> 3));
      v17 = 8 - (v10 & 7);
      v18 = v17;
      if ( v17 >= 0x20 )
        v18 = 32LL;
      v19 = *v16;
      v20 = v16 + 1;
      v21 = *(_DWORD *)&byte_14001BB70[4 * v18] & (v19 >> (8 - v17));
      v22 = (unsigned int)(32 - v18);
      if ( (unsigned int)v22 >= 8 )
      {
        v23 = (unsigned __int64)(unsigned int)v22 >> 3;
        do
        {
          v24 = *v20 << v17;
          LOBYTE(v17) = v17 + 8;
          v21 |= v24;
          v22 = (unsigned int)(v22 - 8);
          ++v20;
          --v23;
        }
        while ( v23 );
      }
      if ( (_DWORD)v22 )
        v21 |= (*v20 & *(_DWORD *)&byte_14001BB70[4 * v22]) << v17;
      v32 = v10 + 32;
      v25 = v21 & 0xFFFFFFF;
      if ( (v21 & 0xFFFFFFFu) < 0x20 || v10 + v25 > v13 || (v21 & 0x10000000) != 0 )
        break;
      v26 = v25 - 32;
      v10 += v25;
      v33 = v15 + v25 - 32;
      if ( (v21 & 0x20000000) != 0 )
      {
        if ( (v21 & 0x40000000) != 0 )
        {
          result = Xp10ReadMtfHeader(&v29, v28, &v31);
          if ( (int)result < 0 )
            return result;
        }
        result = Xp10ExecuteHuffmanDecode(a7, &v31, &v34);
        if ( (int)result < 0 )
          return result;
        v10 = v32;
        v7 = v31;
        a2 = v36;
        v14 = v35;
        v41 = v34;
      }
      else
      {
        if ( (v26 & 7) != 0 )
          return 3221226050LL;
        v27 = v14 + (v26 >> 3);
        if ( v27 > a2 )
          return 3221226050LL;
        LODWORD(v39) = v15 + v26;
        v40 = v7;
        LODWORD(v37) = 8 * (a2 - v14);
        v38 = v41 + v14;
        RtlExtractBitMap((__int64)&v39, (unsigned int *)&v37, v15, v26);
        v14 = v27;
        v35 = v27;
        v32 = v10;
        *v28 = 0LL;
      }
      if ( v21 < 0 )
      {
        v33 = v13;
        result = Xp10ReadAndValidateCrc(&v29, &v34, &v31);
        *a6 = v35;
        return result;
      }
    }
  }
  return 3221226050LL;
}
