/*
 * XREFs of ?GetInstance@CContentRects@@CAAEAV1@XZ @ 0x1C00C5450
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0144660 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C0144720 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0144878 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

struct CContentRects *CContentRects::GetInstance(void)
{
  if ( (dword_1C0296CA0 & 1) == 0 )
  {
    qword_1C029A6C0 = 0LL;
    qword_1C029A6C8 = 0LL;
    dword_1C0296CA0 |= 1u;
    memset(&unk_1C029A6D0, 0, 0x40uLL);
    dword_1C029A710 = 0;
  }
  return (struct CContentRects *)&qword_1C029A6C0;
}
