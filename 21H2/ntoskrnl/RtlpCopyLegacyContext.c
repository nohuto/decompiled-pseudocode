/*
 * XREFs of RtlpCopyLegacyContext @ 0x140275538
 * Callers:
 *     RtlCopyContext @ 0x1406480E8 (RtlCopyContext.c)
 *     KeCopyContextFromUmsContext @ 0x1408BE43C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x1408BE85C (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408BEADC (KeUpdatePrimaryThreadContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x140276DB0 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextX86 @ 0x1402BDAF8 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextArm @ 0x14058F544 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x14058F6A4 (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return RtlpCopyLegacyContextX86();
  if ( (a3 & 0x100000) != 0 )
    return RtlpCopyLegacyContextAmd64();
  if ( (a3 & 0x200000) != 0 )
    return RtlpCopyLegacyContextArm();
  if ( (a3 & 0x400000) != 0 )
    return RtlpCopyLegacyContextArm64();
  return result;
}
