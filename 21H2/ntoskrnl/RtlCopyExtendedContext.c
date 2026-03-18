/*
 * XREFs of RtlCopyExtendedContext @ 0x1405E7C00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x140294DD8 (RtlpCopyExtendedContext.c)
 */

__int64 __fastcall RtlCopyExtendedContext(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpCopyExtendedContext(1, a1, 0LL, a2, a3, 0LL);
}
