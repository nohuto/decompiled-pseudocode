/*
 * XREFs of ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C003EA10
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0038254 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A3F8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DxgkPowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, __int64 a3, __int64 a4)
{
  int v7; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    v7 = 1;
    McTemplateK0pqq_EtwWriteTransfer((__int64)this, &Dxgk_PowerRuntimeComponentActiveCallback, a3, this, a2, v7);
  }
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 1, a4);
}
