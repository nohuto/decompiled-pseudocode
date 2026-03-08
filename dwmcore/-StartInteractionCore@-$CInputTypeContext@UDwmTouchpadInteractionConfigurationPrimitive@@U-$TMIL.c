/*
 * XREFs of ?StartInteractionCore@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x1801AD3F4
 * Callers:
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x1801AD16C (-StartInteraction@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlag.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801AD230 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::StartInteractionCore(
        _QWORD *a1,
        __int64 a2,
        char a3,
        char a4,
        int a5)
{
  unsigned int v6; // ebx
  char v7; // si
  __int64 v8; // rcx

  v6 = 0;
  v7 = a2;
  *((_BYTE *)a1 + 148) = (2 * a3) | *((_BYTE *)a1 + 148) & 0xFD | 1;
  *((_DWORD *)a1 + 38) = a5;
  v8 = *a1;
  if ( v8 )
  {
    if ( a4 )
    {
      LOBYTE(a2) = a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 104LL))(v8, a2);
    }
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 88LL))(*a1);
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v6;
}
