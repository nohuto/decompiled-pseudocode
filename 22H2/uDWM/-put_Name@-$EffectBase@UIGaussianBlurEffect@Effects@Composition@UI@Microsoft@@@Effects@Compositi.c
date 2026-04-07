/*
 * XREFs of ?put_Name@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@UEAAJPEAUHSTRING__@@@Z @ 0x1800C1FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::put_Name(
        __int64 a1,
        HSTRING a2)
{
  unsigned int v2; // ebx
  HSTRING *v3; // rdi

  v2 = 0;
  v3 = (HSTRING *)(a1 + 56);
  if ( !a2 || a2 != *v3 )
  {
    WindowsDeleteString(*v3);
    *v3 = 0LL;
    return (unsigned int)WindowsDuplicateString(a2, v3);
  }
  return v2;
}
