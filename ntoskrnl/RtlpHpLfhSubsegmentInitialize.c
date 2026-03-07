__int64 __fastcall RtlpHpLfhSubsegmentInitialize(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v7; // r10d
  unsigned int v9; // edi
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  unsigned __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rcx
  _WORD *v15; // rcx
  _WORD *v16; // rax
  _WORD *v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  __int16 Spare18_high; // di
  __int64 result; // rax
  int v22; // [rsp+68h] [rbp+10h]
  int v23; // [rsp+70h] [rbp+18h]

  v7 = a2 / a3;
  *(_OWORD *)a1 = 0LL;
  LOWORD(v22) = a4;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  v9 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v23 = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFFFFFF0;
  v10 = (a2 - v23) / a4;
  if ( v9 < v10 )
    v10 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v11 = (unsigned int)a1 >> 12;
  HIWORD(v22) = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFF0;
  *(_DWORD *)(a1 + 40) = v22 ^ qword_140C6AF48 ^ ((unsigned int)a1 >> 12);
  v12 = 2 * v10;
  _BitScanForward(&v13, a3);
  *(_BYTE *)(a1 + 45) = v7;
  *(_BYTE *)(a1 + 44) = v13;
  *(_WORD *)(a1 + 32) = v10;
  v14 = (unsigned __int16)(8 * (((v12 + 63) >> 6) + 6));
  *(_WORD *)(a1 + 46) = v14;
  v15 = (_WORD *)(a1 + v14);
  *(_WORD *)(a1 + 34) = v10;
  *(_BYTE *)(a1 + 38) = 2;
  v16 = &v15[(unsigned __int8)v7];
  v17 = v15 + 1;
  *v15 = 1;
  v18 = (2 * (unsigned __int64)(unsigned __int8)v7 - 2 + 1) >> 1;
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
  memset((void *)(a1 + 48), 0, (v12 + 7) >> 3);
  if ( ((2 * (_BYTE)v10) & 0x3F) != 0 )
    *(_QWORD *)(a1 + 8 * (v12 >> 6) + 48) |= ~((1LL << ((2 * v10) & 0x3F)) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    if ( ((a4 - 1) & a4) != 0 )
    {
      v19 = 4096;
      do
      {
        if ( (v19 - v23) % a4 )
        {
          _bittestandset64((signed __int64 *)(a1 + 48), 2 * ((v19 - v23) / a4));
          --*(_WORD *)(a1 + 32);
          --*(_WORD *)(a1 + 34);
          ++*(_BYTE *)(a1 + 39);
        }
        v19 += 4096;
      }
      while ( v19 < a2 );
    }
    else
    {
      if ( (unsigned __int16)v23 - ((a4 - 1) & ((unsigned __int16)v23 + a4 - 1)) + a4 - 1 + a4 * v10 != a2 )
        NT_ASSERT("FirstBlockOffset + BlockSize * BlockCount == SubsegmentSize");
      HIWORD(v22) = v23 - ((a4 - 1) & (v23 + a4 - 1)) + a4 - 1;
      *(_DWORD *)(a1 + 40) = v22 ^ qword_140C6AF48 ^ v11;
    }
  }
  Spare18_high = HIWORD(KeGetCurrentThread()[1].Spare18);
  result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
  RtlpLowFragHeapRandomData[(unsigned __int8)Spare18_high >> 3] = result;
  return result;
}
