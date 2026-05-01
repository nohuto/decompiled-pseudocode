/*
 * XREFs of ?GetRawBuffer@HString@Wrappers@WRL@Microsoft@@QEBAPEBGPEAI@Z @ 0x1801A781C
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180015418 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001604C (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     <none>
 */

PCWSTR __fastcall Microsoft::WRL::Wrappers::HString::GetRawBuffer(HSTRING *this, unsigned int *a2)
{
  return WindowsGetStringRawBuffer(*this, a2);
}
