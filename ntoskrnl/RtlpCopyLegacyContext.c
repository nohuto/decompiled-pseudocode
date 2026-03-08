/*
 * XREFs of RtlpCopyLegacyContext @ 0x14036519C
 * Callers:
 *     RtlpCopyExtendedContext @ 0x140364B00 (RtlpCopyExtendedContext.c)
 *     RtlCopyContext @ 0x1407EE220 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x1402F81A4 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x1403651CC (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x1405A8A14 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1405A8B74 (RtlpCopyLegacyContextArm64.c)
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
