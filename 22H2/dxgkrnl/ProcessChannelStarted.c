/*
 * XREFs of ProcessChannelStarted @ 0x1C02B43F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 ProcessChannelStarted()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx

  result = ((__int64 (*)(void))qword_1C00B4348)();
  v3 = result;
  if ( result )
  {
    result = WdLogNewEntry5_WdTrace(v2, v1);
    *(_QWORD *)(result + 24) = v3;
  }
  return result;
}
