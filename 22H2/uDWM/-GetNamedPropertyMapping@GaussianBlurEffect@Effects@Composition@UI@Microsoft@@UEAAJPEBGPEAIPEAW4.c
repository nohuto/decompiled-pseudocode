/*
 * XREFs of ?GetNamedPropertyMapping@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@2Graphics@Windows@@@Z @ 0x1800C1B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::GetNamedPropertyMapping(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        enum Windows::Graphics::Effects::GRAPHICS_EFFECT_PROPERTY_MAPPING *a4)
{
  unsigned int v4; // edi
  wchar_t **v5; // rbx
  unsigned int v6; // esi

  v4 = 0;
  v5 = &`Microsoft::UI::Composition::Effects::GaussianBlurEffect::GetNamedPropertyMapping'::`2'::s_Properties;
  v6 = 0;
  while ( _wcsicmp(a2, *v5) )
  {
    ++v6;
    v5 += 2;
    if ( v6 >= 3 )
      return (unsigned int)-2147024809;
  }
  *a3 = *((_DWORD *)v5 + 2);
  *(_DWORD *)a4 = *((_DWORD *)v5 + 3);
  return v4;
}
