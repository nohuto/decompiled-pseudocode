/*
 * XREFs of ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C01320F4
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0132090 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C013218C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D71E8 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall xxxSPISetMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2, int a3)
{
  BOOL v6; // r14d
  unsigned int v7; // edi
  INT v8; // ecx
  INT v10; // ebx
  int v11; // edi
  int v12; // edi
  int v13; // edi

  v6 = a3 == 0;
  v7 = 0;
  v8 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1) + 284);
  if ( (_WORD)v8 != *(_WORD *)(gpsi + 6998LL) )
  {
    v10 = v8;
    *((_DWORD *)a2 + 1) = EngMulDiv(*((_DWORD *)a2 + 1), *(unsigned __int16 *)(gpsi + 6998LL), v8);
    *((_DWORD *)a2 + 2) = EngMulDiv(*((_DWORD *)a2 + 2), *(unsigned __int16 *)(gpsi + 6998LL), v10);
    *((_DWORD *)a2 + 3) = EngMulDiv(*((_DWORD *)a2 + 3), *(unsigned __int16 *)(gpsi + 6998LL), v10);
  }
  if ( a3 )
  {
    v11 = SetWindowMetricInt(a1, 0x92u, *((_DWORD *)a2 + 1));
    v12 = SetWindowMetricInt(a1, 0x93u, *((_DWORD *)a2 + 2)) & v11;
    v13 = SetWindowMetricInt(a1, 0x94u, *((_DWORD *)a2 + 3)) & v12;
    v7 = SetWindowMetricInt(a1, 0x96u, *((_DWORD *)a2 + 4)) & v13;
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawMinMetrics(a1, a2);
  return v7;
}
