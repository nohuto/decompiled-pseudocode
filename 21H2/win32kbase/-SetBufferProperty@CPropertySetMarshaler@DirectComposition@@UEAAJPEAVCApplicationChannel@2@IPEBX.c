/*
 * XREFs of ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00107A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C000801C (--$AddProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C0009268 (--$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C000B94C (--$UpdateProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValu.c)
 *     ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1C000C638 (--$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUProperty.c)
 *     ??$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C000D55C (--$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@.c)
 *     ??$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C000D5E4 (--$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1C000D8A8 (--$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C000E72C (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySe.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C000EA84 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVa.c)
 *     ??$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C00109A4 (--$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$AddProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector4@@@Z @ 0x1C022B790 (--$AddProperty@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C022B8D0 (--$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x1C022BDC4 (--$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySet.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C022BE5C (--$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C022BEF4 (--$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 *     ??$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C022BF94 (--$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::SetBufferProperty(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        char *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int64 v8; // xmm0_8
  int updated; // eax
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]

  v6 = 0;
  if ( a3 > 1 || a5 - 12 > 0x40 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a4;
  v12 = *((_DWORD *)a4 + 2);
  v11 = v8;
  switch ( v12 )
  {
    case 17:
      if ( (_DWORD)a5 != 16 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<bool>(this, &v11, a4 + 12);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<bool>(this, &v11, a4 + 12);
      break;
    case 18:
      if ( (_DWORD)a5 == 16 )
      {
        if ( a3 )
          updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<float>(
                      (__int64)this,
                      (unsigned int *)&v11,
                      (_DWORD *)a4 + 3);
        else
          updated = DirectComposition::CPropertySetMarshaler::AddProperty<float>(this, &v11, a4 + 12);
        break;
      }
      return (unsigned int)-1073741811;
    case 35:
      if ( (_DWORD)a5 != 20 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector2>(this, &v11, a4 + 12);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector2>(
                    (__int64)this,
                    (__int64)&v11,
                    (__int64)(a4 + 12));
      break;
    case 52:
      if ( (_DWORD)a5 != 24 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector3>(this, &v11, a4 + 12);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector3>(
                    (__int64)this,
                    (__int64)&v11,
                    (__int64)(a4 + 12));
      break;
    case 69:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
        goto LABEL_40;
      goto LABEL_41;
    case 70:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<_D3DCOLORVALUE>(
                    (__int64)this,
                    (unsigned int *)&v11,
                    a4 + 12);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<_D3DCOLORVALUE>(
                    (__int64)this,
                    (__int64)&v11,
                    (__int128 *)(a4 + 12));
      break;
    case 71:
      if ( (_DWORD)a5 != 28 )
        return (unsigned int)-1073741811;
      if ( a3 )
      {
LABEL_40:
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(this, &v11, a4 + 12);
        break;
      }
LABEL_41:
      updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DVector4>(this, &v11, a4 + 12);
      break;
    case 104:
      if ( (_DWORD)a5 != 36 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2D_MATRIX_3X2_F>(
                    (__int64)this,
                    (unsigned int *)&v11,
                    (__int64)(a4 + 12));
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2D_MATRIX_3X2_F>(
                    (__int64)this,
                    (__int64)&v11,
                    (__int128 *)(a4 + 12));
      break;
    case 265:
      if ( (_DWORD)a5 != 76 )
        return (unsigned int)-1073741811;
      if ( a3 )
        updated = DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DMatrix>(
                    (__int64)this,
                    (unsigned int *)&v11,
                    a4 + 12);
      else
        updated = DirectComposition::CPropertySetMarshaler::AddProperty<D2DMatrix>(
                    (__int64)this,
                    (__int64)&v11,
                    (__int128 *)(a4 + 12));
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
