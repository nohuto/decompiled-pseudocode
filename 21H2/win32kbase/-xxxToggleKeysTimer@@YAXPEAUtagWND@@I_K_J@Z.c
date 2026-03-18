/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01BADF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E7BD0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C020A4F4 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x1C020AA7C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1, __int64 a2)
{
  char v2; // al
  _OWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = dword_1C0295A0C;
  memset(v3, 0, sizeof(v3));
  if ( (dword_1C0295A0C & 1) != 0 )
  {
    dword_1C0295A0C &= ~1u;
    if ( (v2 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, a2, 0LL);
  }
  else
  {
    if ( (dword_1C0295A0C & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, a2, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(4LL);
  }
  LOBYTE(v3[0]) = gTKScanCode;
  WORD1(v3[0]) = gNumLockVk | 0x8000;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v3, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((unsigned __int8 *)v3, gTKExtraInformation, 0, 0, 0LL, 0LL);
  WORD1(v3[0]) = gNumLockVk;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v3, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((unsigned __int8 *)v3, gTKExtraInformation, 0, 0, 0LL, 0LL);
}
