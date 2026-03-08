/*
 * XREFs of ?ReportPowerComponentIdle@DXGMONITOR@@UEBAXI@Z @ 0x1C03C48C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGMONITOR::ReportPowerComponentIdle(DXGMONITOR *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 21) + 24LL);
  v5 = *(_QWORD *)(v4 + 16);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    v8 = 0;
    McTemplateK0pqq_EtwWriteTransfer(v4, &Dxgk_ReportPowerComponentState, a3, v5, a2, v8);
  }
  v6 = *(_QWORD *)(v5 + 3032);
  if ( v6 )
    PoFxIdleComponent(v6, a2, 0LL);
}
