/*
 * XREFs of ?vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C00D5F80
 * Callers:
 *     vSrcOpaqCopyS8D32 @ 0x1C00D5EC0 (vSrcOpaqCopyS8D32.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D60B4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall vSrcOpaqCopyS8D32Unsafe(
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
  __int64 v12; // r15
  __int64 v13; // rsi
  _DWORD *v15; // r10
  const unsigned __int8 *v16; // r14
  unsigned __int8 *v17; // r11
  const unsigned __int8 *v19; // r8
  unsigned __int8 *i; // rax
  _BYTE v21[104]; // [rsp+50h] [rbp-68h] BYREF

  v12 = a3;
  v13 = a2;
  memset(v21, 0, 0x40uLL);
  v15 = pvFillOpaqTableCT(4u, a9, a10, a11, (struct _BLENDINFO *)v21, 0);
  v16 = &a1[v13];
  v17 = &a4[4 * a5];
  while ( a8 )
  {
    v19 = v16;
    for ( i = v17; i < &v17[4 * (a6 - a5)]; i += 4 )
      *(_DWORD *)i = v15[*v19++];
    --a8;
    v16 += v12;
    v17 += a7;
  }
}
