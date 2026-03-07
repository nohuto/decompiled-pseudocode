__int64 __fastcall KiMceDispatch(_QWORD *a1, unsigned int a2)
{
  __m128i *IdtBase; // r8
  unsigned int Number; // ecx
  char *StackBase; // r14
  __int64 v6; // r9
  __int64 v7; // r8
  _QWORD *v8; // r10
  __m128i v9; // xmm0
  int v10; // eax
  int v11; // edx
  unsigned int v12; // r11d
  unsigned __int64 *v13; // r14
  unsigned __int64 v14; // rbx
  char v15; // r15
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rax
  int v20; // ecx
  _BYTE *v21; // rax
  char *v22; // rcx
  __int64 v23; // r11
  char v24; // al
  signed __int32 v26[8]; // [rsp+0h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp+18h]
  __int64 v28; // [rsp+38h] [rbp+18h]

  IdtBase = (__m128i *)KeGetPcr()->IdtBase;
  Number = KeGetPcr()->Prcb.Number;
  StackBase = (char *)KeGetPcr()->NtTib.StackBase;
  LODWORD(v27) = IdtBase[4];
  HIDWORD(v27) = _mm_cvtsi128_si32(_mm_srli_si128(IdtBase[4], 8));
  v6 = v27;
  v7 = *(_QWORD *)(v27 + 5120);
  v8 = *(_QWORD **)(v27 + 5128);
  v9 = _mm_srli_si128(*(__m128i *)(v27 + 16 * (a2 + 32LL)), 8);
  LODWORD(v28) = *(_OWORD *)(v27 + 16 * (a2 + 32LL));
  HIDWORD(v28) = _mm_cvtsi128_si32(v9);
  _InterlockedOr((volatile signed __int32 *)(v6 + 5168), 1u);
  v10 = *(_DWORD *)(v6 + 5172);
  if ( Number != v10 )
  {
    while ( (*(_DWORD *)(v6 + 5168) & 2) != 0 )
      _mm_pause();
    _InterlockedOr(v26, 0);
    v10 = *(_DWORD *)(v6 + 5172);
  }
  v11 = 4096;
  if ( Number == v10 )
  {
    if ( (*(_DWORD *)(v7 + 2452) & 0x20000) == 0 )
    {
      **(_QWORD **)(v7 + 1208) = 0xA3A03F5891C8B4E8uLL;
      **(_QWORD **)(v7 + 1216) = 0LL;
      **(_QWORD **)(v7 + 1224) = 0LL;
      **(_QWORD **)(v7 + 1232) = 0LL;
    }
    v12 = 1;
    v13 = (unsigned __int64 *)(StackBase + 36);
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 )
      {
        v15 = *(_BYTE *)(v7 + 2171);
        v16 = a1[3];
        v17 = *(unsigned int *)(v7 + 2228);
        if ( (v15 & 8) != 0 )
          v17 = 464LL;
        if ( v16 <= v14 && v16 > v14 - v17 )
          break;
        if ( (v15 & 8) != 0 )
        {
          v18 = *(_QWORD *)(v14 + 8);
          if ( v16 <= v18 && v16 > v18 - (unsigned int)(*(_DWORD *)(v7 + 2228) - 32) )
            break;
        }
      }
      ++v12;
      ++v13;
      if ( v12 >= 8 )
      {
        if ( v12 == 8 && *a1 - (_QWORD)v8 < 0x1000uLL )
        {
          v19 = (_QWORD *)a1[3];
          if ( *v19 == v7 + 2201 )
          {
            *a1 = *v19;
            a1[3] = v19 + 1;
          }
        }
        break;
      }
    }
    v20 = 4;
    *(_QWORD *)(v7 + 2206) = 0xC3C3C3C3C3C3C3C3uLL;
    v21 = (_BYTE *)(v7 + 2214);
    do
    {
      *v21++ = -61;
      --v20;
    }
    while ( v20 );
    _InterlockedAnd((volatile signed __int32 *)(v6 + 5168), 0xFFFFFFFD);
  }
  if ( (*(_DWORD *)(v6 + 5168) & 4) == 0 )
  {
    v22 = (char *)(v6 + 1024);
    v23 = 512LL;
    do
    {
      v11 -= 8;
      *v8 = *(_QWORD *)v22;
      v22 += 8;
      ++v8;
      --v23;
    }
    while ( v23 );
    for ( ; v11; --v11 )
    {
      v24 = *v22++;
      *(_BYTE *)v8 = v24;
      v8 = (_QWORD *)((char *)v8 + 1);
    }
  }
  *(_QWORD *)(v6 + 5136) = v7 + 2170;
  return v28;
}
