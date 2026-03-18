/*
 * XREFs of RtlpCopyLegacyContext @ 0x14030D95C
 * Callers:
 *     RtlpCopyExtendedContext @ 0x14030D2C0 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x1407709E0 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x14030D98C (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextX86 @ 0x1403631E4 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextArm @ 0x1405AAEC4 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1405AB024 (RtlpCopyLegacyContextArm64.c)
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
