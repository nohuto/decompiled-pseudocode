char __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::SupportsAllInteractions(
        __int64 a1,
        int a2,
        int a3)
{
  char v3; // r9
  _DWORD *v4; // rcx

  v3 = 1;
  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 0;
  v4 = *(_DWORD **)a1;
  if ( *v4 != 1 || v4[1] != -1 || (a3 & a2 | ~a3 & v4[2]) != 0xCFFFFFFF )
    return 0;
  return v3;
}
