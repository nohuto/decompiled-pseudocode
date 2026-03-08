/*
 * XREFs of ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C001A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C001ABD0 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DxgkPowerRuntimeDevicePowerNotRequiredCallback(DXGADAPTER *this, __int64 a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      0,
      (unsigned int)&Dxgk_PowerRuntimeDevicePowerRequiredCallback,
      a3,
      (_DWORD)this,
      0,
      0);
  DXGADAPTER::PowerRuntimeDevicePowerRequiredCallback(this, 0);
  PoFxCompleteDevicePowerNotRequired(*((_QWORD *)this + 379));
}
