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
