/*
 * XREFs of FsRtlReleaseFileNameInformation @ 0x1407DE930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 FsRtlReleaseFileNameInformation()
{
  return (*(__int64 (**)(void))(FltMgrCallbacks + 32))();
}
