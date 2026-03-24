/*
 * XREFs of ?InitializeScanLookAsideList@RGNMEMOBJ@@SAHXZ @ 0x1C006BCC0
 * Callers:
 *     InitializeGre @ 0x1C02990FC (InitializeGre.c)
 * Callees:
 *     Win32AllocPagedLookasideList @ 0x1C006C190 (Win32AllocPagedLookasideList.c)
 */

_BOOL8 RGNMEMOBJ::InitializeScanLookAsideList(void)
{
  RGNMEMOBJ::s_pSCANLookAsideList = (void *)Win32AllocPagedLookasideList(112LL, 1935764551LL, 1852011335LL, 96LL);
  return RGNMEMOBJ::s_pSCANLookAsideList != 0LL;
}
