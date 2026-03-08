/*
 * XREFs of IsCompatableDSDTRevision @ 0x1C004BE28
 * Callers:
 *     ReadField @ 0x1C0052AE0 (ReadField.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 *     Concat @ 0x1C0055F60 (Concat.c)
 *     CondRefOf @ 0x1C0056490 (CondRefOf.c)
 *     ExprOp1 @ 0x1C0056680 (ExprOp1.c)
 *     ExprOp2 @ 0x1C00569A0 (ExprOp2.c)
 *     LNot @ 0x1C0056DF0 (LNot.c)
 *     LogOp2 @ 0x1C00572D0 (LogOp2.c)
 *     LogOp2_32 @ 0x1C0057328 (LogOp2_32.c)
 *     LogOp2_64 @ 0x1C00576E4 (LogOp2_64.c)
 *     Match @ 0x1C0057800 (Match.c)
 *     Match_32 @ 0x1C00578E8 (Match_32.c)
 *     Match_64 @ 0x1C0057A00 (Match_64.c)
 *     OSInterface @ 0x1C0057DA0 (OSInterface.c)
 *     ProcessWait @ 0x1C0058AC0 (ProcessWait.c)
 *     ToString @ 0x1C0059450 (ToString.c)
 *     ConvertToBuffer @ 0x1C0059884 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0059B20 (ConvertToString.c)
 *     ParseAcquire @ 0x1C005A0F0 (ParseAcquire.c)
 *     ParseIntObj @ 0x1C005B3A0 (ParseIntObj.c)
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
