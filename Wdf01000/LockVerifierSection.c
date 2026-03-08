/*
 * XREFs of LockVerifierSection @ 0x1C0045038
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C002C2B8 (FxLibraryCommonRegisterClient.c)
 *     FxInitialize @ 0x1C0043DE4 (FxInitialize.c)
 * Callees:
 *     WPP_IFR_SF_dZq @ 0x1C00452E8 (WPP_IFR_SF_dZq.c)
 */

void __fastcall LockVerifierSection(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegistryPath,
        unsigned int a3)
{
  int globals; // ebx
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  const _GUID *v8; // [rsp+20h] [rbp-28h]

  globals = _InterlockedIncrement(dword_1C009FF28);
  if ( ImageSectionHandle )
  {
    MmLockPagableSectionByHandle(ImageSectionHandle);
    WPP_IFR_SF_dZq(FxDriverGlobals, v6, v7, 0xBu, v8, globals, RegistryPath, FxDriverGlobals);
  }
  else
  {
    WPP_IFR_SF_dZq(FxDriverGlobals, (unsigned __int8)RegistryPath, a3, 0xAu, v8, globals, RegistryPath, FxDriverGlobals);
    ImageSectionHandle = MmLockPagableDataSection(VerifierPageLockHandle);
  }
}
