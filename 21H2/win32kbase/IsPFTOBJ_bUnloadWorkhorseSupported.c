/*
 * XREFs of IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C023DAC8
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0086F68 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPFTOBJ_bUnloadWorkhorseSupported()
{
  if ( qword_1C029B570 )
    return qword_1C029B570();
  else
    return 3221225659LL;
}
