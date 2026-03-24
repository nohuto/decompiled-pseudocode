/*
 * XREFs of CmpFreezeThawWorker @ 0x140872560
 * Callers:
 *     <none>
 * Callees:
 *     CmThawRegistry @ 0x140872380 (CmThawRegistry.c)
 */

__int64 CmpFreezeThawWorker()
{
  __int64 result; // rax

  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    return CmThawRegistry();
  return result;
}
