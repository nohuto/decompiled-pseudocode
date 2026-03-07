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
