/*
 * XREFs of ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C007EA88
 * Callers:
 *     PowerUnDimMonitor @ 0x1C007D5BC (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C007E570 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0147D4C (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(
        struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *a1,
        char a2)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *(_DWORD *)a1 = 25;
  *((_DWORD *)a1 + 1) = 88;
  *(_OWORD *)((char *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v4 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v4 * KeQueryTimeIncrement();
  *((_DWORD *)a1 + 14) = dword_1C0296F90;
  *((_DWORD *)a1 + 15) = dword_1C0296F7C;
  *((_DWORD *)a1 + 16) = dword_1C0296F78;
  *((_DWORD *)a1 + 17) = dword_1C0296F84;
  v5 = dword_1C0296F80;
  *((_DWORD *)a1 + 19) = -1;
  *((_DWORD *)a1 + 18) = v5;
  v6 = dword_1C0296F8C;
  *((_DWORD *)a1 + 21) &= ~2u;
  v7 = *((_DWORD *)a1 + 21);
  *((_DWORD *)a1 + 20) = v6;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(4 * dword_1C0296FF0)) & 4;
  *((_DWORD *)a1 + 21) = v8;
  *((_DWORD *)a1 + 21) = a2 & 1 | v8 & 0xFFFFFFF6 | (8 * (dword_1C0296FEC & 1));
}
