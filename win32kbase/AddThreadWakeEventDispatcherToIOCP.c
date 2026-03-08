/*
 * XREFs of AddThreadWakeEventDispatcherToIOCP @ 0x1C0099E00
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x1C009A310 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 */

void AddThreadWakeEventDispatcherToIOCP()
{
  IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
    *(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
    ghMITEvent,
    lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_,
    0LL);
}
