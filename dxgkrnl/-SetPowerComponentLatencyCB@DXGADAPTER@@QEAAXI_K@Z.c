/*
 * XREFs of ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001CE04
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C2C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0009F40 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C000F410 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001CCF4 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0048640 (DxgkSetPowerComponentLatencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01EA4F4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C00406D4 (McTemplateK0pqx_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentLatencyCB(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  if ( *((_BYTE *)this + 3465) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1520);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0pqx_EtwWriteTransfer(
        (_DWORD)this,
        (unsigned int)&Dxgk_SetPowerComponentLatencyCB,
        a3,
        (_DWORD)this,
        v5,
        a3);
    v6 = *((_QWORD *)this + 378) + 520LL * v5;
    if ( a3 != *(_QWORD *)(v6 + 368) )
    {
      *(_QWORD *)(v6 + 368) = a3;
      PoFxSetComponentLatency(*((_QWORD *)this + 379), v5, a3);
    }
  }
}
