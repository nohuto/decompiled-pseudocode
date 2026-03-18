/*
 * XREFs of vSrcOpaqCopyS8D16 @ 0x1C02777A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0276BFC (-vSrcOpaqCopyS8D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 */

void __fastcall vSrcOpaqCopyS8D16(
        unsigned __int8 *a1,
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
  HSEMAPHORE v15[2]; // [rsp+60h] [rbp-18h] BYREF

  v15[0] = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  vSrcOpaqCopyS8D16Unsafe(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  SEMOBJ::vUnlock((SEMOBJ *)v15);
}
