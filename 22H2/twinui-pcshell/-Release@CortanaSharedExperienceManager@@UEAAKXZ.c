/*
 * XREFs of ?Release@CortanaSharedExperienceManager@@UEAAKXZ @ 0x180089840
 * Callers:
 *     ?Release@SearchAppExperienceManager@@W7EAAKXZ @ 0x180164720 (-Release@SearchAppExperienceManager@@W7EAAKXZ.c)
 *     ?Release@SearchAppExperienceManager@@WBA@EAAKXZ @ 0x180164730 (-Release@SearchAppExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@SearchAppExperienceManager@@WBI@EAAKXZ @ 0x180164740 (-Release@SearchAppExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CortanaSharedExperienceManager::Release(CortanaSharedExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::Release(this);
}
