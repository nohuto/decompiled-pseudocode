/*
 * XREFs of NtLockRegistryKey @ 0x1407C3710
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmLockKeyForWrite @ 0x1407C37B0 (CmLockKeyForWrite.c)
 */

__int64 __fastcall NtLockRegistryKey(void *a1)
{
  __int64 v2; // r8
  int v3; // ebx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  DmaAdapter = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    return (unsigned int)-1073741727;
  }
  else if ( CmpAcquireShutdownRundown() )
  {
    v3 = CmObReferenceObjectByHandle(a1, 0x20006u, v2, 0, &DmaAdapter, 0LL);
    if ( v3 >= 0 )
    {
      v3 = CmLockKeyForWrite(DmaAdapter);
      if ( v3 >= 0 )
        v3 = 0;
    }
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    CmpReleaseShutdownRundown();
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v3;
}
