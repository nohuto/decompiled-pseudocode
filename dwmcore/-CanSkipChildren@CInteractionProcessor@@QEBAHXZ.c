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
