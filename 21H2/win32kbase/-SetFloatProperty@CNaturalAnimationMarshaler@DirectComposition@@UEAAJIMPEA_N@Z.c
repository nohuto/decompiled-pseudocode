/*
 * XREFs of ?SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0234450
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_ @ 0x1C023404C (DirectComposition--_anonymous_namespace_--UpdatePropertyIfChanged_float_.c)
 *     ?EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimationType@@@Z @ 0x1C023424C (-EnsureProperties@CNaturalAnimationMarshaler@DirectComposition@@AEAAJW4Enum@NaturalMotionAnimati.c)
 *     ?FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1C02342BC (-FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z.c)
 *     ?InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z @ 0x1C02342F8 (-InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition@@AEAAXPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetFloatProperty(
        DirectComposition::CNaturalAnimationMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  float *v4; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v5; // rcx
  bool *v6; // r9
  unsigned int v7; // r11d
  float *v8; // rdx
  DirectComposition::CNaturalAnimationMarshaler *v9; // rcx
  bool *v10; // r9
  __int64 v11; // rcx
  float *v12; // rdx
  __int64 v13; // r10
  bool v14; // cf
  int v15; // edx
  __int64 v16; // rcx

  *a4 = 0;
  if ( a2 > 0x2D )
  {
    switch ( a2 )
    {
      case '.':
        v12 = (float *)((char *)this + 164);
        goto LABEL_45;
      case '/':
        v12 = (float *)((char *)this + 168);
        goto LABEL_45;
      case '1':
        v15 = 2;
        break;
      case '2':
        v7 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, 2);
        if ( (v7 & 0x80000000) != 0 )
          return v7;
        v14 = a3 < 0.0;
LABEL_40:
        if ( v14 )
          return (unsigned int)-1073741811;
        *(float *)(v13 + 180) = a3;
LABEL_37:
        *(_DWORD *)(v13 + 16) |= 0x10000u;
        return v7;
      case '3':
        v15 = 1;
        break;
      case '4':
        v7 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, 1);
        if ( (v7 & 0x80000000) != 0 )
          return v7;
        if ( a3 < 0.0 )
          return (unsigned int)-1073741811;
        v14 = a3 > 1.0;
        goto LABEL_40;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
    }
    v7 = DirectComposition::CNaturalAnimationMarshaler::EnsureProperties((float *)this, v15);
    if ( (v7 & 0x80000000) != 0 )
      return v7;
    if ( a3 < 0.0 )
      return (unsigned int)-1073741811;
    *(float *)(v13 + 176) = a3;
    goto LABEL_37;
  }
  if ( a2 != 45 )
  {
    if ( a2 != 16 )
    {
      switch ( a2 )
      {
        case '%':
          v8 = (float *)((char *)this + 148);
          break;
        case '&':
          v8 = (float *)((char *)this + 152);
          break;
        case '\'':
          v8 = (float *)((char *)this + 156);
          break;
        case ')':
          v4 = (float *)((char *)this + 136);
          goto LABEL_13;
        case '*':
          v4 = (float *)((char *)this + 140);
          goto LABEL_13;
        case '+':
          v4 = (float *)((char *)this + 144);
LABEL_13:
          DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v4, a4);
          DirectComposition::CNaturalAnimationMarshaler::InitialValueSetOrChanged(v5, v6);
          return v7;
        default:
          return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
      }
      DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v8, a4);
      DirectComposition::CNaturalAnimationMarshaler::FinalValueSetOrChanged(v9, v10);
      return v7;
    }
    if ( a3 >= 0.0 )
    {
      if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, (float *)this + 50, a4) )
        *(_DWORD *)(v11 + 16) |= 0x20000u;
      return v7;
    }
    return (unsigned int)-1073741811;
  }
  v12 = (float *)((char *)this + 160);
LABEL_45:
  if ( DirectComposition::_anonymous_namespace_::UpdatePropertyIfChanged_float_(a3, v12, a4) )
    *(_DWORD *)(v16 + 16) |= 0x8000u;
  return v7;
}
