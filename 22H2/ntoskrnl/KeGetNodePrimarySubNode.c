/*
 * XREFs of KeGetNodePrimarySubNode @ 0x1403058D4
 * Callers:
 *     KeQueryNodeActiveAffinity @ 0x140305880 (KeQueryNodeActiveAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140305E80 (KeQueryLogicalProcessorRelationship.c)
 *     KiComputeNumaCosts @ 0x140B76CB4 (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetNodePrimarySubNode(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
    return *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(a1 + 12) + 24);
  else
    return 0LL;
}
