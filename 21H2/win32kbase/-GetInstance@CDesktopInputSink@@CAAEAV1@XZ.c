/*
 * XREFs of ?GetInstance@CDesktopInputSink@@CAAEAV1@XZ @ 0x1C009ED24
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 *     UnInitializeInputComponents @ 0x1C009EA30 (UnInitializeInputComponents.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C009EC88 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01E46A0 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z @ 0x1C01E4934 (-IsEqualByLuid@CDesktopInputSink@@SA_NPEBU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct CDesktopInputSink *CDesktopInputSink::GetInstance(void)
{
  if ( (dword_1C0296E78 & 1) == 0 )
  {
    qword_1C0296E80 = 0LL;
    qword_1C0296E88 = 0LL;
    dword_1C0296E78 |= 1u;
    xmmword_1C0296E90 = 0LL;
  }
  return (struct CDesktopInputSink *)&qword_1C0296E80;
}
