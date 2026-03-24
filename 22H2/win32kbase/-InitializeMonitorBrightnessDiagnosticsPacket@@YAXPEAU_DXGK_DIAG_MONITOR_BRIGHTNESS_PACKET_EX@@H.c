/*
 * XREFs of ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C007A1E8
 * Callers:
 *     PowerUnDimMonitor @ 0x1C0078FA0 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0079120 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C011A2F0 (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(
        struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *a1,
        char a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  __int64 v8; // [rsp+30h] [rbp+8h]

  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *(_DWORD *)a1 = 25;
  *((_DWORD *)a1 + 1) = 88;
  *(_OWORD *)((char *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v8 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v8 * KeQueryTimeIncrement();
  *((_DWORD *)a1 + 14) = dword_1C0251230;
  *((_DWORD *)a1 + 15) = dword_1C025121C;
  *((_DWORD *)a1 + 16) = dword_1C0251218;
  *((_DWORD *)a1 + 17) = dword_1C0251224;
  v4 = dword_1C0251220;
  *((_DWORD *)a1 + 19) = -1;
  *((_DWORD *)a1 + 18) = v4;
  v5 = dword_1C025122C;
  *((_DWORD *)a1 + 21) &= ~2u;
  v6 = *((_DWORD *)a1 + 21);
  *((_DWORD *)a1 + 20) = v5;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(4 * dword_1C02511C0)) & 4;
  *((_DWORD *)a1 + 21) = v7;
  *((_DWORD *)a1 + 21) = a2 & 1 | v7 & 0xFFFFFFF6 | (8 * (dword_1C02511BC & 1));
}
