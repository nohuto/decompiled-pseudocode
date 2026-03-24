/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0183B10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C000D590 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C00763B0 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0185580 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01CD030 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01CD44C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (xmmword_1C024F974 & 1) != 0
    || (dword_1C024F944 & 1) != 0
    || (dword_1C024F94C & 1) != 0
    || (dword_1C024F93C & 1) != 0
    || (dword_1C0252EC4 & 1) != 0
    || (dword_1C024F91C & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    LODWORD(xmmword_1C024F974) = xmmword_1C024F974 & 0xFFFFFFFE;
    xxxTurnOffStickyKeys();
    dword_1C024F94C &= ~1u;
    dword_1C024F93C &= ~1u;
    dword_1C0252EC4 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C024F91C &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (qword_1C024F92C & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v1, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
