/*
 * XREFs of ?DxgkPowerRuntimeDeviceDirectedPowerDownCallback@@YAXPEAXK@Z @ 0x1C0045850
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C003F52C (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DxgkPowerRuntimeDeviceDirectedPowerDownCallback(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    v5 = 0;
    v4 = 0;
    McTemplateK0pqq_EtwWriteTransfer(0LL, &Dxgk_PowerRuntimeDeviceDirectedPowerCallback, a3, this, v4, v5);
  }
  DXGADAPTER::PowerRuntimeDeviceDirectedPowerCallback(this, 0);
}
