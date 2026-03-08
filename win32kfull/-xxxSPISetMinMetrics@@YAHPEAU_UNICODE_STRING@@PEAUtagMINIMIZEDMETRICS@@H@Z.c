/*
 * XREFs of ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C00F0E4C
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00F0DE8 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00F0EF0 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01C921C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall xxxSPISetMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2, int a3)
{
  BOOL v6; // r12d
  unsigned int v7; // ebx
  INT DpiForSystem; // ecx
  INT *v9; // r14
  INT *v10; // r15
  INT *v11; // rbp
  INT v12; // edx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  INT c; // [rsp+60h] [rbp+18h]

  v6 = a3 == 0;
  v7 = 0;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  c = DpiForSystem;
  v9 = (INT *)((char *)a2 + 4);
  v10 = (INT *)((char *)a2 + 8);
  v11 = (INT *)((char *)a2 + 12);
  v12 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( DpiForSystem != v12 )
  {
    *v9 = EngMulDiv(*v9, v12, DpiForSystem);
    *v10 = EngMulDiv(*v10, *(unsigned __int16 *)(gpsi + 6998LL), c);
    *v11 = EngMulDiv(*v11, *(unsigned __int16 *)(gpsi + 6998LL), c);
  }
  if ( a3 )
  {
    v14 = SetWindowMetricInt(a1, 0x92u, *v9);
    v15 = SetWindowMetricInt(a1, 0x93u, *v10) & v14;
    v16 = SetWindowMetricInt(a1, 0x94u, *v11) & v15;
    v7 = SetWindowMetricInt(a1, 0x96u, *((_DWORD *)a2 + 4)) & v16;
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawMinMetrics(a1, a2);
  return v7;
}
