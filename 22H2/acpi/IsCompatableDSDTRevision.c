/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C004BE48
 * Callers:
 *     ReadField @ 0x1C0052B00 (ReadField.c)
 *     WriteObject @ 0x1C00532C0 (WriteObject.c)
 *     Concat @ 0x1C0055F80 (Concat.c)
 *     CondRefOf @ 0x1C00564B0 (CondRefOf.c)
 *     ExprOp1 @ 0x1C00566A0 (ExprOp1.c)
 *     ExprOp2 @ 0x1C00569C0 (ExprOp2.c)
 *     LNot @ 0x1C0056E10 (LNot.c)
 *     LogOp2 @ 0x1C00572F0 (LogOp2.c)
 *     LogOp2_32 @ 0x1C0057348 (LogOp2_32.c)
 *     LogOp2_64 @ 0x1C0057704 (LogOp2_64.c)
 *     Match @ 0x1C0057820 (Match.c)
 *     Match_32 @ 0x1C0057908 (Match_32.c)
 *     Match_64 @ 0x1C0057A20 (Match_64.c)
 *     OSInterface @ 0x1C0057DC0 (OSInterface.c)
 *     ProcessWait @ 0x1C0058AE0 (ProcessWait.c)
 *     ToString @ 0x1C0059470 (ToString.c)
 *     ConvertToBuffer @ 0x1C00598A4 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0059B40 (ConvertToString.c)
 *     ParseAcquire @ 0x1C005A110 (ParseAcquire.c)
 *     ParseIntObj @ 0x1C005B3C0 (ParseIntObj.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

bool IsCompatableDSDTRevision()
{
  char v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( ghGetAcpiTableVersion )
  {
    ghGetAcpiTableVersion(1413763908LL, &v2);
    return v2 >= 2;
  }
  return v0;
}
