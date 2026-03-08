/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800E9994
 * Callers:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180016EB0 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800E9920 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z @ 0x1800EEA9C (-SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I_N@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801298BC (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801A8564 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 *     ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x1801A936C (-CanSkipChildren@CInteractionProcessor@@QEBAHXZ.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA?AUDwmMousewheelInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801AB600 (-GetConfig@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnum.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAA?AUDwmPenInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801AB6A8 (-GetConfig@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Flag.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801AB750 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA?AUDwmTouchpadInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801AB7F8 (-GetConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigWithMask(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r9
  __int64 result; // rax

  *a2 = 0;
  v3 = (_DWORD *)(a1 + 8);
  *a3 = 0;
  v4 = 3LL;
  do
  {
    if ( *((_BYTE *)v3 - 8) )
    {
      *a2 |= *v3 & *(v3 - 1);
      result = (unsigned int)*v3;
      *a3 |= result;
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
  return result;
}
