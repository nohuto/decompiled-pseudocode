/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x14024B7F0
 * Callers:
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 */

ULONG64 __cdecl RtlFindSetBitsAndClearEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r14
  ULONG64 v8; // rbx
  unsigned __int64 v9; // r10
  ULONG64 v10; // rbp
  unsigned __int64 *v11; // rsi
  unsigned __int64 *v12; // r8
  signed __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  ULONG64 v16; // rbx
  __int64 v18; // rdx
  unsigned __int64 *v19; // rdi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  ULONG64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 *v29; // r10
  unsigned __int64 v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned __int64 *v33; // r9
  unsigned int v34; // r9d
  __int64 v35; // rcx
  ULONG64 v36; // r10
  int v37; // [rsp+88h] [rbp+10h]
  int v38; // [rsp+90h] [rbp+18h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v8 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v9 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    while ( 1 )
    {
      if ( v9 - v8 + 1 < NumberToFind )
      {
LABEL_16:
        v15 = -1LL;
        goto LABEL_75;
      }
      v10 = v9 - NumberToFind + 1;
      v11 = &Buffer[v10 >> 6];
      v12 = &Buffer[v8 >> 6];
      v13 = ~*v12 | ((1LL << (v8 & 0x3F)) - 1);
      if ( NumberToFind > 0x7F )
      {
        v29 = v11 + 1;
        if ( (v10 & 0x3F) == 0 )
          v29 = &Buffer[v10 >> 6];
        if ( v13 )
        {
          v30 = ~*++v12;
          if ( *v12 != -1LL )
            goto LABEL_56;
          v37 &= v30;
          v20 = !_BitScanReverse64(&v30, v13);
          if ( v20 )
            v31 = 64;
          else
            v31 = 63 - v30;
        }
        else
        {
          v31 = 0;
        }
        while ( 1 )
        {
          v15 = ((v12 - Buffer) << 6) - v31;
          if ( v15 > v10 )
            goto LABEL_16;
          v33 = &v12[(NumberToFind - v31) >> 6];
          while ( ++v12 != v33 )
          {
            if ( *v12 != -1LL )
              goto LABEL_56;
          }
          v34 = ((_BYTE)NumberToFind - (_BYTE)v31) & 0x3F;
          if ( (((_BYTE)NumberToFind - (_BYTE)v31) & 0x3F) == 0 )
            goto LABEL_11;
          v20 = !_BitScanForward64((unsigned __int64 *)&v35, ~*v12);
          if ( v20 )
            LODWORD(v35) = 64;
          if ( (unsigned int)v35 >= v34 )
            goto LABEL_11;
          do
          {
LABEL_56:
            if ( v12 > v29 )
              goto LABEL_16;
            ++v12;
          }
          while ( *v12 != -1LL );
          v38 &= ~*(_DWORD *)v12;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v32, ~*(v12 - 1));
          if ( v20 )
            v31 = 64;
          else
            v31 = 63 - v32;
        }
      }
      if ( NumberToFind >= 0x40 )
        break;
      if ( NumberToFind > 1 )
      {
        v18 = 0LL;
        v19 = &Buffer[v9 >> 6];
        while ( v13 != -1 )
        {
LABEL_19:
          v20 = !_BitScanForward64((unsigned __int64 *)&v21, v13);
          if ( v20 )
            LODWORD(v21) = 64;
          if ( (unsigned int)(v18 + v21) >= NumberToFind )
          {
            v23 = -v18;
LABEL_26:
            v15 = ((v12 - Buffer) << 6) + v23;
            goto LABEL_10;
          }
          v22 = NumberToFind;
          v23 = ~v13;
          while ( 1 )
          {
            v23 &= v23 >> (v22 >> 1);
            if ( !v23 )
              break;
            v22 -= v22 >> 1;
            if ( v22 <= 1 )
            {
              _BitScanForward64(&v23, v23);
              goto LABEL_26;
            }
          }
          if ( v12 == v19 )
            goto LABEL_16;
          v20 = !_BitScanReverse64((unsigned __int64 *)&v24, v13);
          if ( v20 )
            v18 = 64LL;
          else
            v18 = (unsigned int)(63 - v24);
          v13 = ~*++v12;
        }
        while ( 1 )
        {
          if ( ++v12 > v11 )
            goto LABEL_16;
          v13 = ~*v12;
          if ( *v12 )
          {
            v18 = 0LL;
            goto LABEL_19;
          }
        }
      }
      while ( v13 == -1 )
      {
        if ( ++v12 > v11 )
          goto LABEL_16;
        v13 = ~*v12;
      }
      _BitScanForward64(&v14, ~v13);
      v15 = v14 + ((v12 - Buffer) << 6);
LABEL_10:
      if ( v15 > v10 )
        goto LABEL_16;
LABEL_11:
      if ( v15 != -1LL )
      {
LABEL_12:
        v16 = v15;
        goto LABEL_13;
      }
LABEL_75:
      if ( !v8 )
        goto LABEL_12;
      v36 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v36 = SizeOfBitMap;
      v9 = v36 - 1;
      v8 = 0LL;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v13 < 0 )
        {
          if ( ++v12 > v11 )
            goto LABEL_16;
          v13 = ~*v12;
        }
        v20 = !_BitScanReverse64((unsigned __int64 *)&v25, v13);
        if ( v20 )
          v26 = 64;
        else
          v26 = 63 - v25;
        v15 = ((v12 - Buffer + 1) << 6) - v26;
        if ( v15 > v10 )
          goto LABEL_16;
        v27 = NumberToFind - v26;
        if ( NumberToFind == v26 )
          goto LABEL_11;
        v13 = ~*++v12;
        if ( v27 >= 0x40 )
          break;
LABEL_45:
        v20 = !_BitScanForward64(&v28, v13);
        if ( v20 )
          v28 = 64LL;
        if ( v28 >= v27 )
          goto LABEL_11;
      }
      if ( *v12 == -1LL )
      {
        v27 -= 64LL;
        if ( !v27 )
          goto LABEL_11;
        v13 = ~*++v12;
        goto LABEL_45;
      }
    }
  }
  v16 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_13:
  if ( v16 != -1LL )
    RtlClearBitsEx(BitMapHeader, v16, NumberToFind);
  return v16;
}
