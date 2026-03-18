/*
 * XREFs of VfMiscMmBuildMdlForNonPagedPool_Entry @ 0x140AA44A0
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x140367A44 (MmDeterminePoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfMiscMmBuildMdlForNonPagedPool_Entry(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  ULONG_PTR v3; // r9

  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
  {
    result = MmDeterminePoolType(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL));
    if ( (_DWORD)result )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, v3, v2);
  }
  return result;
}
