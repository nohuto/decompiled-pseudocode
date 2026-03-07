__int64 __fastcall VfMiscMmBuildMdlForNonPagedPool_Entry(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR v2; // r9
  __int64 v3; // r10

  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
  {
    result = MmDeterminePoolType(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL));
    if ( (_DWORD)result )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, v2, v3);
  }
  return result;
}
