__int64 __fastcall CInteractionProcessor::Initialize(
        CInteractionProcessor *this,
        struct IInteractionContextWrapper *a2,
        struct IInteractionContextWrapper *a3,
        struct IInteractionContextWrapper *a4,
        struct IInteractionContextWrapper *a5,
        bool a6)
{
  struct IInteractionContextWrapper *v7; // rbp
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8

  v7 = a3;
  if ( !a2 || !a3 || !a4 || !a5 )
    return 2147942487LL;
  *((_WORD *)this + 624) = 0;
  LOBYTE(a3) = a6;
  *(_QWORD *)((char *)this + 1252) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 315) = 0;
  *((_DWORD *)this + 162) = 0;
  result = CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::Initialize(
             this,
             a2,
             a3);
  if ( (int)result >= 0 )
  {
    LOBYTE(v10) = a6;
    result = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize(
               (char *)this + 160,
               v7,
               v10);
    if ( (int)result >= 0 )
    {
      LOBYTE(v11) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 96LL))(*((_QWORD *)this + 20), v11);
      LOBYTE(v12) = a6;
      result = CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize(
                 (char *)this + 320,
                 a4,
                 v12);
      if ( (int)result >= 0 )
      {
        LOBYTE(v13) = a6;
        return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::Initialize(
                 (char *)this + 480,
                 a5,
                 v13);
      }
    }
  }
  return result;
}
