/*
 * XREFs of ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180026358
 * Callers:
 *     ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180024ED0 (-v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180024FC8 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x180026040 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x18034B82C (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18034B91C (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18034BA20 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x1800869FC (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall WindowReadyState::_WaitForUnfreezeIfNecessary(HWND *this)
{
  HWND v2; // rcx
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 && !*((_DWORD *)this + 2) )
  {
    pvAttribute = 0;
    DwmGetWindowAttribute(v2, 0xFu, &pvAttribute, 4u);
    if ( pvAttribute )
      WindowReadyState::WaitFlags::Set(this + 1, this, 4LL);
  }
}
