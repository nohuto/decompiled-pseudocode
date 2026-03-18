/*
 * XREFs of FsRtlGetFileNameInformation @ 0x1407DBB10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 FsRtlGetFileNameInformation()
{
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 24))();
  else
    return 3221225659LL;
}
