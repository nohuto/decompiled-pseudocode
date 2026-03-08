/*
 * XREFs of ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x1801A936C
 * Callers:
 *     ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x180208B40 (-CanSkipChildren@CInteraction@@UEBAHXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800E9994 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x1801299A4 (-SupportsAllInteractions@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-.c)
 */

__int64 __fastcall CInteractionProcessor::CanSkipChildren(CInteractionProcessor *this)
{
  __int64 v1; // r11
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_BYTE *)this + 1264) & 3) != 0 )
  {
    anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1308, &v4, &v3);
    switch ( *(_DWORD *)(v1 + 788) )
    {
      case 2:
        LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                           v1 + 720,
                           v4,
                           v3);
        return (unsigned __int8)result;
      case 3:
        LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                           v1 + 752,
                           v4,
                           v3);
        return (unsigned __int8)result;
      case 4:
        LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                           v1 + 688,
                           v4,
                           v3);
        return (unsigned __int8)result;
      case 5:
        return *(_DWORD *)(v1 + 648) == -805306369;
      case 6:
        LOBYTE(result) = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                           v1 + 656,
                           v4,
                           v3);
        return (unsigned __int8)result;
    }
  }
  return 0LL;
}
