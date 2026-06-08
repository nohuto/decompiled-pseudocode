/*
 * XREFs of PepIdleExecute @ 0x1C000F210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepIdleExecute(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v7 = 11LL * a3;
  if ( LOBYTE(a1[v7 + 18]) )
  {
    ((void (__fastcall *)(__int64 *, _QWORD))a1[v7 + 11])(&a1[v7 + 12], a5);
    return 0LL;
  }
  else
  {
    v9 = *a1;
    v10[0] = 0;
    v11 = a7;
    v10[1] = a3;
    v10[3] = a6;
    v10[2] = a4;
    result = PoFxProcessorNotification(v9, 5LL, v10);
    if ( (int)result >= 0 && v10[0] < 0 )
      return v10[0];
  }
  return result;
}
