/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x14030399C
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlReserveNode @ 0x140303910 (VfAvlReserveNode.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 */

__int64 __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && (unsigned __int64)(*(_QWORD *)a2 - qword_140C65668) < 0x8000000000LL )
    result = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
