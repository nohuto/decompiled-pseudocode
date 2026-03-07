__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ProcessInput(
        _QWORD *a1,
        int *a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // edi
  __int64 v8; // rcx
  int v9; // ecx
  _BYTE v11[64]; // [rsp+30h] [rbp-78h] BYREF

  if ( *a1 )
  {
    if ( (*(_BYTE *)(a3 + 12) & 4) == 0 && (*(_DWORD *)(a3 + 12) & 0x180000) == 0
      || (v7 = CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
                 a1,
                 a2,
                 a4),
          v7 >= 0) )
    {
      v8 = *a1;
      *((_DWORD *)a1 + 36) = a2[2];
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v8 + 24LL))(v8, a3, a2 + 82);
      if ( v7 >= 0 )
      {
        v9 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 40LL))(*a1, v11) + 20);
        if ( v9 )
          *((_DWORD *)a1 + 38) = v9;
        *((_BYTE *)a1 + 148) |= 0x20u;
      }
    }
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return (unsigned int)v7;
}
