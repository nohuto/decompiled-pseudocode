/*
 * XREFs of ViAvlRaiseIrqlSafe @ 0x1402D8360
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1402D8234 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1402DB8D8 (VfAvlDeleteTreeNode.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140A9B1BC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140A9B230 (VfAvlEnumerateNodes.c)
 * Callees:
 *     <none>
 */

void __fastcall ViAvlRaiseIrqlSafe(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r11
  struct _KPRCB *CurrentPrcb; // rax

  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a1 + 9) |= 1u;
    *(_BYTE *)(a1 + 8) = CurrentIrql;
  }
}
