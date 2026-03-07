__int64 __fastcall CInteractionProcessor::StartInteraction(__int64 a1, char a2, char a3, __int64 a4, int a5)
{
  int started; // edi
  int v7; // ecx
  __int64 v8; // r12
  char v10; // r14
  int v11; // eax
  bool v12; // si
  int v13; // ebp
  int v14; // r9d
  int v15; // r9d

  started = 0;
  v7 = *(_DWORD *)(a1 + 784);
  v8 = a4;
  v10 = a2;
  if ( a2 || (unsigned int)(v7 - 2) <= 2 )
  {
    if ( (unsigned int)(v7 - 2) > 2 )
    {
      v11 = 3;
      *(_DWORD *)(a1 + 784) = 3;
    }
    else
    {
      v11 = v7;
    }
    v10 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 784) = 1;
    v11 = 1;
  }
  *(_DWORD *)(a1 + 1268) = 0;
  v12 = (*(_BYTE *)(a1 + 1264) & 8) != 0 && !v7 && v11;
  v13 = 0;
  if ( a4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a4 + 48LL))(a4) )
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
  switch ( a5 )
  {
    case 1:
      LOBYTE(a4) = v12;
      started = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteractionCore(
                  a1,
                  v10,
                  a3,
                  a4,
                  v13);
      if ( started < 0 )
        return (unsigned int)started;
      LOBYTE(v14) = v12;
      started = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
                  a1 + 160,
                  v10,
                  a3,
                  v14,
                  v13);
      if ( started < 0 )
        return (unsigned int)started;
      goto LABEL_19;
    case 2:
      LOBYTE(a4) = v12;
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteractionCore(
                             a1,
                             v10,
                             a3,
                             a4,
                             v13);
    case 3:
      LOBYTE(a4) = v12;
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteraction(
                             a1 + 160,
                             v10,
                             a3,
                             a4,
                             v13);
    case 4:
LABEL_19:
      if ( CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
      {
        LOBYTE(v15) = v12;
        return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteractionCore(
                               (int)a1 + 320,
                               v10,
                               a3,
                               v15,
                               v13);
      }
      return (unsigned int)started;
    case 6:
      LOBYTE(a4) = v12;
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteractionCore(
                             (int)a1 + 480,
                             v10,
                             a3,
                             a4,
                             v13);
  }
  return (unsigned int)started;
}
