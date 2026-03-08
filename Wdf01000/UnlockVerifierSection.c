/*
 * XREFs of UnlockVerifierSection @ 0x1C00450DC
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C002C650 (FxLibraryCommonUnregisterClient.c)
 *     FxDestroy @ 0x1C0043AD0 (FxDestroy.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C0018070 (WPP_IFR_SF_dq.c)
 */

void __fastcall UnlockVerifierSection(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  int _a1; // ebx

  if ( ImageSectionHandle )
  {
    _a1 = _InterlockedDecrement(dword_1C009FF28);
    MmUnlockPagableImageSection(ImageSectionHandle);
    WPP_IFR_SF_dq(FxDriverGlobals, 4u, 0x11u, 0xCu, WPP_globals_cpp_Traceguids, _a1, FxDriverGlobals);
  }
}
