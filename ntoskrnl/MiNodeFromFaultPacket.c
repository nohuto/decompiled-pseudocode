/*
 * XREFs of MiNodeFromFaultPacket @ 0x14028B000
 * Callers:
 *     MiMigratePfn @ 0x140272370 (MiMigratePfn.c)
 *     MiComputeFaultNode @ 0x14028AE90 (MiComputeFaultNode.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFromFaultPacket(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (*(_QWORD *)(a1 + 16) & 1) != 0 && (*(_BYTE *)v1 == 2 || *(_BYTE *)v1 == 7 || ((*(_BYTE *)v1 - 4) & 0xFB) == 0) )
    return *(unsigned int *)(v1 + 40);
  else
    return 0LL;
}
