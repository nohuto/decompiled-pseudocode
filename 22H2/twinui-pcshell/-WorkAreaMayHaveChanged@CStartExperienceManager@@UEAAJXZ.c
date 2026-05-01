/*
 * XREFs of ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x180244740
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180080434 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 */

__int64 __fastcall CStartExperienceManager::WorkAreaMayHaveChanged(CStartExperienceManager *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = CStartExperienceManager::PositionMenu((CStartExperienceManager *)((char *)this - 40), (__int64)this + 272, 1);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
