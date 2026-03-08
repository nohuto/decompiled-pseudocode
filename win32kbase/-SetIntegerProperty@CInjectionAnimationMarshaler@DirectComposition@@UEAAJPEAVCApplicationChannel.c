/*
 * XREFs of ?SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C026AB80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C009E0C0 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 */

__int64 __fastcall DirectComposition::CInjectionAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CInjectionAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  if ( a3 == 12 )
  {
    if ( *((_QWORD *)this + 17) == a4 )
      return v5;
    *((_QWORD *)this + 17) = a4;
    goto LABEL_8;
  }
  if ( a3 == 13 )
  {
    if ( *((_QWORD *)this + 18) == a4 )
      return v5;
    *((_QWORD *)this + 18) = a4;
LABEL_8:
    *((_DWORD *)this + 4) &= ~0x800u;
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
