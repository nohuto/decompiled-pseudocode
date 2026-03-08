/*
 * XREFs of ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001ABD0
 * Callers:
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C001A9F0 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C001AA40 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiRequestDevicePowerState @ 0x1C001AC34 (DpiRequestDevicePowerState.c)
 *     DpiIsNeedWakeUpAdapter @ 0x1C005DD70 (DpiIsNeedWakeUpAdapter.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(DXGADAPTER *this, char a2)
{
  unsigned int v3; // edi
  struct DXGGLOBAL *Global; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  if ( *((_BYTE *)this + 204) )
  {
    if ( a2 )
      PoFxReportDevicePoweredOn(*((_QWORD *)this + 379));
  }
  else
  {
    if ( a2 )
    {
      Global = DXGGLOBAL::GetGlobal();
      v3 = 1;
      if ( *((_DWORD *)Global + 530)
        && *((_BYTE *)Global + 304376)
        && (unsigned __int8)DpiIsNeedWakeUpAdapter(*((_QWORD *)this + 27)) )
      {
        WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 27));
        if ( WorkItem )
          IoQueueWorkItemEx(WorkItem, DXGGLOBAL::ReportGpuWakeupWorkItemCallback, DelayedWorkQueue, 0LL);
      }
    }
    else
    {
      v3 = 4;
    }
    DpiRequestDevicePowerState(*((_QWORD *)this + 27), v3);
  }
}
