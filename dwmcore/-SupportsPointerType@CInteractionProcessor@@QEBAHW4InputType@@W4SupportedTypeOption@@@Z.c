/*
 * XREFs of ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800E9920
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800E98F0 (-SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1801A3760 (-SupportsPointerType@CInteractionRoot@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801A8A10 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x1801AB974 (-HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ.c)
 *     ?SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ @ 0x1801AD494 (-SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800E9994 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801298BC (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x1801299E4 (-TypeSupported@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsPointerType(CInteractionProcessor *a1, int a2, unsigned int a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetTemporaryConfigWithMask((char *)a1 + 1272, &v11, &v12);
  v6 = a2 - 2;
  if ( !v6 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             a1,
             a3,
             v11,
             v12);
  v7 = v6 - 1;
  if ( !v7 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             (char *)a1 + 160,
             a3,
             v11,
             v12);
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
                 (char *)a1 + 480,
                 a3,
                 v11,
                 v12);
      else
        return 0LL;
    }
    else
    {
      return *((_DWORD *)a1 + 160) != 0;
    }
  }
  else if ( CInteractionProcessor::AllowPenGestureDetection(a1) )
  {
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             (char *)a1 + 320,
             a3,
             v11,
             v12);
  }
  else
  {
    return 1LL;
  }
}
