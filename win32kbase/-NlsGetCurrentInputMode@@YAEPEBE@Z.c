/*
 * XREFs of ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1C021C250
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021BF70 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C100 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C360 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C580 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C760 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C870 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C021C97C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

unsigned __int8 __fastcall NlsGetCurrentInputMode(unsigned __int8 *a1)
{
  unsigned __int8 v1; // di
  const unsigned __int8 *v2; // rbx
  unsigned __int8 v3; // al

  v1 = *a1;
  v2 = a1;
  if ( !*a1 )
    return v1;
  v3 = *a1;
  while ( !(unsigned int)NlsTestKeyStateToggle(v3) )
  {
    v3 = *++v2;
    if ( !*v2 )
      return v1;
  }
  return *v2;
}
