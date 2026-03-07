CInteractionProcessor *__fastcall CInteractionProcessor::CInteractionProcessor(CInteractionProcessor *this)
{
  char v2; // al
  __int64 v3; // r8

  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 20) = xmmword_180374E50;
  *(_OWORD *)((char *)this + 36) = xmmword_180374E60;
  *(_OWORD *)((char *)this + 52) = xmmword_180374E70;
  *(_OWORD *)((char *)this + 68) = xmmword_180374E80;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  v2 = *((_BYTE *)this + 148);
  *((_BYTE *)this + 136) &= ~1u;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_BYTE *)this + 148) = v2 & 0xC | 0xC0;
  *((_DWORD *)this + 32) = 1110704128;
  *((_DWORD *)this + 33) = 1110704128;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 2;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 31) = 0;
  CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>((char *)this + 160);
  CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>((char *)this + 320);
  CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>((char *)this + 480);
  *((_DWORD *)this + 160) = v3;
  *((_QWORD *)this + 82) = v3;
  *((_QWORD *)this + 83) = v3;
  *((_QWORD *)this + 84) = v3;
  *((_DWORD *)this + 170) = v3;
  *((_QWORD *)this + 86) = v3;
  *((_QWORD *)this + 87) = v3;
  *((_QWORD *)this + 88) = v3;
  *((_DWORD *)this + 178) = v3;
  *((_QWORD *)this + 90) = v3;
  *((_QWORD *)this + 91) = v3;
  *((_QWORD *)this + 92) = v3;
  *((_DWORD *)this + 186) = v3;
  *((_QWORD *)this + 94) = v3;
  *((_QWORD *)this + 95) = v3;
  *((_QWORD *)this + 96) = v3;
  *((_DWORD *)this + 194) = v3;
  *((_BYTE *)this + 1264) &= 0xF0u;
  *((_DWORD *)this + 226) = v3;
  *((_DWORD *)this + 243) = v3;
  *((_DWORD *)this + 260) = v3;
  *((_DWORD *)this + 277) = v3;
  *((_DWORD *)this + 294) = v3;
  *((_DWORD *)this + 311) = v3;
  *((_DWORD *)this + 317) = v3;
  `vector constructor iterator'(
    (char *)this + 1272,
    (unsigned int)(v3 + 12),
    (unsigned int)(v3 + 3),
    (void (__fastcall *)(char *))TemporaryConfiguration::TemporaryConfiguration);
  `vector constructor iterator'(
    (char *)this + 1308,
    12LL,
    3LL,
    (void (__fastcall *)(char *))TemporaryConfiguration::TemporaryConfiguration);
  InitializeInteractionStateInfo((char *)this + 784);
  return this;
}
