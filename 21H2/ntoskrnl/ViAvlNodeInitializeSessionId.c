/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x140371D7C
 * Callers:
 *     VfAvlReserveNode @ 0x140371CF0 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14037EB38 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14037EBF4 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140349110 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
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
