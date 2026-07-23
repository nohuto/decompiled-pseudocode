/*
 * XREFs of ViGetContextPointer @ 0x1409C94D4
 * Callers:
 *     VfInsertContext @ 0x1405A0A80 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405A0C50 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x1409C95A4 (ViQueryObjectContext.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020DB80 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall ViGetContextPointer(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // edx
  _WORD *IrpExtension; // rax

  v2 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 312) + 104LL;
  v3 = a2 - 1;
  if ( !v3 )
    return *(_QWORD *)(a1 + 48) + 72LL;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return a1 + 1456;
  }
  else
  {
    IrpExtension = IopAllocateIrpExtension(a1, 3);
    if ( IrpExtension )
      return (__int64)(IrpExtension + 4);
  }
  return v2;
}
