/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x140223E9C
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x140223B20 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x1402240DC (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentInitialize(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v8; // r10d
  unsigned int v9; // edi
  int v10; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rcx
  _WORD *v15; // rcx
  _WORD *v16; // rax
  _WORD *v17; // rdi
  unsigned __int64 v18; // rcx
  signed __int64 *v19; // rdi
  __int16 Ucb_high; // di
  __int64 result; // rax
  unsigned int v22; // r8d
  int v23; // [rsp+58h] [rbp+10h]

  *(_OWORD *)a1 = 0LL;
  LOWORD(v23) = a4;
  v8 = a2 / a3;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  v9 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v10 = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFFFFFF0;
  v11 = (a2 - v10) / a4;
  if ( v9 < v11 )
    v11 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v12 = (unsigned int)a1 >> 12;
  HIWORD(v23) = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFF0;
  *(_DWORD *)(a1 + 40) = v23 ^ DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v13, a3);
  *(_BYTE *)(a1 + 45) = v8;
  *(_BYTE *)(a1 + 44) = v13;
  *(_WORD *)(a1 + 32) = v11;
  v14 = (unsigned __int16)(8 * ((((unsigned __int64)(2 * v11) + 63) >> 6) + 6));
  *(_WORD *)(a1 + 46) = v14;
  v15 = (_WORD *)(a1 + v14);
  *(_WORD *)(a1 + 34) = v11;
  *(_BYTE *)(a1 + 38) = 2;
  v16 = &v15[(unsigned __int8)v8];
  v17 = v15 + 1;
  *v15 = 1;
  v18 = (2 * (unsigned __int64)(unsigned __int8)v8 - 2 + 1) >> 1;
  if ( v17 > v16 )
    v18 = 0LL;
  if ( v18 )
  {
    while ( v18 )
    {
      *v17++ = -1;
      --v18;
    }
  }
  v19 = (signed __int64 *)(a1 + 48);
  memset((void *)(a1 + 48), 0, ((unsigned __int64)(2 * v11) + 7) >> 3);
  if ( ((2 * (_BYTE)v11) & 0x3F) != 0 )
    v19[(unsigned __int64)(2 * v11) >> 6] |= ~((1LL << ((2 * v11) & 0x3F)) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    if ( ((a4 - 1) & a4) != 0 )
    {
      v22 = 4096;
      do
      {
        if ( (v22 - v10) % a4 )
        {
          _bittestandset64(v19, 2 * ((v22 - v10) / a4));
          --*(_WORD *)(a1 + 32);
          --*(_WORD *)(a1 + 34);
          ++*(_BYTE *)(a1 + 39);
        }
        v22 += 4096;
      }
      while ( v22 < a2 );
    }
    else
    {
      if ( (unsigned __int16)v10 - ((a4 - 1) & ((unsigned __int16)v10 + a4 - 1)) + a4 - 1 + a4 * v11 != a2 )
        NT_ASSERT("FirstBlockOffset + BlockSize * BlockCount == SubsegmentSize");
      HIWORD(v23) = v10 - ((a4 - 1) & (v10 + a4 - 1)) + a4 - 1;
      *(_DWORD *)(a1 + 40) = v23 ^ DWORD2(RtlpHpHeapGlobals) ^ v12;
    }
  }
  Ucb_high = HIWORD(KeGetCurrentThread()[1].Ucb);
  result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
  RtlpLowFragHeapRandomData[(unsigned __int8)Ucb_high >> 3] = result;
  return result;
}
