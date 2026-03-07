__int64 __fastcall CPropertySet::ProcessSetPropertyValue(
        CPropertySet *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYSET_SETPROPERTYVALUE *a3,
        __int64 a4,
        unsigned int a5)
{
  int updated; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  switch ( *((_DWORD *)a3 + 4) )
  {
    case 0x11:
      if ( a5 != 4 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x59u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<bool>(this, (__int64)a3, a4);
      v7 = updated;
      if ( updated < 0 )
      {
        v9 = 90;
        goto LABEL_49;
      }
      break;
    case 0x12:
      if ( a5 != 4 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x5Eu, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<float>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 95;
LABEL_49:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, v9, 0LL);
      return v7;
    case 0x23:
      if ( a5 != 8 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x63u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector2>(this, (__int64)a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 100;
      goto LABEL_49;
    case 0x34:
      if ( a5 != 12 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x68u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector3>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 105;
      goto LABEL_49;
    case 0x45:
      if ( a5 != 16 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x6Du, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DVector4>(this, (__int64)a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 110;
      goto LABEL_49;
    case 0x46:
      if ( a5 != 16 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x72u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 115;
      goto LABEL_49;
    case 0x47:
      if ( a5 != 16 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x77u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DQuaternion>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 120;
      goto LABEL_49;
    case 0x68:
      if ( a5 != 24 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x7Cu, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2D_MATRIX_3X2_F>(this, a3, a4);
      v7 = updated;
      if ( updated >= 0 )
        return 0;
      v9 = 125;
      goto LABEL_49;
    case 0x109:
      if ( a5 != 64 )
      {
        v7 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x81u, 0LL);
        return v7;
      }
      updated = CPropertySet::AddOrUpdateProperty<D2DMatrix>(this, a3, a4);
      v7 = updated;
      if ( updated < 0 )
      {
        v9 = 130;
        goto LABEL_49;
      }
      break;
    default:
      ModuleFailFastForHRESULT(2291663875LL, retaddr);
  }
  return 0;
}
