/*
 * XREFs of ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C954C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01C92D0 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     xxxSetWindowNCMetrics @ 0x1C010CBC8 (xxxSetWindowNCMetrics.c)
 *     xxxMetricsRecalc @ 0x1C01C9A5C (xxxMetricsRecalc.c)
 *     MenuRecalc @ 0x1C0230930 (MenuRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawNCMetrics(struct _UNICODE_STRING *a1, int a2, struct tagNONCLIENTMETRICSW *a3)
{
  struct tagWND *v5; // rbx
  __int64 SessionDpiServerInfo; // r13
  int v7; // r14d
  int v8; // edi
  int v10; // ebp
  int v11; // r15d
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // r10d
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rax
  int v20; // [rsp+90h] [rbp+18h]
  int v21; // [rsp+98h] [rbp+20h]

  v5 = 0LL;
  SessionDpiServerInfo = GetSessionDpiServerInfo(a1);
  v7 = *(_DWORD *)(SessionDpiServerInfo + 4);
  v8 = *(_DWORD *)(gpsi + 2400LL);
  v20 = *(_DWORD *)(gpsi + 2124LL);
  v21 = *(_DWORD *)(gpsi + 2128LL);
  if ( a3 )
  {
    v11 = *((_DWORD *)a3 + 5) - *(_DWORD *)(gpsi + 2336LL);
    v10 = *((_DWORD *)a3 + 55) - *(_DWORD *)(gpsi + 2388LL);
  }
  else
  {
    if ( a2 == v7 )
      return 0LL;
    v10 = 0;
    v11 = 0;
  }
  xxxSetWindowNCMetrics(a1, a3, a2);
  MenuRecalc();
  v12 = *(_DWORD *)(gpsi + 2400LL);
  v13 = v12 + *(_DWORD *)(SessionDpiServerInfo + 4);
  v14 = v13 - v7 - v8;
  if ( v8 > 0 )
    goto LABEL_10;
  if ( v12 <= 0 )
  {
    v13 = 0;
    goto LABEL_13;
  }
  if ( v8 )
  {
LABEL_10:
    if ( v12 )
      v13 = v12 + *(_DWORD *)(SessionDpiServerInfo + 4) - v7 - v8;
    else
      v13 = -(v7 + v8);
  }
LABEL_13:
  if ( v14 || (v15 = 2, v13) )
    v15 = 3;
  xxxMetricsRecalc(v15, 0, 0, v11, v10, v14, v13);
  v16 = *(_DWORD *)(gpsi + 2128LL) - v21;
  v17 = *(_DWORD *)(gpsi + 2124LL) - v20;
  if ( v17 || v16 )
    xxxMetricsRecalc(4, v17, v16, 0, 0, 0, 0);
  v18 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v18 )
    v5 = *(struct tagWND **)(*(_QWORD *)(v18 + 8) + 24LL);
  xxxInternalInvalidate(v5, (HRGN)1, 0x10485u);
  return 1LL;
}
