/*
 * XREFs of ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180026360
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001C0C0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023290 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180024B24 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x1800263E0 (-GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU-$TMILFlagsEnum@W4FlagsEnum@Coloriz.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003BA5C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetWindowColorizationColor(__int64 a1, unsigned int a2)
{
  CDesktopManager *v3; // rsi
  __int64 v5; // rdx
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  CTopLevelWindow::s_ChooseWindowFrameFromStyle(
    *(_DWORD *)(a1 + 592),
    1,
    (*(_BYTE *)(*(_QWORD *)(a1 + 728) + 611LL) & 0x20) != 0);
  if ( (a2 & 1) == 0 && (a2 & 2) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 592) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 728) + 611LL) & 0x20) != 0 )
      a2 |= 1u;
    else
      a2 |= 2u;
  }
  CDesktopManager::GetEffectiveWindowColorizationColor(v3, v5, a2, &v7);
  return v7;
}
