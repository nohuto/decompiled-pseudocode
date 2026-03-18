/*
 * XREFs of ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0008830
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetFloatProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  switch ( a2 )
  {
    case 0x10u:
      if ( a3 < 0.0 )
        return 3221225485LL;
      if ( *((float *)this + 67) != a3 )
      {
        *((float *)this + 67) = a3;
LABEL_7:
        *((_DWORD *)this + 4) &= ~0x800u;
LABEL_8:
        *a4 = 1;
      }
      break;
    case 0x11u:
      if ( a3 > 0.0 || a3 == -1.0 )
      {
        if ( *((float *)this + 68) == a3 )
          return result;
        *((float *)this + 68) = a3;
        goto LABEL_7;
      }
      return 3221225485LL;
    case 0x1Fu:
      if ( a3 != 0.0
        && (a3 < 0.0625 || a3 > 16.0)
        && (COERCE_FLOAT(LODWORD(a3) ^ _xmm) < 0.0625 || COERCE_FLOAT(LODWORD(a3) ^ _xmm) > 16.0) )
      {
        return 3221225485LL;
      }
      if ( *((float *)this + 69) != a3 )
      {
        *((_DWORD *)this + 4) &= ~0x10000u;
        *((float *)this + 69) = a3;
        goto LABEL_8;
      }
      break;
    case 0x21u:
      if ( a3 >= 0.0 && a3 <= 1.0 )
      {
        *((_DWORD *)this + 4) &= ~0x4000u;
        *((float *)this + 70) = a3;
        goto LABEL_8;
      }
      return 3221225485LL;
    default:
      return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  return result;
}
