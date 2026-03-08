/*
 * XREFs of ?SetRemarshalingFlags@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0251160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CAffineTransform2DEffectMarshaler *this)
{
  bool result; // al
  float v2; // xmm2_4
  float v3; // xmm2_4
  float v4; // xmm2_4
  float v5; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm2_4
  float v8; // xmm2_4

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18) )
    return 1;
  if ( *((_DWORD *)this + 28) )
    return 1;
  if ( *((_DWORD *)this + 29) != 1 )
    return 1;
  v2 = *((float *)this + 30) - 1.0;
  if ( v2 > 0.0000099999997 )
    return 1;
  if ( v2 < -0.0000099999997 )
    return 1;
  v3 = *((float *)this + 31);
  if ( v3 > 0.0000099999997 )
    return 1;
  if ( v3 < -0.0000099999997 )
    return 1;
  v4 = *((float *)this + 32);
  if ( v4 > 0.0000099999997 )
    return 1;
  if ( v4 < -0.0000099999997 )
    return 1;
  v5 = *((float *)this + 33) - 1.0;
  if ( v5 > 0.0000099999997 )
    return 1;
  if ( v5 < -0.0000099999997 )
    return 1;
  v6 = *((float *)this + 34);
  if ( v6 > 0.0000099999997 )
    return 1;
  if ( v6 < -0.0000099999997 )
    return 1;
  v7 = *((float *)this + 35);
  if ( v7 > 0.0000099999997 )
    return 1;
  if ( v7 < -0.0000099999997 )
    return 1;
  v8 = *((float *)this + 36) - 1.0;
  if ( v8 > 0.0000099999997 || v8 < -0.0000099999997 )
    return 1;
  return result;
}
