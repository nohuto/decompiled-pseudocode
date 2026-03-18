/*
 * XREFs of ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C022AD80 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetRemarshalingFlags(
        DirectComposition::CKeyframeAnimationMarshaler *this)
{
  float v2; // xmm0_4
  unsigned int v3; // eax
  char v4; // bl

  v2 = *((float *)this + 69);
  v3 = *((_DWORD *)this + 4) & 0xFFFB07FF;
  *((_DWORD *)this + 4) = v3;
  if ( v2 != 1.0 )
  {
    v3 &= ~0x10000u;
    *((_DWORD *)this + 4) = v3;
  }
  v4 = 0;
  if ( *((_DWORD *)this + 65) )
    *((_DWORD *)this + 4) = v3 & 0xFFFDFFFF;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 66) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 17) && *((_QWORD *)this + 28)
    || *((_DWORD *)this + 63)
    || *((_DWORD *)this + 65) )
  {
    return 1;
  }
  return v4;
}
