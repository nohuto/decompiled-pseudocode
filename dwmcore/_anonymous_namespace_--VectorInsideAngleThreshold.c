/*
 * XREFs of _anonymous_namespace_::VectorInsideAngleThreshold @ 0x1801AD808
 * Callers:
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x1801A5598 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x1801A9174 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801AC974 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     ?D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z @ 0x18027C100 (-D3DXVector3Angle@@YAMAEBUD2DVector3@@0@Z.c)
 */

bool __fastcall anonymous_namespace_::VectorInsideAngleThreshold(
        const struct D2DVector3 *a1,
        const struct D2DVector3 *a2)
{
  float v2; // xmm0_4

  v2 = D3DXVector3Angle(a1, a2);
  return COERCE_FLOAT(LODWORD(v2) & _xmm) < 0.17453
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 - 3.1415927) & _xmm) < 0.17453
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 + 3.1415927) & _xmm) < 0.17453;
}
