/*
 * XREFs of ?GetInstance@CContentRects@@CAAEAV1@XZ @ 0x1C00D35D4
 * Callers:
 *     InitializeInputComponents @ 0x1C009770C (InitializeInputComponents.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1C0157A30 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1C0157AF0 (-GetCount@CContentRects@@SAIXZ.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1C0157C48 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

struct CContentRects *CContentRects::GetInstance(void)
{
  if ( (dword_1C02D18EC & 1) == 0 )
  {
    qword_1C02D4EB0 = 0LL;
    qword_1C02D4EB8 = 0LL;
    dword_1C02D18EC |= 1u;
    memset(&unk_1C02D4EC0, 0, 0x40uLL);
    dword_1C02D4F00 = 0;
  }
  return (struct CContentRects *)&qword_1C02D4EB0;
}
