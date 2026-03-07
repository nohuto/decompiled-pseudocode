void __fastcall DxgkPowerRuntimeComponentIdleCallback(DXGADAPTER *this, unsigned int a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      (_DWORD)this,
      (unsigned int)&Dxgk_PowerRuntimeComponentActiveCallback,
      a3,
      (_DWORD)this,
      a2,
      0);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 0);
  PoFxCompleteIdleCondition(*((_QWORD *)this + 379), a2);
}
