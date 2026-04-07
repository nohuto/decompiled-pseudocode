/*
 * XREFs of ?GetEffectId@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAU_GUID@@@Z @ 0x1800441E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::GetEffectId(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = CLSID_D2D1GaussianBlur;
  return result;
}
