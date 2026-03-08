/*
 * XREFs of ?DestroyHwQueueOnHost@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@@Z @ 0x1C0312ADC
 * Callers:
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03128E4 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x1C0383774 (-VmBusSendDestroyHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyHwQueueOnHost(DXGCONTEXT *this, struct DXGHWQUEUE *a2)
{
  unsigned int HostProcess; // eax

  if ( *((_DWORD *)this + 7) )
  {
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL));
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyHwQueue(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 4472LL),
      HostProcess,
      *((_DWORD *)a2 + 7));
  }
}
