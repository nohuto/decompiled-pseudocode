/*
 * XREFs of ?GetTriageInfo@@YAXXZ @ 0x1C002BCEC
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C002BFD8 (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

void GetTriageInfo(void)
{
  WdfObjectTriageInfo.RawObjectSize = 104;
  WdfObjectTriageInfo.ObjectType = 8;
  WdfObjectTriageInfo.TotalObjectSize = 10;
  *(_QWORD *)&WdfContextTriageInfo.NextHeader = 8LL;
  WdfContextTriageInfo.Context = 48;
  WdfObjectTriageInfo.ChildListHead = 32;
  WdfObjectTriageInfo.ParentObject = 64;
  WdfContextTriageInfo.HeaderSize = 64;
  WdfContextTriageInfo.TypeInfoPtr = 32;
  WdfContextTypeTriageInfo.TypeInfoSize = 40;
  WdfFwdProgressTriageInfo.ReservedRequestList = 40;
  *(_QWORD *)&WdfIrpQueueTriageInfo.IrpQueueSize = 40LL;
  WdfRequestTriageInfo.CsqContext = 120;
  WdfRequestTriageInfo.RequestListEntry = 120;
  WdfObjectTriageInfo.ChildEntry = 72;
  WdfObjectTriageInfo.Globals = 16;
  WdfContextTypeTriageInfo.ContextSize = 16;
  WdfContextTypeTriageInfo.ContextName = 8;
  WdfQueueTriageInfo.QueueSize = 936;
  WdfQueueTriageInfo.IrpQueue1 = 192;
  WdfQueueTriageInfo.IrpQueue2 = 232;
  WdfQueueTriageInfo.RequestList1 = 272;
  WdfQueueTriageInfo.RequestList2 = 288;
  WdfQueueTriageInfo.FwdProgressContext = 128;
  WdfQueueTriageInfo.PkgIo = 352;
  WdfFwdProgressTriageInfo.ReservedRequestInUseList = 56;
  WdfFwdProgressTriageInfo.PendedIrpList = 72;
  WdfIrpQueueTriageInfo.IrpListEntry = 168;
  WdfIrpQueueTriageInfo.IrpContext = 144;
  WdfRequestTriageInfo.RequestSize = 360;
  WdfRequestTriageInfo.FxIrp = 152;
  WdfRequestTriageInfo.ListEntryQueueOwned = 288;
  WdfRequestTriageInfo.ListEntryQueueOwned2 = 304;
  WdfRequestTriageInfo.FwdProgressList = 320;
  WdfDeviceTriageInfo.DeviceInitSize = 944;
  WdfDeviceTriageInfo.DeviceDriver = 136;
  WdfIrpTriageInfo = (_WDFIRP_TRIAGE_INFO)8LL;
}
