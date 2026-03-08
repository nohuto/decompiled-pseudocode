/*
 * XREFs of ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097B98
 * Callers:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1800228E8 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097AB0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x18001F99C (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x180097C48 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180097C88 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180097D40 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180098BA8 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800F5770 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x180217BF4 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x180217CC0 (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x180217D98 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyPropertyChanged(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        bool *a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = -2147024809;
  switch ( *((_DWORD *)a2 + 1) )
  {
    case 0x11:
      v4 = CPropertyChangeResource::NotifyBooleanPropertyChanged(this, *(_DWORD *)a2, *a3);
      break;
    case 0x12:
      v4 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, *(_DWORD *)a2, *(float *)a3);
      break;
    case 0x23:
      v4 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, *(_DWORD *)a2, (const struct D2DVector2 *)a3);
      break;
    case 0x34:
      v4 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, *(_DWORD *)a2, (const struct D2DVector3 *)a3);
      break;
    case 0x45:
      v4 = CPropertyChangeResource::NotifyVector4PropertyChanged(this, *(_DWORD *)a2, (const struct D2DVector4 *)a3);
      break;
    case 0x46:
      v4 = CPropertyChangeResource::NotifyColorPropertyChanged(this, *(_DWORD *)a2, (const struct _D3DCOLORVALUE *)a3);
      break;
    case 0x47:
      v4 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
             this,
             *(_DWORD *)a2,
             (const struct D2DQuaternion *)a3);
      break;
    case 0x68:
      v4 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
             this,
             *(_DWORD *)a2,
             (const struct D2D_MATRIX_3X2_F *)a3);
      break;
    case 0x109:
      v4 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(this, *(_DWORD *)a2, (const struct D2DMatrix *)a3);
      break;
    default:
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v3, 0x9Du, 0LL);
      return v3;
  }
  v3 = v4;
  if ( v4 < 0 )
    goto LABEL_21;
  return v3;
}
