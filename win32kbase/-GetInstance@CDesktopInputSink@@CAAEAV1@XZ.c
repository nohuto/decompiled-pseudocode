/*
 * XREFs of ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C0094F6C
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0094C50 (UnInitializeInputComponents.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C0094ED0 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     InitializeInputComponents @ 0x1C009770C (InitializeInputComponents.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C02145E0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C021484C (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct CDesktopInputSink *CDesktopInputSink::GetInstance(void)
{
  if ( (dword_1C02D2C00 & 1) == 0 )
  {
    qword_1C02D2C08 = 0LL;
    qword_1C02D2C10 = 0LL;
    dword_1C02D2C00 |= 1u;
    xmmword_1C02D2C18 = 0LL;
  }
  return (struct CDesktopInputSink *)&qword_1C02D2C08;
}
