/*
 * XREFs of PATHOBJ_bPolyBezierTo @ 0x1C0181A00
 * Callers:
 *     <none>
 * Callees:
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEBV?$umptr_r@U_POINTL@@@@K@Z @ 0x1C0180FE0 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@AEBV-$umptr_r@U_POINTL@@@@K@Z.c)
 */

BOOL __stdcall PATHOBJ_bPolyBezierTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+38h] [rbp-10h]

  v4[2] = 0LL;
  v4[0] = pptfx;
  v4[1] = cptfx;
  v5 = 0;
  return EPATHOBJ::bPolyBezierTo((__int64)ppo, 0LL, (__int64)v4, cptfx);
}
