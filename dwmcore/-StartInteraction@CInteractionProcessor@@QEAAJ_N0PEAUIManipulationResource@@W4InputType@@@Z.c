/*
 * XREFs of ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801AD230
 * Callers:
 *     ?StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z @ 0x1801A3710 (-StartInteraction@CInteractionRoot@@UEAAJ_N0W4InputType@@@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801AC330 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 *     ?StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z @ 0x180209AC0 (-StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801298BC (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?StartInteraction@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x1801AD16C (-StartInteraction@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlag.c)
 *     ?StartInteractionCore@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJ_N00W4RailsState@@@Z @ 0x1801AD3F4 (-StartInteractionCore@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMIL.c)
 */

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
