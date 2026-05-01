/*
 * XREFs of CrmStateMonitorWNFCallback @ 0x180043570
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B824 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BE6C (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorWNFCallback(__int64 a1, __int64 a2, __int64 a3, int *a4, __int64 a5, size_t Size)
{
  unsigned int v7; // eax
  const void *v8; // rdx
  size_t v9; // rdi
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+24h] [rbp-24h] BYREF

  v7 = CrmStateMonitorStateSizeGet(*a4);
  v12 = 0LL;
  v9 = v7;
  v11 = 1;
  if ( (unsigned int)Size <= 8 )
    memcpy_0(&v12, v8, (unsigned int)Size);
  CrmStateMonitorStateSet((void **)a4, &v11, v9, 0);
  return 0LL;
}
