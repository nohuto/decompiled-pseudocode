/*
 * XREFs of ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454
 * Callers:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18001D410 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180021EDC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18010A3F0 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Hide@CExcludeVisualReference@@QEAAXXZ @ 0x18012A46C (-Hide@CExcludeVisualReference@@QEAAXXZ.c)
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x18012DF18 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801B1F78 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Restore@CExcludeVisualReference@@UEAAXXZ @ 0x1801CA350 (-Restore@CExcludeVisualReference@@UEAAXXZ.c)
 *     ?Show@CExcludeVisualReference@@UEAAXXZ @ 0x1801CA390 (-Show@CExcludeVisualReference@@UEAAXXZ.c)
 *     CComposition::ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___ @ 0x1801E8D88 (CComposition--ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___.c)
 *     _lambda_f7805202518b118888e0b3d23c76c683_::operator() @ 0x1801E958C (_lambda_f7805202518b118888e0b3d23c76c683_--operator().c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180214AB4 (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z @ 0x180214C8C (-RemoveVisual@CVisualGroup@@IEAAXPEBVCVisual@@@Z.c)
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180214CF4 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CExcludeVisualReference::GetVisual(CExcludeVisualReference *this)
{
  __int64 v1; // rdx
  struct CVisual *result; // rax

  v1 = *((_QWORD *)this + 1);
  result = 0LL;
  if ( v1 )
    return *(struct CVisual **)(v1 + 16);
  return result;
}
