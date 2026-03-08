/*
 * XREFs of RtlOpenImageFileOptionsKey @ 0x140707B60
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14077EE60 (RtlpOpenImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlOpenImageFileOptionsKey(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpOpenImageFileOptionsKeyEx(a1, a2, a3, a3);
}
