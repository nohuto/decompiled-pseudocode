/*
 * XREFs of ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1C01D0F10
 * Callers:
 *     <none>
 * Callees:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C0012AE0 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DxgkLatencyToleranceTimerNotification(KSPIN_LOCK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGADAPTER::LatencyToleranceTimerNotification(a1, a2, a3, a4);
}
