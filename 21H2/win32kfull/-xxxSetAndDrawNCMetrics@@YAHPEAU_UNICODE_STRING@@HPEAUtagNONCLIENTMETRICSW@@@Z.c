/*
 * XREFs of ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01580A8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C0157CE0 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     xxxSetWindowNCMetrics @ 0x1C00C7060 (xxxSetWindowNCMetrics.c)
 *     xxxMetricsRecalc @ 0x1C015823C (xxxMetricsRecalc.c)
 *     MenuRecalc @ 0x1C01585A4 (MenuRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawNCMetrics(struct _UNICODE_STRING *a1, int a2, struct tagNONCLIENTMETRICSW *a3)
{
  struct tagWND *v5; // rbx
  __int64 SessionDpiServerInfo; // r13
  int v7; // r14d
  int v8; // edi
  int v9; // r15d
  int v10; // ebp
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // r10d
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rax
  int v20; // [rsp+90h] [rbp+18h]
  int v21; // [rsp+98h] [rbp+20h]

  v5 = 0LL;
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v7 = *(_DWORD *)(SessionDpiServerInfo + 4);
  v8 = *(_DWORD *)(gpsi + 2400LL);
  v20 = *(_DWORD *)(gpsi + 2124LL);
  v21 = *(_DWORD *)(gpsi + 2128LL);
  if ( a3 )
  {
    v9 = *((_DWORD *)a3 + 5) - *(_DWORD *)(gpsi + 2336LL);
    v10 = *((_DWORD *)a3 + 55) - *(_DWORD *)(gpsi + 2388LL);
  }
  else
  {
    if ( a2 == v7 )
      return 0LL;
    v10 = 0;
    v9 = 0;
  }
  xxxSetWindowNCMetrics(a1, a3, a2);
  MenuRecalc();
  v11 = *(_DWORD *)(gpsi + 2400LL);
  v12 = v11 + *(_DWORD *)(SessionDpiServerInfo + 4);
  v13 = v12 - v7 - v8;
  if ( v8 > 0 )
    goto LABEL_18;
  if ( v11 > 0 )
  {
    if ( !v8 )
      goto LABEL_6;
LABEL_18:
    if ( v11 )
      v12 = v11 + *(_DWORD *)(SessionDpiServerInfo + 4) - v7 - v8;
    else
      v12 = -(v7 + v8);
    goto LABEL_6;
  }
  v12 = 0;
LABEL_6:
  if ( v13 || (v14 = 2, v12) )
    v14 = 3;
  xxxMetricsRecalc(v14, 0, 0, v9, v10, v13, v12);
  v15 = *(_DWORD *)(gpsi + 2128LL) - v21;
  v16 = *(_DWORD *)(gpsi + 2124LL) - v20;
  if ( v16 || v15 )
    xxxMetricsRecalc(4, v16, v15, 0, 0, 0, 0);
  v17 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v17 )
    v5 = *(struct tagWND **)(*(_QWORD *)(v17 + 8) + 24LL);
  xxxInternalInvalidate(v5, (HRGN)1, 0x10485u);
  return 1LL;
}
