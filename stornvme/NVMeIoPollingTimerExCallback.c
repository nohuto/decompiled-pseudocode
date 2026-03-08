/*
 * XREFs of NVMeIoPollingTimerExCallback @ 0x1C001F640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeIoPollingTimerExCallback(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h]

  v7 = 0;
  StorPortExtendedFunction(92LL, *a2, &v7, a4);
  v5 = a2[1];
  v8 = 0;
  return StorPortNotification(4098LL, *a2, v5 + 264);
}
