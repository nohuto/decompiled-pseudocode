/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x1403718CC
 * Callers:
 *     VfAvlReserveNode @ 0x140371840 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14037E688 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14037E744 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140353E60 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 */

__int64 __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && MmIsSessionAddress(*(_QWORD *)a2) )
    result = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
