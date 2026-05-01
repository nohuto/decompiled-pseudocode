/*
 * XREFs of ?Show@CStartExperienceManager@@UEAAJEEI@Z @ 0x18008C3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStartExperienceManager::Show(CStartExperienceManager *this, char a2, char a3, int a4)
{
  __int64 v5; // rdx

  *((_DWORD *)this + 146) = a4;
  v5 = 2LL;
  if ( a3 )
  {
    if ( !a2 )
      v5 = 6LL;
  }
  else
  {
    v5 = 3LL;
  }
  *((_BYTE *)this + 617) = 1;
  return CSingleViewShellExperience::Show(
           (__int64)this + 272,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v5);
}
