/*
 * XREFs of imp_WdfIoQueueRetrieveNextRequest @ 0x1C0017DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A1C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ **OutRequest)
{
  WDFREQUEST__ *ObjectHandleUnchecked; // rbx
  int Request; // edx
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxIoQueue *pQueue; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pOutputRequest; // [rsp+40h] [rbp+18h] BYREF

  ObjectHandleUnchecked = 0LL;
  pQueue = 0LL;
  pOutputRequest = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue);
  if ( !OutRequest )
    FxVerifierNullBugCheck(pQueue->m_Globals, retaddr);
  Request = FxIoQueue::GetRequest(pQueue, 0LL, 0LL, ($55631384234A24007A0779E5E472941C **)&pOutputRequest);
  if ( Request >= 0 )
    ObjectHandleUnchecked = (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked(pOutputRequest);
  *OutRequest = ObjectHandleUnchecked;
  return (unsigned int)Request;
}
