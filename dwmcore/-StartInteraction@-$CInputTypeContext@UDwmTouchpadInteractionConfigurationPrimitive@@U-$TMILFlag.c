/*
 * XREFs of ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x1801AD16C
 * Callers:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801AD230 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?StartInteractionCore@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x1801AD3F4 (-StartInteractionCore@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMIL.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5)
{
  char v5; // di
  int started; // esi
  __int128 pvParam; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v5 = a2;
  started = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteractionCore(
              a1,
              a2,
              a3,
              a4,
              a5);
  if ( started >= 0 && !v5 )
  {
    v10 = 0LL;
    pvParam = 0LL;
    if ( SystemParametersInfoW(0xAEu, 0x18u, &pvParam, 0) )
      *(_BYTE *)(a1 + 148) = ((unsigned __int16)(WORD6(pvParam) & 0x100) >> 5) | *(_BYTE *)(a1 + 148) & 0xF3 | ((unsigned __int8)(BYTE12(pvParam) & 0x80) >> 5) & 0xF7;
  }
  return (unsigned int)started;
}
