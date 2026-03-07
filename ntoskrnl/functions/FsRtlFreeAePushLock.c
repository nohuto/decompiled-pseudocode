void __fastcall FsRtlFreeAePushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
