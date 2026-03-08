/*
 * XREFs of ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0263030
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0262E50 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  float v2; // xmm0_4
  unsigned int v3; // eax
  char v4; // bl

  v2 = *((float *)this + 65);
  v3 = *((_DWORD *)this + 4) & 0xFFFB07FF;
  *((_DWORD *)this + 4) = v3;
  if ( v2 != 1.0 )
  {
    v3 &= ~0x10000u;
    *((_DWORD *)this + 4) = v3;
  }
  v4 = 0;
  if ( *((_DWORD *)this + 61) )
    *((_DWORD *)this + 4) = v3 & 0xFFFDFFFF;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 62) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 16) && *((_QWORD *)this + 26)
    || *((_DWORD *)this + 59)
    || *((_DWORD *)this + 61) )
  {
    return 1;
  }
  return v4;
}
