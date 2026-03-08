/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E6040
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C007EE00 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00F1F00 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C02416C0 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x1C0241DC8 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF

  v4 = dword_1C02D155C;
  v5 = 1LL;
  memset(v10, 0, sizeof(v10));
  if ( (dword_1C02D155C & 1) != 0 )
  {
    dword_1C02D155C &= ~1u;
    if ( (v4 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, a2, 0LL);
  }
  else
  {
    if ( (dword_1C02D155C & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, a2, 0LL);
    ApiSetEditionPostAccessibilityShortcutNotification(4LL);
  }
  LOBYTE(v10[0]) = gTKScanCode;
  WORD1(v10[0]) = *(_WORD *)(SGDGetUserSessionState(v5, a2, a3, a4) + 13768) | 0x8000;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v10, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((unsigned __int8 *)v10, gTKExtraInformation, 0, 0, 0LL, 0LL);
  WORD1(v10[0]) = *(_WORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 13768);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v10, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((unsigned __int8 *)v10, gTKExtraInformation, 0, 0, 0LL, 0LL);
}
