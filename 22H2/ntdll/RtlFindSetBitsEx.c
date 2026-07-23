/*
 * XREFs of RtlFindSetBitsEx @ 0x1800ECA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r14
  ULONG64 v7; // r11
  unsigned __int64 v8; // r10
  ULONG64 v10; // rdx
  ULONG64 v11; // rbp
  unsigned __int64 *v12; // rdi
  unsigned __int64 *v13; // r8
  signed __int64 v14; // r9
  unsigned __int64 *v15; // r10
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 *v20; // r9
  unsigned int v21; // r9d
  __int64 v22; // rcx
  ULONG64 v23; // r10
  __int64 v24; // rdx
  unsigned __int64 *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  ULONG64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v7 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    while ( 1 )
    {
      if ( v8 - v7 + 1 < NumberToFind )
      {
LABEL_4:
        v10 = -1LL;
        goto LABEL_27;
      }
      v11 = v8 - NumberToFind + 1;
      v12 = &Buffer[v11 >> 6];
      v13 = &Buffer[v7 >> 6];
      v14 = ~*v13 | ((1LL << (v7 & 0x3F)) - 1);
      if ( NumberToFind <= 0x7F )
        break;
      v15 = v12 + 1;
      if ( (v11 & 0x3F) == 0 )
        v15 = &Buffer[v11 >> 6];
      if ( v14 )
      {
        if ( *++v13 != -1LL )
          goto LABEL_14;
        v17 = !_BitScanReverse64((unsigned __int64 *)&v18, v14);
        if ( v17 )
LABEL_12:
          v16 = 64;
        else
          v16 = 63 - v18;
      }
      else
      {
        v16 = 0;
      }
LABEL_18:
      v10 = ((v13 - Buffer) << 6) - v16;
      if ( v10 > v11 )
        goto LABEL_4;
      v20 = &v13[(NumberToFind - v16) >> 6];
      while ( ++v13 != v20 )
      {
        if ( *v13 != -1LL )
          goto LABEL_14;
      }
      v21 = ((_BYTE)NumberToFind - (_BYTE)v16) & 0x3F;
      if ( (((_BYTE)NumberToFind - (_BYTE)v16) & 0x3F) != 0 )
      {
        v17 = !_BitScanForward64((unsigned __int64 *)&v22, ~*v13);
        if ( v17 )
          LODWORD(v22) = 64;
        if ( (unsigned int)v22 < v21 )
        {
LABEL_14:
          while ( v13 <= v15 )
          {
            if ( *++v13 == -1LL )
            {
              v17 = !_BitScanReverse64((unsigned __int64 *)&v19, ~*(v13 - 1));
              if ( v17 )
                goto LABEL_12;
              v16 = 63 - v19;
              goto LABEL_18;
            }
          }
          goto LABEL_4;
        }
      }
LABEL_26:
      if ( v10 != -1LL )
        return v10;
LABEL_27:
      if ( !v7 )
        return v10;
      v23 = NumberToFind + HintIndex;
      if ( NumberToFind + HintIndex > SizeOfBitMap )
        v23 = SizeOfBitMap;
      v8 = v23 - 1;
      v7 = 0LL;
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v24 = 0LL;
        v25 = &Buffer[v8 >> 6];
        while ( v14 != -1 )
        {
LABEL_38:
          v17 = !_BitScanForward64((unsigned __int64 *)&v26, v14);
          if ( v17 )
            LODWORD(v26) = 64;
          if ( (unsigned int)(v24 + v26) >= NumberToFind )
          {
            v28 = -v24;
LABEL_67:
            v10 = ((v13 - Buffer) << 6) + v28;
            goto LABEL_68;
          }
          v27 = NumberToFind;
          v28 = ~v14;
          while ( 1 )
          {
            v28 &= v28 >> (v27 >> 1);
            if ( !v28 )
              break;
            v27 -= v27 >> 1;
            if ( v27 <= 1 )
            {
              _BitScanForward64(&v28, v28);
              goto LABEL_67;
            }
          }
          if ( v13 == v25 )
            goto LABEL_4;
          v17 = !_BitScanReverse64((unsigned __int64 *)&v33, v14);
          if ( v17 )
            v24 = 64LL;
          else
            v24 = (unsigned int)(63 - v33);
          v14 = ~*++v13;
        }
        while ( 1 )
        {
          if ( ++v13 > v12 )
            goto LABEL_4;
          v14 = ~*v13;
          if ( v14 != -1 )
          {
            v24 = 0LL;
            goto LABEL_38;
          }
        }
      }
      while ( v14 == -1 )
      {
        if ( ++v13 > v12 )
          goto LABEL_4;
        v14 = ~*v13;
      }
      _BitScanForward64(&v34, ~v14);
      v10 = v34 + ((v13 - Buffer) << 6);
LABEL_68:
      if ( v10 > v11 )
        goto LABEL_4;
      goto LABEL_26;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14 < 0 )
        {
          if ( ++v13 > v12 )
            goto LABEL_4;
          v14 = ~*v13;
        }
        v17 = !_BitScanReverse64((unsigned __int64 *)&v29, v14);
        if ( v17 )
          v30 = 64;
        else
          v30 = 63 - v29;
        v10 = ((v13 - Buffer + 1) << 6) - v30;
        if ( v10 > v11 )
          goto LABEL_4;
        v31 = NumberToFind - v30;
        if ( NumberToFind == v30 )
          goto LABEL_26;
        v14 = ~*++v13;
        if ( v31 >= 0x40 )
          break;
LABEL_57:
        v17 = !_BitScanForward64(&v32, v14);
        if ( v17 )
          v32 = 64LL;
        if ( v32 >= v31 )
          goto LABEL_26;
      }
      if ( *v13 == -1LL )
      {
        v31 -= 64LL;
        if ( !v31 )
          goto LABEL_26;
        v14 = ~*++v13;
        goto LABEL_57;
      }
    }
  }
  return v7 & 0xFFFFFFFFFFFFFFF8uLL;
}
