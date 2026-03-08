/*
 * XREFs of ?vSrcOpaqCopyS4D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0274520
 * Callers:
 *     ?vSrcOpaqCopyS4D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0274450 (-vSrcOpaqCopyS4D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C0273934 (-pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z.c)
 */

void __fastcall vSrcOpaqCopyS4D16Unsafe(
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
  __int64 v12; // r14
  _WORD *v15; // rdi
  const unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // r11
  const unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // rdx
  int i; // r9d
  unsigned __int64 v22; // rax
  _WORD *v23; // rdx

  v12 = a3;
  v15 = pvFillOpaqTable(2LL, a9, a10, a11);
  v16 = &a1[a2 / 2];
  v17 = &a4[2 * a5];
  while ( a8 )
  {
    v19 = v16;
    v20 = v17;
    if ( ((a5 + 1) & 0xFFFFFFFE) != a5 )
    {
      v19 = v16 + 1;
      *(_WORD *)v17 = v15[*v16 & 0xF];
      v20 = v17 + 2;
    }
    for ( i = 0; i < (int)((a6 & 0xFFFFFFFE) - ((a5 + 1) & 0xFFFFFFFE)) / 2; ++i )
    {
      v22 = *v19++;
      *(_WORD *)v20 = v15[v22 >> 4];
      v23 = v20 + 2;
      *v23 = v15[v22 & 0xF];
      v20 = (unsigned __int8 *)(v23 + 1);
    }
    if ( a6 != (a6 & 0xFFFFFFFE) )
      *(_WORD *)v20 = v15[(unsigned __int64)*v19 >> 4];
    --a8;
    v16 += v12;
    v17 += a7;
  }
}
