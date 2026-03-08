/*
 * XREFs of MiCompressRelocations @ 0x1407F41B0
 * Callers:
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char *__fastcall MiCompressRelocations(__int64 a1, int a2)
{
  __int64 v2; // r14
  char v4; // si
  char v5; // bl
  __int64 v7; // r11
  __int64 v8; // rcx
  _WORD *v9; // r10
  __int16 v10; // di
  unsigned __int16 v11; // r8
  unsigned int v12; // ebp
  unsigned int v13; // r9d
  __int16 v14; // dx
  unsigned __int16 v15; // ax
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned int v18; // ecx
  bool v19; // zf
  char *Pool; // rax
  char *v21; // r12
  _DWORD *v22; // r8
  _QWORD *v23; // rsi
  unsigned int v24; // ebp
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r15
  unsigned __int64 v30; // rax
  bool v32; // cf
  __int64 v33; // rcx
  _WORD *v34; // r8
  __int16 v35; // ax
  __int16 v36; // bx
  unsigned int v37; // r11d
  unsigned int v38; // r9d
  __int16 v39; // cx
  unsigned __int16 v40; // dx
  int v42; // [rsp+80h] [rbp+18h]
  char *v43; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = 0;
  v7 = 0LL;
  do
  {
    v8 = *(unsigned int *)(v2 + 4);
    v9 = (_WORD *)(v2 + 8);
    a2 -= v8;
    v2 += v8;
    v10 = 4;
    v11 = 0;
    v12 = 0;
    v13 = (unsigned int)(v8 - 8) >> 1;
    if ( v13 )
    {
      do
      {
        v14 = *v9 >> 12;
        if ( v14 )
        {
          if ( v5 != (_BYTE)v14 )
          {
            if ( v4 )
              return (char *)a1;
            v5 = v14;
            v4 = 1;
          }
          v15 = *v9 & 0xFFF;
          if ( v15 <= v11 && v11 )
            return (char *)a1;
          v16 = v15 - v11;
          if ( v16 == v10 )
          {
            v17 = v7 + 2;
            v18 = v12 + 1;
            if ( v12 != 254 )
              v17 = v7;
            v7 = v17;
            v19 = v12 == 254;
            v12 = 0;
            if ( !v19 )
              v12 = v18;
          }
          else
          {
            if ( v12 )
            {
              v32 = v12 < 4;
              v19 = v12 == 4;
              v12 = 0;
              v7 += (!v32 && !v19) + 1LL;
            }
            v10 = v16;
            if ( (unsigned __int16)v16 >= 0xEBu )
              v7 += 2LL;
            else
              ++v7;
          }
          v11 = *v9 & 0xFFF;
        }
        --v13;
        ++v9;
      }
      while ( v13 );
      if ( v12 )
      {
        if ( v12 <= 4 )
          ++v7;
        else
          v7 += 2LL;
      }
    }
    v7 += (v7 & 1) + 2;
  }
  while ( a2 );
  if ( !v4 )
    return (char *)a1;
  Pool = (char *)MiAllocatePool(256, v7 + 8 * (*(unsigned int *)(a1 + 56) + 13LL), 0x65526D4Du);
  v43 = Pool;
  v21 = Pool;
  if ( !Pool )
    return (char *)a1;
  v22 = (_DWORD *)a1;
  v23 = Pool + 104;
  v24 = 0;
  v25 = *(_QWORD *)(a1 + 32) - *(_QWORD *)a1;
  *(_OWORD *)Pool = *(_OWORD *)a1;
  v26 = v25 >> 3;
  v42 = v26;
  *((_OWORD *)Pool + 1) = *(_OWORD *)(a1 + 16);
  *((_OWORD *)Pool + 2) = *(_OWORD *)(a1 + 32);
  *((_OWORD *)Pool + 3) = *(_OWORD *)(a1 + 48);
  *((_OWORD *)Pool + 4) = *(_OWORD *)(a1 + 64);
  *((_OWORD *)Pool + 5) = *(_OWORD *)(a1 + 80);
  *((_QWORD *)Pool + 12) = *(_QWORD *)(a1 + 96);
  Pool[64] = v5;
  *(_QWORD *)Pool = Pool + 104;
  v27 = (__int64)&Pool[8 * *(unsigned int *)(a1 + 56) + 104];
  *((_QWORD *)Pool + 4) = v27;
  v28 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v26 )
  {
    v29 = a1 - (_QWORD)Pool;
    do
    {
      if ( v24 < v22[14] )
      {
        v30 = *(_QWORD *)((char *)v23 + v29);
        if ( v30 > 1 )
        {
          *v23 = v27;
          if ( (*((_BYTE *)v23 + v29) & 1) != 0 )
            *v23 = v27 | 1;
          v33 = *(unsigned int *)(v28 + 4);
          v34 = (_WORD *)(v28 + 8);
          v28 += v33;
          v35 = 0;
          v36 = 4;
          v37 = 0;
          v38 = (unsigned int)(v33 - 8) >> 1;
          if ( v38 )
          {
            do
            {
              if ( *v34 >= 0x1000u )
              {
                v39 = *v34 & 0xFFF;
                v40 = v39 - v35;
                if ( v39 - v35 == v36 )
                {
                  if ( ++v37 == 255 )
                  {
                    *(_WORD *)v27 = -17;
                    v37 = 0;
                    v27 += 2LL;
                  }
                }
                else
                {
                  if ( v37 )
                  {
                    if ( v37 > 4 )
                    {
                      *(_BYTE *)v27 = -17;
                      *(_BYTE *)(v27 + 1) = v37;
                      v27 += 2LL;
                    }
                    else
                    {
                      *(_BYTE *)v27++ = -17 - v37;
                    }
                    v37 = 0;
                  }
                  v36 = v39 - v35;
                  if ( v40 >= 0xEBu )
                  {
                    *(_BYTE *)v27 = v40 | 0xF0;
                    *(_BYTE *)(v27 + 1) = v40 >> 4;
                    v27 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v27++ = v40;
                  }
                }
                v35 = v39;
              }
              ++v34;
              --v38;
            }
            while ( v38 );
            LODWORD(v26) = v42;
          }
          if ( v37 )
          {
            if ( v37 <= 4 )
            {
              *(_BYTE *)v27++ = -17 - v37;
            }
            else
            {
              *(_BYTE *)v27 = -17;
              *(_BYTE *)(v27 + 1) = v37;
              v27 += 2LL;
            }
          }
          v22 = (_DWORD *)a1;
          *(_WORD *)v27 = 240;
          v27 += 2LL;
          if ( (v27 & 1) != 0 )
            ++v27;
        }
        else
        {
          *v23 = v30;
        }
      }
      ++v24;
      ++v23;
    }
    while ( v24 < (unsigned int)v26 );
    v21 = v43;
  }
  ExFreePoolWithTag(v22, 0);
  return v21;
}
