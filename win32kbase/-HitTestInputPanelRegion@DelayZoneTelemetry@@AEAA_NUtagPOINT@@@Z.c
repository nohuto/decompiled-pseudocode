/*
 * XREFs of ?HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z @ 0x1C02320A8
 * Callers:
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C0232334 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

char __fastcall DelayZoneTelemetry::HitTestInputPanelRegion(DelayZoneTelemetry *this, struct tagPOINT a2)
{
  char *v2; // rsi
  char v3; // bp
  char *v4; // rdi
  bool v7; // zf
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v2 = (char *)this + 12288;
  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 1536);
  if ( v4 == (char *)this + 12288 )
    return 0;
  do
  {
    v7 = !PtInRect((_DWORD *)v4 + 4, *(_QWORD *)&a2);
    v9 = *(_QWORD **)(v8 + 8);
    if ( !v7 )
      v3 = 1;
    v10 = *(_QWORD *)v4;
    v4 = (char *)v10;
    if ( *(_QWORD *)(v10 + 8) != v8 || *v9 != v8 )
      __fastfail(3u);
    *v9 = v10;
    *(_QWORD *)(v10 + 8) = v9;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v8);
  }
  while ( v4 != v2 );
  return v3;
}
