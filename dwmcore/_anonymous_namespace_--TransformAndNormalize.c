/*
 * XREFs of _anonymous_namespace_::TransformAndNormalize @ 0x1801AD514
 * Callers:
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x1801A5598 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x180023A0C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18027A07C (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18027B6AC (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

struct D2DVector3 *__fastcall anonymous_namespace_::TransformAndNormalize(
        struct D2DVector3 *a1,
        __int64 a2,
        const struct D2DMatrix *a3)
{
  const struct D2DVector3 *v4; // rdx
  const struct D2DMatrix *v5; // r8
  const struct D2DVector3 *v6; // rax
  struct D2DVector3 *v7; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *((_DWORD *)a1 + 2) = *(_DWORD *)(a2 + 8);
  if ( !(unsigned int)D2DMatrixIsIdentity(a3) )
  {
    v6 = D3DXVec3TransformCoord(a1, v4, v5);
    D3DXVec3Normalize(v7, v6);
  }
  return a1;
}
