/*
 * XREFs of ?vSrcTranCopyS1D8@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0298070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D8(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int8 a9)
{
  int v9; // r14d
  int v11; // r11d
  int v12; // r12d
  int v13; // edi
  unsigned int v15; // ebp
  unsigned __int8 *v16; // r8
  __int64 v17; // rsi
  unsigned int v18; // edx
  const unsigned __int8 *v19; // rsi
  const unsigned __int8 *v20; // r9
  __int64 v21; // rdi
  unsigned __int8 *v22; // rsi
  unsigned __int8 *v23; // r10
  unsigned __int64 v24; // rax
  _BYTE *v25; // r9
  unsigned __int64 *v26; // r8
  unsigned __int64 v27; // rax
  int v28; // ecx
  signed int v29; // r11d
  unsigned __int8 *v30; // rdx
  unsigned __int8 *v31; // r9
  char v32; // al
  unsigned __int8 *v33; // rcx
  unsigned __int8 *v34; // rax
  unsigned __int8 *v35; // r9
  __int64 v36; // r10
  const unsigned __int8 *v37; // rdx
  __int64 v38; // rbx
  char v39; // cl
  unsigned __int8 *v40; // r8
  unsigned __int8 *v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+10h] [rbp-58h]
  const unsigned __int8 *v43; // [rsp+18h] [rbp-50h]
  int v45; // [rsp+78h] [rbp+10h]

  v9 = a5;
  v11 = a7;
  v12 = a3;
  v13 = a6;
  v15 = a5 & 7;
  v45 = 255 >> (a5 & 7);
  v16 = &a4[a5 & 0xFFFFFFF8];
  v17 = (__int64)a2 >> 3;
  v18 = (a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8);
  v19 = &a1[v17];
  v20 = v19;
  v42 = a8 * a7;
  v41 = &v16[v42];
  v43 = v19;
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    v21 = 0x101010101010101LL * a9;
    v22 = &v16[v42];
    do
    {
      v23 = &v16[v18];
      if ( ((unsigned __int8)v45 & *v20) != 0 )
      {
        v21 = 0x101010101010101LL * a9;
        v24 = dword_1C032A390[(unsigned __int64)(unsigned __int8)(v45 & *v20) >> 4] | ((unsigned __int64)dword_1C032A390[(unsigned __int8)v45 & *v20 & 0xF] << 32);
        *(_QWORD *)v16 = v21 & v24 | *(_QWORD *)v16 & ~v24;
      }
      v25 = v20 + 1;
      v26 = (unsigned __int64 *)(v16 + 8);
      if ( v26 != (unsigned __int64 *)v23 )
      {
        do
        {
          if ( *v25 )
          {
            v27 = dword_1C032A390[(unsigned __int64)(unsigned __int8)*v25 >> 4] | ((unsigned __int64)dword_1C032A390[*v25 & 0xF] << 32);
            *v26 = v21 & v27 | *v26 & ~v27;
          }
          ++v25;
          ++v26;
        }
        while ( v26 != (unsigned __int64 *)v23 );
        v22 = v41;
      }
      v16 = (unsigned __int8 *)v26 + (int)(a7 - v18);
      v20 = &v25[v12 - (((a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8)) >> 3)];
    }
    while ( v16 != v22 );
    v11 = a7;
    v13 = a6;
    v19 = v43;
    v15 = a5 & 7;
    v9 = a5;
    v12 = a3;
  }
  v28 = v13 & 7;
  if ( (v13 & 7) != 0 )
  {
    if ( ((v13 ^ v9) & 0xFFFFFFF8) != 0 )
    {
      v34 = &a4[v13 & 0xFFFFFFFFFFFFFFF8uLL];
      v35 = &v34[v42];
      v36 = v11 - v28;
      v37 = &a1[(__int64)(v13 + a2 - v9) >> 3];
      v38 = v13 & 7;
      do
      {
        v39 = *v37;
        v40 = &v34[v38];
        if ( *v37 )
        {
          do
          {
            if ( v39 < 0 )
              *v34 = a9;
            v39 *= 2;
            ++v34;
          }
          while ( v34 != v40 );
        }
        else
        {
          v34 += v38;
        }
        v34 += v36;
        v37 += v12;
      }
      while ( v34 != v35 );
    }
    else if ( (int)(v28 - v15) > 0 )
    {
      v29 = v11 - (v28 - v15);
      v30 = &a4[v9];
      v31 = &v30[v42];
      do
      {
        v32 = *v19 << v15;
        v33 = &v30[(v13 & 7) - (unsigned __int64)v15];
        do
        {
          if ( v32 < 0 )
            *v30 = a9;
          v32 *= 2;
          ++v30;
        }
        while ( v30 != v33 );
        v30 += v29;
        v19 += v12;
      }
      while ( v30 != v31 );
    }
  }
}
