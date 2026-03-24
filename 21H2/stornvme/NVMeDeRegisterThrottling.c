/*
 * XREFs of NVMeDeRegisterThrottling @ 0x1C00142E4
 * Callers:
 *     NVMeDisableThrottling @ 0x1C000E930 (NVMeDisableThrottling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeDeRegisterThrottling(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 result; // rax

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 8LL * a2 + 3880);
  if ( !v6 )
    return 3238002695LL;
  result = StorPortExtendedFunction(1LL, a1, v6, a4);
  *(_QWORD *)(a1 + 8 * v4 + 3880) = 0LL;
  return result;
}
