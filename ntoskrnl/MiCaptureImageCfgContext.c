/*
 * XREFs of MiCaptureImageCfgContext @ 0x1407F5190
 * Callers:
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiFreeImageCfgContext @ 0x140369018 (MiFreeImageCfgContext.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiLogRelocationRva @ 0x1407F4A00 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiCaptureImageCfgContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int *a9,
        __int64 a10)
{
  unsigned int v13; // ebx
  __int64 v14; // r10
  unsigned __int64 v15; // r8
  unsigned int v16; // r9d
  unsigned __int64 v17; // r14
  unsigned int v18; // r15d
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned __int64 v22; // r8
  unsigned int v23; // r9d
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // r14
  unsigned int v27; // edi
  unsigned int v28; // r15d
  char *Pool; // rax
  size_t v30; // r8
  char *v31; // r15
  unsigned int v32; // eax
  unsigned __int64 v33; // rdx
  int v34; // edx
  int v35; // ecx
  unsigned int v37; // [rsp+20h] [rbp-88h]
  unsigned int v38; // [rsp+24h] [rbp-84h]
  unsigned int v39; // [rsp+28h] [rbp-80h]
  int v40; // [rsp+34h] [rbp-74h]
  unsigned __int64 v41; // [rsp+48h] [rbp-60h]

  v13 = 0;
  v37 = 0;
  *a9 = 0;
  v14 = a10;
  *(_OWORD *)a10 = 0LL;
  *(_OWORD *)(a10 + 16) = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( *(_WORD *)(a6 + 48) == 523 )
  {
    v17 = *(_QWORD *)(a7 + 128);
    v18 = *(_DWORD *)(a7 + 136);
    v38 = v18;
    v19 = *(_DWORD *)(a7 + 144);
    v39 = v19;
    if ( (v19 & 0x4000) != 0 && a8 >= 0xB0 )
    {
      v15 = *(_QWORD *)(a7 + 160);
      v16 = *(_DWORD *)(a7 + 168);
    }
    v20 = *(_QWORD *)(a7 + 120);
  }
  else
  {
    v17 = *(unsigned int *)(a7 + 80);
    v18 = *(_DWORD *)(a7 + 84);
    v38 = v18;
    v19 = *(_DWORD *)(a7 + 88);
    v39 = v19;
    if ( (v19 & 0x4000) != 0 && a8 >= 0x70 )
    {
      v15 = *(unsigned int *)(a7 + 104);
      v16 = *(_DWORD *)(a7 + 108);
    }
    v20 = *(unsigned int *)(a7 + 76);
  }
  v41 = v20;
  if ( (v19 & 0x400) == 0 || !v17 )
  {
    v34 = 0;
    goto LABEL_47;
  }
  v21 = (v19 >> 28) + 4;
  if ( v17 >= a4 && v18 && v18 < 0xFFFFFFFF / v21 )
  {
    v40 = v19 & 0x4000;
    if ( (v19 & 0x4000) != 0 && v15 )
    {
      if ( v15 < a4 || !v16 || v16 >= 0xFFFFFFFF / v21 )
      {
        v34 = -1073741819;
        v37 = -1073741819;
        dword_140C654C0 = 10;
        goto LABEL_47;
      }
      v22 = v15 - a4;
      v23 = v21 * v16;
      v24 = v22 + v23;
      if ( v24 <= v22 || (v25 = a6, v24 > *(unsigned int *)(a6 + 16)) || v23 + 4 < v23 )
      {
        v34 = -1073741819;
        v37 = -1073741819;
        dword_140C654C0 = 11;
        goto LABEL_47;
      }
    }
    else
    {
      v25 = a6;
    }
    v26 = v17 - a4;
    v28 = v18 * v21;
    v27 = v28;
    if ( v28 + v26 <= v26 || v28 + v26 > *(unsigned int *)(v25 + 16) || v28 + 4 < v28 )
    {
      v34 = -1073741819;
      v37 = -1073741819;
      dword_140C654C0 = 5;
    }
    else
    {
      Pool = (char *)MiAllocatePool(256, v28, 0x5443694Du);
      if ( !Pool )
      {
        v37 = -1073741670;
        dword_140C654C0 = 6;
        v14 = a10;
        v34 = -1073741670;
        goto LABEL_47;
      }
      v30 = v28;
      v31 = Pool;
      memmove(Pool, (const void *)(v26 + a3), v30);
      MiLogRelocationRva(v26, v27, a2, a1);
      v32 = 0;
      if ( v27 )
      {
        while ( 1 )
        {
          v33 = *(unsigned int *)&v31[v32];
          if ( v33 >= a5 )
            break;
          if ( v32 && (unsigned int)v33 < v13 )
          {
            dword_140C654C0 = 9;
            goto LABEL_62;
          }
          v13 = *(_DWORD *)&v31[v32];
          v32 += v21;
          if ( v32 >= v27 )
            goto LABEL_28;
        }
        dword_140C654C0 = 8;
LABEL_62:
        v34 = -1073741701;
        v37 = -1073741701;
      }
      else
      {
LABEL_28:
        v34 = 0;
      }
      if ( v34 < 0 )
      {
        v14 = a10;
      }
      else
      {
        if ( v41 )
        {
          if ( v41 < a4 || v41 >= a4 + a5 )
          {
            v37 = -1073741701;
            dword_140C654C0 = 10;
            v14 = a10;
            v34 = -1073741701;
            goto LABEL_47;
          }
          v14 = a10;
          *(_DWORD *)(a10 + 24) = v41 - a4;
        }
        else
        {
          v14 = a10;
        }
        v35 = *a9 | 1;
        *a9 = v35;
        if ( _bittest16((const signed __int16 *)(a6 + 60), 0xEu) )
        {
          v35 |= 2u;
          *a9 = v35;
        }
        if ( (v39 & 0x8000) != 0 )
        {
          v35 |= 0x10u;
          *a9 = v35;
        }
        if ( v40 )
        {
          v35 |= 8u;
          *a9 = v35;
        }
        if ( (v39 & 0x100000) != 0 )
        {
          v35 |= 0x20u;
          *a9 = v35;
        }
        if ( (v39 & 0x400000) != 0 )
        {
          v35 |= 0x40u;
          *a9 = v35;
        }
        if ( (v39 & 0x800000) != 0 )
          *a9 = v35 | 0x80;
        *(_DWORD *)v14 = v39;
        *(_QWORD *)(v14 + 8) = v31;
        *(_DWORD *)(v14 + 16) = v38;
        *(_DWORD *)(v14 + 20) = v21;
      }
    }
  }
  else
  {
    v34 = -1073741819;
    v37 = -1073741819;
    dword_140C654C0 = 4;
  }
LABEL_47:
  if ( v34 < 0 )
    MiFreeImageCfgContext(v14);
  return v37;
}
