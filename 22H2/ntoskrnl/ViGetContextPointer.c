/*
 * XREFs of ViGetContextPointer @ 0x140AC504C
 * Callers:
 *     VfInsertContext @ 0x1405CE4D0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CE660 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x140AC5104 (ViQueryObjectContext.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402906EC (IopAllocateIrpExtension.c)
 */

__int64 __fastcall ViGetContextPointer(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  _WORD *IrpExtension; // rax

  v2 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 312) + 104LL;
  v3 = a2 - 1;
  if ( !v3 )
    return *(_QWORD *)(a1 + 48) + 72LL;
  if ( v3 == 1 )
  {
    IrpExtension = IopAllocateIrpExtension(a1, 3);
    if ( IrpExtension )
      return (__int64)(IrpExtension + 4);
  }
  return v2;
}
