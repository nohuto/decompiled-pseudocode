/*
 * XREFs of ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0277490
 * Callers:
 *     ?vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C02773C0 (-vSrcTranCopyS8D24@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1C0273D88 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 *     ulBlendPixelCT @ 0x1C0273E48 (ulBlendPixelCT.c)
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
  int v14; // edx
  unsigned int v15; // r14d
  const unsigned __int8 *v16; // r15
  unsigned __int8 *v17; // rdi
  __int64 v18; // rdx
  const unsigned __int8 *v20; // rsi
  unsigned __int8 *v21; // rbx
  unsigned __int8 *v22; // rax
  __int64 v23; // rcx
  _BYTE *v24; // r12
  unsigned int *v25; // rcx
  unsigned int v26; // r14d
  __int64 v27; // rax
  unsigned int v28; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int v29; // [rsp+3Ch] [rbp-9Ch]
  unsigned int v30; // [rsp+40h] [rbp-98h]
  unsigned int v31; // [rsp+44h] [rbp-94h]
  __int64 v32; // [rsp+48h] [rbp-90h]
  unsigned __int8 *v33; // [rsp+50h] [rbp-88h]
  const unsigned __int8 *v34; // [rsp+58h] [rbp-80h]
  int v35[30]; // [rsp+60h] [rbp-78h] BYREF

  v12 = a2;
  memset_0(v35, 0, 0x40uLL);
  v14 = a9;
  v28 = a9 & 0xFFFFFF;
  a9 = 0;
  v15 = 3 * (a6 - a5);
  v30 = v15;
  v16 = &a1[v12];
  v17 = &a4[3 * a5];
  v29 = *v17 | (*(unsigned __int16 *)(v17 + 1) << 8);
  v31 = v29;
  v18 = pvFillOpaqTableCT(4LL, v14, v29, a11, (struct BLENDINFO *)v35, 1);
  v32 = v18;
  while ( a8 )
  {
    v20 = v16;
    v34 = v16;
    v21 = v17;
    v22 = &v17[v15];
    v33 = v22;
    while ( v21 < v22 )
    {
      v23 = *v20;
      if ( (_BYTE)v23 )
      {
        v24 = v21 + 1;
        if ( (_BYTE)v23 == 114 )
        {
          v25 = &v28;
        }
        else
        {
          v26 = *v21 | (((unsigned __int8)*v24 | (v21[2] << 8)) << 8);
          a10 = v26;
          if ( v26 == v29 )
          {
            v25 = (unsigned int *)(v18 + 4 * v23);
          }
          else
          {
            v27 = SGDGetSessionState(v23);
            a9 = ulBlendPixelCT(v35, v26, (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v27 + 32) + 8592LL) + 4LL * *v20));
            v25 = &a9;
            v18 = v32;
          }
        }
        *v21 = *(_BYTE *)v25;
        *v24 = *((_BYTE *)v25 + 1);
        v21[2] = *((_BYTE *)v25 + 2);
        v21 += 3;
        v22 = v33;
      }
      else
      {
        v21 += 3;
      }
      v34 = ++v20;
    }
    --a8;
    v16 += a3;
    v17 += a7;
    v15 = v30;
  }
}
