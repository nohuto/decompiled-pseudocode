/*
 * XREFs of ?SetIntegerProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C025C7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00A6C00 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CEffectGroupMarshaler::SetIntegerProperty(
        DirectComposition::CEffectGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 1 )
  {
    if ( *((_DWORD *)this + 19) != a4 )
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((_DWORD *)this + 19) = a4;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  return v5;
}
