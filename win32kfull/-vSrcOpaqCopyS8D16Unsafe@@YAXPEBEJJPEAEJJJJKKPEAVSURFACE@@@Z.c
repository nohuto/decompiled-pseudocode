/*
 * XREFs of ?vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0274F70
 * Callers:
 *     ?vSrcOpaqCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0274EA0 (-vSrcOpaqCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1C0273D88 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 */

void __fastcall vSrcOpaqCopyS8D16Unsafe(
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
  __int64 v13; // r14
  __int64 v15; // r12
  const unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // r9
  const unsigned __int8 *v19; // r8
  unsigned __int8 *i; // rdx
  __int64 v21; // [rsp+50h] [rbp-68h] BYREF

  v12 = a3;
  v13 = a2;
  v15 = pvFillOpaqTableCT(2LL, a9, a10, a11, (struct BLENDINFO *)&v21, 0);
  v16 = &a1[v13];
  v17 = &a4[2 * a5];
  while ( a8 )
  {
    v19 = v16;
    for ( i = v17; i < &v17[2 * (a6 - a5)]; i += 2 )
      *(_WORD *)i = *(_WORD *)(v15 + 2LL * *v19++);
    --a8;
    v16 += v12;
    v17 += a7;
  }
}
