/*
 * XREFs of IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C0232718
 * Callers:
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsPFTOBJ_bUnloadWorkhorseSupported()
{
  if ( qword_1C0294C08 )
    return qword_1C0294C08();
  else
    return 3221225659LL;
}
