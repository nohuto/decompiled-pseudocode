/*
 * XREFs of ViGetContextPointer @ 0x140A8362C
 * Callers:
 *     VfInsertContext @ 0x1405FE110 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405FE2E0 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x140A836FC (ViQueryObjectContext.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall ViGetContextPointer(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // edx
  int v6; // edx
  _WORD *IrpExtension; // rax

  v4 = 0LL;
  if ( !a2 )
    return *(_QWORD *)(a1 + 312) + 104LL;
  v5 = a2 - 1;
  if ( !v5 )
    return *(_QWORD *)(a1 + 48) + 72LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return a1 + 1536;
  }
  else
  {
    IrpExtension = IopAllocateIrpExtension(a1, 3, a3, a4);
    if ( IrpExtension )
      return (__int64)(IrpExtension + 4);
  }
  return v4;
}
