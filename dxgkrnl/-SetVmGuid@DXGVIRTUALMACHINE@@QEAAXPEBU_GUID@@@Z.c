/*
 * XREFs of ?SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z @ 0x1C03418F0
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C004CDD0 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C036AF40 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     McTemplateK0pppj_EtwWriteTransfer @ 0x1C0055AFC (McTemplateK0pppj_EtwWriteTransfer.c)
 */

void __fastcall DXGVIRTUALMACHINE::SetVmGuid(struct _GUID *this, const struct _GUID *a2)
{
  this[18] = *a2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pppj_EtwWriteTransfer(
      (__int64)this,
      &EventCreateVirtualMachine,
      (__int64)&this[18],
      this,
      *(_QWORD *)this[3].Data4,
      *(_QWORD *)&this[17].Data1,
      &this[18]);
}
