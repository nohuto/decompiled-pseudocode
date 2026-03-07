__int64 __fastcall FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(
        __int64 a1)
{
  NullifyLookasideRef(*(_QWORD *)(a1 + 88));
  return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(a1);
}
