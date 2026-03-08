/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x14078F860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 FsRtlReleaseFileNameInformation()
{
  return (*(__int64 (**)(void))(FltMgrCallbacks + 32))();
}
