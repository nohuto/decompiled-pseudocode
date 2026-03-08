/*
 * XREFs of ?SetRemarshalingFlags@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024F090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearTransferEffectMarshaler *this)
{
  bool result; // al
  char v2; // dl

  result = 0;
  *((_DWORD *)this + 26) = 0;
  if ( *((_DWORD *)this + 18) )
    return 1;
  if ( *((float *)this + 28) != 0.0 )
    return 1;
  if ( *((float *)this + 29) != 1.0 )
    return 1;
  v2 = *((_BYTE *)this + 144);
  if ( (v2 & 1) != 0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 1.0
    || (v2 & 2) != 0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 1.0
    || (v2 & 8) != 0
    || *((float *)this + 34) != 0.0
    || *((float *)this + 35) != 1.0
    || (v2 & 0x14) != 0 )
  {
    return 1;
  }
  return result;
}
