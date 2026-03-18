/*
 * XREFs of ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C01EC73C
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBD30 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBFD0 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x1C01EC010 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 *     ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC060 (-NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC120 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC280 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC2D0 (-NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC340 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC440 (-NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsTestKeyStateToggle(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int v7; // eax

  v4 = (unsigned __int64)a1 >> 2;
  v5 = 2 * (a1 & 3u) + 1;
  v6 = 1 << v5;
  if ( gpqForeground )
    v7 = *(unsigned __int8 *)(v4 + gpqForeground + 236);
  else
    v7 = *(unsigned __int8 *)(v4 + SGDGetUserSessionState(v5, a2, a3, a4) + 13992);
  return v6 & v7;
}
