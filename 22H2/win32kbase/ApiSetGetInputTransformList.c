/*
 * XREFs of ApiSetGetInputTransformList @ 0x1C0207BE8
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CB6B4 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetGetInputTransformList(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v9; // r9

  v5 = 0;
  if ( qword_1C0296950 && (int)qword_1C0296950() >= 0 && qword_1C0296958 )
  {
    LOBYTE(v9) = 1;
    return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))qword_1C0296958)(
                           a1,
                           a2,
                           a3,
                           v9,
                           a5);
  }
  return v5;
}
