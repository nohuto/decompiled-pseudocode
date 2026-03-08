/*
 * XREFs of MiHandleInPageError @ 0x14036A984
 * Callers:
 *     MiHardFaultPageRelease @ 0x140287C78 (MiHardFaultPageRelease.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiHandleInPageError(ULONG_PTR a1)
{
  __int64 result; // rax

  MiRestoreTransitionPte(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  result = *(_QWORD *)(a1 + 16);
  if ( (result & 0x400) == 0 )
  {
    result &= 0xFFFFFFFFFFFFFFF9uLL;
    *(_QWORD *)(a1 + 16) = result;
  }
  return result;
}
