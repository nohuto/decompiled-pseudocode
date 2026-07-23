/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CA82C
 * Callers:
 *     IopLoadDriverImage @ 0x140399778 (IopLoadDriverImage.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1402BC770 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_2(__int64 a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierEnabled
    || (VfRuleClasses & 0xFFAFFFFF) == 0 && (VfRuleClasses & 0x200000000LL) == 0 && (VfRuleClasses & 0x400000000LL) == 0 )
  {
    return ExAllocatePoolWithQuotaTag(PagedPool, a2, 0x20206F49u);
  }
  result = ExAllocatePoolWithTagPriority(
             PagedPool,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
