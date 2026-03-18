/*
 * XREFs of NlsKbdSendIMEProc @ 0x1C01EC7A0
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBD30 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EBFD0 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC120 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC280 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C01EC340 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     NlsKbdSendIMENotification @ 0x1C00B7870 (NlsKbdSendIMENotification.c)
 *     ApiSetEditionGetAppImeCompatFlags @ 0x1C020614C (ApiSetEditionGetAppImeCompatFlags.c)
 */

void __fastcall NlsKbdSendIMEProc(unsigned int a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9

  if ( gpqForeground && *(_QWORD *)(gpqForeground + 104) && (ApiSetEditionGetAppImeCompatFlags() & 0x800000) == 0 )
    NlsKbdSendIMENotification(a1, a2, v4, v5);
}
