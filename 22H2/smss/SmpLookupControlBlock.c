/*
 * XREFs of SmpLookupControlBlock @ 0x1400035F4
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003030 (SmpHandleConnectionRequest.c)
 *     SmpStopCsr @ 0x1400059D0 (SmpStopCsr.c)
 * Callees:
 *     SmpTreeLookupControlBlock @ 0x140003644 (SmpTreeLookupControlBlock.c)
 */

__int64 __fastcall SmpLookupControlBlock(unsigned int a1)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockShared(&SmpControlLock);
  v2 = SmpTreeLookupControlBlock(SmpControlBlockRoot, a1);
  RtlReleaseSRWLockShared(&SmpControlLock);
  return v2;
}
