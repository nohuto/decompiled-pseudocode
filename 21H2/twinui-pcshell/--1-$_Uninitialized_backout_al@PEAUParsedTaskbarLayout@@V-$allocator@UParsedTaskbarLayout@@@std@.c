/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x180210BF0
 * Callers:
 *     _std::_Uninitialized_move_ParsedPenWorkspaceLayout___ParsedPenWorkspaceLayout___std::allocator_ParsedPenWorkspaceLayout____::_1_::dtor$0 @ 0x18021087E (_std--_Uninitialized_move_ParsedPenWorkspaceLayout___ParsedPenWorkspaceLayout___std--allocator_P.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<ParsedTaskbarLayout *>::~_Uninitialized_backout_al<ParsedTaskbarLayout *>(
        __int64 *a1)
{
  std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*a1, a1[1]);
}
