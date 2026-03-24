/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0183BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C000C420 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C0074CD0 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0185650 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01CD100 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01CD51C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (xmmword_1C0250C04 & 1) != 0
    || (dword_1C0250C1C & 1) != 0
    || (dword_1C0250BD4 & 1) != 0
    || (dword_1C0250BCC & 1) != 0
    || (dword_1C0253ED4 & 1) != 0
    || (dword_1C0250BBC & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    LODWORD(xmmword_1C0250C04) = xmmword_1C0250C04 & 0xFFFFFFFE;
    xxxTurnOffStickyKeys();
    dword_1C0250BD4 &= ~1u;
    dword_1C0250BCC &= ~1u;
    dword_1C0253ED4 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C0250BBC &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (qword_1C0250BF4 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v1, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
