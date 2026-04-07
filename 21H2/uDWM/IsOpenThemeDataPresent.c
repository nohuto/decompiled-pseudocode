/*
 * XREFs of IsOpenThemeDataPresent @ 0x180054134
 * Callers:
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180013320 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015F18 (--0CWindowData@@QEAA@XZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C900 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001DD60 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001F390 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001F780 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x1800211B0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023AD0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003BB0C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003C264 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18003CFD8 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18003F070 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004506C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180048668 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800514A0 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180054EF0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenThemeDataPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E3D00 == 1 )
    return 1;
  if ( dword_1800E3D00 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800E3D00 = 2 - (v1 != 0);
  return result;
}
