/*
 * XREFs of NVMeDeRegisterThrottling @ 0x1C0014FC0
 * Callers:
 *     NVMeDisableThrottling @ 0x1C000EC7C (NVMeDisableThrottling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeDeRegisterThrottling(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax

  if ( a2 < 0 )
    return 3238002695LL;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 8LL * a2 + 4096);
  if ( !v6 )
    return 3238002695LL;
  result = StorPortExtendedFunction(1LL, a1, v6, a4);
  *(_QWORD *)(a1 + 8 * v5 + 4096) = 0LL;
  return result;
}
