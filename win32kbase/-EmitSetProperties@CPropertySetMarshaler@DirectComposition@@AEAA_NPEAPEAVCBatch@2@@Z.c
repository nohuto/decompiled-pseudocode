char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperties(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  unsigned int v5; // esi
  int DataType; // eax
  char v7; // al

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 20) )
    {
      while ( !(unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                               (char *)this + 72,
                               v5) )
      {
LABEL_9:
        if ( ++v5 >= *((_DWORD *)this + 20) )
          goto LABEL_10;
      }
      DataType = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                   (char *)this + 72,
                   v5);
      switch ( DataType )
      {
        case 17:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetBooleanValue,bool>(this, a2, v5);
          break;
        case 18:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetScalarValue,float>(
                 (__int64)this,
                 a2,
                 v5);
          break;
        case 35:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector2Value,D2DVector2>(
                 (__int64)this,
                 (struct DirectComposition::CBatch **)a2,
                 v5);
          break;
        case 52:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector3Value,D2DVector3>(
                 this,
                 a2,
                 v5);
          break;
        case 69:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector4Value,D2DVector4>(
                 (__int64)this,
                 (struct DirectComposition::CBatch **)a2,
                 v5);
          break;
        case 70:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetColorValue,_D3DCOLORVALUE>(
                 this,
                 a2,
                 v5);
          break;
        case 71:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetQuaternionValue,D2DQuaternion>(
                 this,
                 a2,
                 v5);
          break;
        case 104:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
                 this,
                 a2,
                 v5);
          break;
        case 265:
          v7 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix4x4Value,D2DMatrix>(
                 this,
                 a2,
                 v5);
          break;
        default:
LABEL_8:
          if ( !v4 )
            return v4;
          goto LABEL_9;
      }
      v4 = v7;
      goto LABEL_8;
    }
LABEL_10:
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  return v4;
}
