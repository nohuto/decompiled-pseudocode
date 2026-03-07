__int64 __fastcall CInteractionProcessor::SupportsInteractionType(__int64 a1, int a2, unsigned int a3, char a4)
{
  unsigned int v4; // edi
  int v7; // r11d
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r11d
  int v12; // r11d
  int v13; // r11d
  int v14; // r11d
  unsigned int v15; // edx
  unsigned int v17; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  v18 = 0;
  v17 = 0;
  v7 = a2;
  v9 = 0LL;
  v10 = 0LL;
  if ( a4 )
  {
    anonymous_namespace_::GetTemporaryConfigWithMask(a1 + 1272, &v18, &v17);
    v10 = v17;
    v9 = v18;
  }
  v11 = v7 - 2;
  if ( !v11 )
    return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             a1,
             a3,
             v9,
             v10);
  v12 = v11 - 1;
  if ( !v12 )
    return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             a1 + 160,
             a3,
             v9,
             v10);
  v13 = v12 - 1;
  if ( !v13 )
    return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             a1 + 320,
             a3,
             v9,
             v10);
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
      return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
               a1 + 480,
               a3,
               v9,
               v10);
    else
      return 0LL;
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 640) & 0xFFFF7FC0;
    if ( (*(_DWORD *)(a1 + 640) & 0x8000) != 0 )
      v15 = *(_DWORD *)(a1 + 640);
    LOBYTE(v4) = (v15 & a3) != 0;
    return v4;
  }
}
