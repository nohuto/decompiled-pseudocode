/*
 * XREFs of ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01C8AB0
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00F0DE8 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     SetIconMetrics @ 0x1C010C85C (SetIconMetrics.c)
 *     ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01C8684 (-RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01C921C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 */

__int64 __fastcall SPISetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2, int a3)
{
  struct tagWND *v4; // rdi
  unsigned int v5; // esi
  BOOL v8; // eax
  int v9; // esi
  int v10; // esi
  int v11; // esi
  __int64 v12; // rax

  v4 = 0LL;
  v5 = 0;
  RescaleIconMetrics(a2);
  v8 = a3 == 0;
  if ( a3 )
  {
    v9 = SetWindowMetricInt(a1, 0x40u, *((_DWORD *)a2 + 1));
    v10 = SetWindowMetricInt(a1, 0x41u, *((_DWORD *)a2 + 2)) & v9;
    v11 = SetWindowMetricInt(a1, 0x42u, *((_DWORD *)a2 + 3)) & v10;
    v5 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL, (char *)a2 + 16, 92) & v11;
    v8 = v5;
  }
  if ( v8 )
  {
    SetIconMetrics(a1, (unsigned int *)a2);
    v12 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v12 )
      v4 = *(struct tagWND **)(*(_QWORD *)(v12 + 8) + 24LL);
    xxxInternalInvalidate(v4, (HRGN)1, 0x10485u);
  }
  return v5;
}
