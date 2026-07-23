/*
 * XREFs of RtlCopyBitMapEx @ 0x1402A4DD0
 * Callers:
 *     MiSelectRelocationStartHint @ 0x1406C2F44 (MiSelectRelocationStartHint.c)
 *     MiResizeAweBitMap @ 0x1408D6644 (MiResizeAweBitMap.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlpCopyBitMapTailToHeadEx @ 0x140588864 (RtlpCopyBitMapTailToHeadEx.c)
 */

unsigned __int64 __fastcall RtlCopyBitMapEx(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r9
  __int64 v15; // r9
  __int64 *v16; // r8
  __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  char v21; // di
  __int64 v22; // rbp
  __int64 v23; // r10

  result = *(_QWORD *)a1;
  v6 = *a2 - a3;
  if ( *(_QWORD *)a1 <= v6 )
    v6 = *(_QWORD *)a1;
  if ( v6 )
  {
    v7 = a2[1];
    v8 = *(__int64 **)(a1 + 8);
    result = a3 >> 6;
    v9 = v7 + 8 * (a3 >> 6);
    if ( (unsigned __int64)v8 <= v9 && (result = (unsigned __int64)&v8[(v6 - 1) >> 6], v9 <= result) )
    {
      return RtlpCopyBitMapTailToHeadEx(a1, a2, a3, v6);
    }
    else
    {
      v10 = a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v15 = a3 & 0x3F;
        v16 = (__int64 *)(v7 + 8 * (a3 >> 6));
        if ( v6 >= 0x40 )
        {
          v17 = *v16;
          v18 = v6 >> 6;
          v6 += -64LL * (v6 >> 6);
          do
          {
            *v16++ = ((((1LL << (64 - (unsigned __int8)v15)) - 1) & *v8) << v15) | v17 & ((1LL << v15) - 1);
            v19 = ~((1LL << (64 - (unsigned __int8)v15)) - 1) & *v8++;
            result = v19 >> (64 - (unsigned __int8)v15);
            v17 = result | *v16 & ~((1LL << v15) - 1);
            *v16 = v17;
            --v18;
          }
          while ( v18 );
        }
        if ( v6 )
        {
          v20 = *v8;
          v21 = 64 - v15;
          v22 = *v16;
          if ( v6 > 64 - v15 )
          {
            *v16 = v22 & ((1LL << v15) - 1) | ((v20 & ((1LL << v21) - 1)) << v15);
            v23 = 1LL << ((unsigned __int8)v6 + (unsigned __int8)v15 - 64);
            result = (*v8 & (unsigned __int64)((v23 - 1) << v21)) >> v21;
            v16[1] = result | v16[1] & ~(v23 - 1);
          }
          else
          {
            result = ((v20 & ((1LL << v6) - 1)) << v15) | v22 & ~(((1LL << v6) - 1) << v15);
            *v16 = result;
          }
        }
      }
      else
      {
        v11 = v6;
        v12 = v6 & 7;
        v13 = v11 >> 3;
        if ( v13 )
          result = (unsigned __int64)memmove((void *)(v10 + v7), *(const void **)(a1 + 8), v13);
        if ( v12 )
        {
          v14 = (_BYTE *)(v13 + v10 + a2[1]);
          *v14 &= ~((1 << v12) - 1);
          result = *(_QWORD *)(a1 + 8);
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
        }
      }
    }
  }
  return result;
}
