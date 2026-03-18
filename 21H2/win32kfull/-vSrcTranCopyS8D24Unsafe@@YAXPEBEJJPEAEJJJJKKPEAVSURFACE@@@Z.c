/*
 * XREFs of ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0277158
 * Callers:
 *     vSrcTranCopyS8D24 @ 0x1C02790B0 (vSrcTranCopyS8D24.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D60B4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ulBlendPixelCT @ 0x1C0276300 (ulBlendPixelCT.c)
 */

void __fastcall vSrcTranCopyS8D24Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // rbx
  unsigned int v14; // edx
  __int64 v15; // r12
  const unsigned __int8 *v16; // r14
  unsigned __int8 *v17; // rdi
  unsigned int v18; // r13d
  unsigned int near **v19; // rcx
  const unsigned __int8 *v21; // rsi
  unsigned __int8 *v22; // rbx
  unsigned __int8 *v23; // r12
  unsigned int *v24; // rcx
  unsigned int v25; // edx
  __int64 v26; // rax
  _BYTE *v27; // rbx
  unsigned int v28; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v30; // [rsp+40h] [rbp-98h]
  unsigned int near **v31; // [rsp+48h] [rbp-90h]
  const unsigned __int8 *v32; // [rsp+50h] [rbp-88h]
  _BYTE v33[120]; // [rsp+60h] [rbp-78h] BYREF

  v12 = a2;
  memset(v33, 0, 0x40uLL);
  v14 = a9;
  v28 = a9 & 0xFFFFFF;
  a9 = 0;
  v15 = (unsigned int)(3 * (a6 - a5));
  v29 = 3 * (a6 - a5);
  v16 = &a1[v12];
  v17 = &a4[3 * a5];
  v18 = *v17 | (*(unsigned __int16 *)(v17 + 1) << 8);
  v30 = v18;
  v19 = pvFillOpaqTableCT(4u, v14, v18, a11, (struct _BLENDINFO *)v33, 1);
  v31 = v19;
  while ( a8 )
  {
    v21 = v16;
    v32 = v16;
    v22 = v17;
    v23 = &v17[v15];
    while ( v22 < v23 )
    {
      if ( *v21 )
      {
        if ( *v21 == 114 )
        {
          v24 = &v28;
        }
        else
        {
          v25 = *v22 | (*(unsigned __int16 *)(v22 + 1) << 8);
          a10 = v25;
          v26 = *v21;
          if ( v25 == v18 )
          {
            v24 = (unsigned int *)v19 + v26;
          }
          else
          {
            a9 = ulBlendPixelCT((__int64)v33, v25, (unsigned __int8 *)off_1C03260D0 + 4 * v26);
            v24 = &a9;
          }
        }
        *v22 = *(_BYTE *)v24;
        v27 = v22 + 1;
        *v27 = *((_BYTE *)v24 + 1);
        v27[1] = *((_BYTE *)v24 + 2);
        v22 = v27 + 2;
        v19 = v31;
      }
      else
      {
        v22 += 3;
      }
      v32 = ++v21;
    }
    --a8;
    v16 += a3;
    v17 += a7;
    v15 = v29;
  }
}
