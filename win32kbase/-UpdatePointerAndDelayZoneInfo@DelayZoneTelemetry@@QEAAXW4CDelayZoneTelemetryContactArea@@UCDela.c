/*
 * XREFs of ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C0232334
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0216000 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x1C0231E20 (-AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z.c)
 *     ?HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z @ 0x1C02320A8 (-HitTestInputPanelRegion@DelayZoneTelemetry@@AEAA_NUtagPOINT@@@Z.c)
 */

void __fastcall DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(
        DelayZoneTelemetry *a1,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT *a4,
        int a5)
{
  __int64 v9; // r11
  __int64 v10; // r14
  __int64 v11; // rsi
  int v12; // eax
  struct tagRECT v13; // [rsp+20h] [rbp-28h] BYREF

  v9 = (*((_DWORD *)a1 + 2) + a5) % 0xD5u;
  v10 = (unsigned int)v9;
  v11 = 6 * v9;
  *((_DWORD *)a1 + 2 * v11 + 517) = a3->left;
  *((_DWORD *)a1 + 2 * v11 + 518) = a3->top;
  v12 = (int)qword_1C02D7448;
  if ( qword_1C02D7448 )
    v12 = qword_1C02D7448();
  *((_DWORD *)a1 + 2 * v11 + 519) = v12;
  *((_DWORD *)a1 + 2 * v11 + 520) = a4->x;
  *((_DWORD *)a1 + 2 * v11 + 521) = a4[1].y;
  *((_DWORD *)a1 + 2 * v11 + 525) = a4[6].x;
  *((_DWORD *)a1 + 2 * v11 + 526) = a4[6].y;
  *((_DWORD *)a1 + 2 * v11 + 527) = a4[8].x;
  if ( a4->x == 3 )
  {
    *((_DWORD *)a1 + 12 * v10 + 516) = 3 - (DelayZoneTelemetry::HitTestInputPanelRegion(a1, a4[6]) != 0);
  }
  else
  {
    *((_DWORD *)a1 + 12 * v10 + 516) = a2;
    if ( !a2 )
    {
      v13 = a3[1];
      DelayZoneTelemetry::AddInputPanelRectToList(a1, &v13);
    }
  }
}
