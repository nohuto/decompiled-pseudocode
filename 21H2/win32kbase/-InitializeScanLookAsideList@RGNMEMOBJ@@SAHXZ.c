/*
 * XREFs of ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C006B210
 * Callers:
 *     InitializeGre @ 0x1C029A0FC (InitializeGre.c)
 * Callees:
 *     Win32AllocPagedLookasideList @ 0x1C006B6E0 (Win32AllocPagedLookasideList.c)
 */

_BOOL8 RGNMEMOBJ::InitializeScanLookAsideList(void)
{
  RGNMEMOBJ::s_pSCANLookAsideList = (void *)Win32AllocPagedLookasideList(112LL, 1935764551LL, 1852011335LL, 96LL);
  return RGNMEMOBJ::s_pSCANLookAsideList != 0LL;
}
