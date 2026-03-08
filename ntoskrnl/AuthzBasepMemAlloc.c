/*
 * XREFs of AuthzBasepMemAlloc @ 0x140297BFC
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140297BBC (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1402FF8B0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A57120 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall AuthzBasepMemAlloc(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, a1, a3);
}
