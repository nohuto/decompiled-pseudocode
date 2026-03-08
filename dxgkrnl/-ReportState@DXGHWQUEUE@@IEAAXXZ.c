/*
 * XREFs of ?ReportState@DXGHWQUEUE@@IEAAXXZ @ 0x1C0316654
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C02DFB44 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0051A38 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C034FDA8 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGHWQUEUE::ReportState(DXGHWQUEUE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  DXGDEVICESYNCOBJECT *v5; // rcx

  if ( bTracingEnabled )
  {
    v4 = *((unsigned int *)this + 6);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0ppp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        &EventReportHwQueue,
        a3,
        *((_QWORD *)this + 2),
        v4,
        this);
  }
  v5 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 11);
  if ( v5 )
    DXGDEVICESYNCOBJECT::ReportState(v5);
  if ( *((_QWORD *)this + 5) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL)
                                  + 8LL)
                      + 288LL))();
}
