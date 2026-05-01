/*
 * XREFs of CrmStateMonitorSebCallback @ 0x18002AF70
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B824 (CrmStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorSebCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+24h] [rbp-24h]

  v6 = 1;
  v7 = *a5;
  CrmStateMonitorStateSet(a4, &v6, 12LL);
  return 0LL;
}
