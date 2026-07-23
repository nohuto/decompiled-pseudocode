/*
 * XREFs of RtlpCopyLegacyContext @ 0x1402634D8
 * Callers:
 *     RtlCopyContext @ 0x14063CED8 (RtlCopyContext.c)
 *     KeCopyContextFromUmsContext @ 0x1408BE59C (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x1408BE9BC (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x1408BEC3C (KeUpdatePrimaryThreadContext.c)
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x14023C138 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x140264D50 (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x14058F774 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x14058F8D4 (RtlpCopyLegacyContextArm64.c)
 */

void __fastcall RtlpCopyLegacyContext(char a1, __int64 a2, int a3, __int64 a4)
{
  if ( (a3 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(a1, a2, a3, a4);
  }
  else if ( (a3 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64();
  }
  else if ( (a3 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm();
  }
  else if ( (a3 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64();
  }
}
