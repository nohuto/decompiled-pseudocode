/*
 * XREFs of CiProcessNotification @ 0x1C00027C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003420 (_guard_dispatch_icall_nop.c)
 *     CiProcessSuspend @ 0x1C0004AE8 (CiProcessSuspend.c)
 *     CiProcessLocate @ 0x1C000AFF0 (CiProcessLocate.c)
 *     CiProcessDereference @ 0x1C000B280 (CiProcessDereference.c)
 */

__int64 __fastcall CiProcessNotification(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rbx
  unsigned __int8 v4; // al

  result = CiProcessLocate();
  v3 = (void *)result;
  if ( result )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))CiKernelInterface)(a1);
    CiProcessSuspend(v3, v4);
    return CiProcessDereference(v3);
  }
  return result;
}
