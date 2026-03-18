/*
 * XREFs of ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0043740
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00435F8 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall IsStillWindowC(unsigned __int64 a1)
{
  return a1 <= 1 || a1 > 0xFFFFFFFFFFFFFFFDuLL || HMValidateHandleNoSecure(a1, 1) != 0;
}
