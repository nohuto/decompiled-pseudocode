/*
 * XREFs of ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x180026140
 * Callers:
 *     ?HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z @ 0x180026040 (-HandlePresentationReadinessChange@WindowWrapperBase@@UEAAX_K@Z.c)
 *     ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180343030 (-get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x18034B82C (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18034B91C (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18034BA20 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowReadyState::IsReadyForPresentation(WindowReadyState *this)
{
  bool result; // al

  result = 0;
  if ( *(_QWORD *)this )
    return *((_DWORD *)this + 2) == 0;
  return result;
}
