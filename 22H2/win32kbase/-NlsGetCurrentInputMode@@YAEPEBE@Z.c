/*
 * XREFs of ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1C01EC010
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBD30 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBEC0 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC120 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC340 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC520 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC630 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01EC73C (-NlsTestKeyStateToggle@@YAHE@Z.c)
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
