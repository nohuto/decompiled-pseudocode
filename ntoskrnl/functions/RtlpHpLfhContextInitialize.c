unsigned __int64 __fastcall RtlpHpLfhContextInitialize(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7)
{
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 i; // rcx
  __int64 v14; // rax
  unsigned __int8 v15; // cl
  __int64 v16; // rbx
  unsigned __int64 *v17; // rdi
  unsigned __int64 result; // rax

  memset((void *)a1, 0, 0x4C0uLL);
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 57) = a4;
  v11 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a5;
  v12 = *(_QWORD *)(a5 + 32);
  *(_WORD *)(a1 + 58) = a6 - a1;
  *(_OWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 40) = v12;
  *(_DWORD *)(a1 + 60) = *a7;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 8) ^= a1 ^ RtlpHpHeapGlobals;
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 )
    *(_QWORD *)(a1 + 40) = a1 ^ RtlpHpHeapGlobals ^ v14;
  v15 = 64;
  if ( a3 <= 0x40 )
    v15 = a3;
  *(_BYTE *)(a1 + 56) = v15;
  if ( v15 > 1u )
    *(_QWORD *)(a1 + 48) = (char *)qword_140010710
                         + ((unsigned __int64)((62 - (64 - v15)) * (64 - (unsigned int)v15 + 61)) >> 1);
  v16 = 32LL;
  memset64((void *)(a1 + 128), 1uLL, 0x81uLL);
  v17 = RtlpLowFragHeapRandomData;
  do
  {
    result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
    *v17++ = result;
    --v16;
  }
  while ( v16 );
  return result;
}
