/*
 * XREFs of ?SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0228FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216428 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTranslateTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CTranslateTransformMarshaler *this)
{
  char v2; // al
  char v3; // cl

  if ( *((float *)this + 20) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 21) != 0.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_DWORD *)this + 4) & 0x180) != 0 )
    return 1;
  return v3;
}
