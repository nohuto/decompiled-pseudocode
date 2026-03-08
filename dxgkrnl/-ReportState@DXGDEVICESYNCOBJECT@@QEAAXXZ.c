/*
 * XREFs of ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C034FDA8
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C02DFB44 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C02E822C (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGHWQUEUE@@IEAAXXZ @ 0x1C0316654 (-ReportState@DXGHWQUEUE@@IEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0051A38 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C0186BD8 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::ReportState(DXGDEVICESYNCOBJECT *this)
{
  __int64 v1; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *((_QWORD *)this + 4);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v1 + 32));
  if ( bTracingEnabled )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)this + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventReportSyncObject,
        v4,
        VidSchSyncObject,
        *((unsigned int *)this + 10),
        v5);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 32));
}
