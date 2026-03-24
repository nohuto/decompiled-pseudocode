/*
 * XREFs of RtlUnlockBootStatusData @ 0x14078C6B0
 * Callers:
 *     PopBootStatSet @ 0x14077F268 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x1407903D4 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x1407C1130 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x1408F22F4 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408F2538 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408F2620 (PopBootStatUnlock.c)
 * Callees:
 *     RtlpAcquireBootStatusLock @ 0x1403F8678 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1403F86A8 (RtlpReleaseBootStatusLock.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwFsControlFile @ 0x1403FAAC0 (ZwFsControlFile.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlUnlockBootStatusData(HANDLE Handle)
{
  int v2; // eax
  char v3; // di
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  __int16 InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  IoStatusBlock = 0LL;
  InputBuffer = 0;
  RtlpAcquireBootStatusLock();
  if ( !BootStatReferenceCount )
    goto LABEL_14;
  v2 = BootStatReferenceCount - 1;
  v3 = 0;
  --BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    if ( !Handle )
    {
      Handle = BootStatFileHandle;
LABEL_8:
      BootStatReferenceCount = 0;
      v3 = 1;
      BootStatFileHandle = 0LL;
      BootStatFileHandleAcquired = 0;
      goto LABEL_9;
    }
    if ( !BootStatKeepHandleOpen && !v2 )
      goto LABEL_8;
  }
LABEL_9:
  if ( Handle )
  {
    ZwFsControlFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 2u, 0LL, 0);
    if ( v3 )
    {
      if ( BootStatDataCache )
      {
        ExFreePoolWithTag(BootStatDataCache, 0);
        BootStatDataCache = 0LL;
      }
      BootStatFileHandleAcquired = 0;
      ZwClose(Handle);
    }
  }
LABEL_14:
  RtlpReleaseBootStatusLock();
}
