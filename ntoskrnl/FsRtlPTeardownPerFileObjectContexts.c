/*
 * XREFs of FsRtlPTeardownPerFileObjectContexts @ 0x1406B1CE4
 * Callers:
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14023A500 (ExCleanupAutoExpandPushLock.c)
 *     IoGetFileObjectFilterContext @ 0x14023AAB0 (IoGetFileObjectFilterContext.c)
 *     IoChangeFileObjectFilterContext @ 0x14023AD2C (IoChangeFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlPTeardownPerFileObjectContexts(__int64 a1)
{
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  IoGetFileObjectFilterContext(a1, &P, 0);
  if ( P )
  {
    IoChangeFileObjectFilterContext(a1);
    ExCleanupAutoExpandPushLock((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
}
