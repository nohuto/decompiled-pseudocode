/*
 * XREFs of ExprOp2 @ 0x1C00212B0
 * Callers:
 *     <none>
 * Callees:
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     ExprOp2_32 @ 0x1C0069428 (ExprOp2_32.c)
 */

__int64 __fastcall ExprOp2(__int64 a1, _QWORD *a2)
{
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v5), v5 >= 2) )
    return ExprOp2_64(a1, a2);
  else
    return ExprOp2_32(a1, a2);
}
