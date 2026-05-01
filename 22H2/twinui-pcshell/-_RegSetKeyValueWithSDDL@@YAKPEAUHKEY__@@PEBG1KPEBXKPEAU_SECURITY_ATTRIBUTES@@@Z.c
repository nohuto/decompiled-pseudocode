/*
 * XREFs of ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18020F9E4
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18020BB8C (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18020D464 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x18020ED4C (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18020ED88 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1802544C0 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x180265E0C (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x180265E58 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x180277A20 (CortanaHelpers--SetIsAssignedAccess.c)
 *     ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x18027D380 (-OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18027D7D8 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x18028090C (CortanaHelpers--SetWindowsHelloActive.c)
 *     CortanaHelpers::SetAnyAboveLockAppsActive @ 0x180281C08 (CortanaHelpers--SetAnyAboveLockAppsActive.c)
 *     CortanaHelpers::SetWindowsHelloActive_0 @ 0x180281C78 (CortanaHelpers--SetWindowsHelloActive_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _RegSetKeyValueWithSDDL(
        HKEY a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        DWORD a4,
        BYTE *lpData,
        DWORD cbData)
{
  HKEY v8; // rdi
  unsigned int v9; // ebx
  LSTATUS v10; // eax
  HKEY hKey; // [rsp+78h] [rbp+10h] BYREF

  v8 = a1;
  v9 = 0;
  if ( a2 && *a2 )
  {
    v10 = RegCreateKeyExW(a1, a2, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
    a1 = hKey;
    v9 = v10;
  }
  else
  {
    hKey = a1;
  }
  if ( !v9 )
  {
    v9 = RegSetValueExW(a1, a3, 0, a4, lpData, cbData);
    if ( hKey != v8 )
      RegCloseKey(hKey);
  }
  return v9;
}
