/*
 * XREFs of CrmStateMonitorDelayedCsCallback @ 0x180043C10
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B824 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorDelayedCsCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 - 64;
  if ( (unsigned int)(*a3 - 1) <= 0xFFFFFFFD )
  {
    v6 = 1;
    CrmStateMonitorStateSet((void **)(a1 - 64), &v6, 4uLL, 0);
    v5 = *(_QWORD *)(v3 + 88);
    v7 = -36000000000LL;
    return TpSetTimer(v5, &v7, 0LL, 60000LL);
  }
  else
  {
    TpSetTimer(*(_QWORD *)(v3 + 88), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    return CrmStateMonitorStateSet((void **)v3, &v6, 4uLL, 0);
  }
}
