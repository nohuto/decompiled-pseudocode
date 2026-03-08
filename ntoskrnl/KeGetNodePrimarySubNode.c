/*
 * XREFs of KeGetNodePrimarySubNode @ 0x1402AE8B4
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 *     KeQueryNodeActiveAffinity @ 0x1402AE860 (KeQueryNodeActiveAffinity.c)
 *     KiComputeNumaCosts @ 0x140B727C4 (KiComputeNumaCosts.c)
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
