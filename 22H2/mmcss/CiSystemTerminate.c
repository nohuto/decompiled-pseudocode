/*
 * XREFs of CiSystemTerminate @ 0x1C000C8CC
 * Callers:
 *     CiSystemInitialize @ 0x1C000E270 (CiSystemInitialize.c)
 * Callees:
 *     CiFreeMemory @ 0x1C0004D68 (CiFreeMemory.c)
 */

void CiSystemTerminate()
{
  if ( CiLastIdleStats )
  {
    CiFreeMemory((void *)CiLastIdleStats);
    CiLastIdleStats = 0LL;
  }
}
