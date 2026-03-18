/*
 * XREFs of ?GetInstance@CContentRects@@CAAEAV1@XZ @ 0x1C00C4124
 * Callers:
 *     InitializeInputComponents @ 0x1C00821D8 (InitializeInputComponents.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0130110 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C01301D0 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0130324 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C00D6A00 (memset.c)
 */

struct CContentRects *CContentRects::GetInstance(void)
{
  if ( (dword_1C029094C & 1) == 0 )
  {
    qword_1C0293E40 = 0LL;
    qword_1C0293E48 = 0LL;
    dword_1C029094C |= 1u;
    memset(&unk_1C0293E50, 0, 0x40uLL);
    dword_1C0293E90 = 0;
  }
  return (struct CContentRects *)&qword_1C0293E40;
}
