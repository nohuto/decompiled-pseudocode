__int64 __fastcall DirectComposition::CPropertySetMarshaler::SetBufferProperty(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int64 v8; // xmm0_8
  int updated; // eax
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]

  v6 = 0;
  if ( a3 > 1 || a5 < 0xC )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a4;
  v12 = a4[2];
  v11 = v8;
  switch ( v12 )
  {
    case 17:
      if ( (_DWORD)a5 != 16 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<bool>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<bool>(this, &v11, a4 + 3);
      break;
    case 18:
      if ( (_DWORD)a5 == 16 )
      {
        if ( a3 )
          updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<float>(this, &v11, a4 + 3);
        else
          updated = DirectComposition::CPropertySetMarshaler::AddProperty<float>(this, &v11, a4 + 3);
        break;
      }
      return (unsigned int)-1073741811;
    case 35:
      if ( (_DWORD)a5 != 20 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector2>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector2>(
                    (__int64)this,
                    (__int64)&v11,
                    (__int64)(a4 + 3));
      break;
    case 52:
      if ( (_DWORD)a5 != 24 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector3>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector3>(this, &v11, a4 + 3);
      break;
    case 69:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector4>(
                    (__int64)this,
                    (unsigned int *)&v11,
                    a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector4>(
                    (__int64)this,
                    (__int64)&v11,
                    (__int64)(a4 + 3));
      break;
    case 70:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<_D3DCOLORVALUE>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<_D3DCOLORVALUE>(this, &v11, a4 + 3);
      break;
    case 71:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DQuaternion>(this, &v11, a4 + 3);
      break;
    case 104:
      if ( (_DWORD)a5 != 36 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2D_MATRIX_3X2_F>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2D_MATRIX_3X2_F>(this, &v11, a4 + 3);
      break;
    case 265:
      if ( (_DWORD)a5 != 76 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DMatrix>(this, &v11, a4 + 3);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DMatrix>(this, &v11, a4 + 3);
      break;
    default:
      goto LABEL_9;
  }
  v6 = updated;
  if ( updated >= 0 )
  {
LABEL_9:
    *((_DWORD *)this + 4) |= 0x80u;
    *a6 = 1;
  }
  return v6;
}
