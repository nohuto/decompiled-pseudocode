/*
 * XREFs of MmSectionToSectionObjectPointers @ 0x1408AC57E
 * Callers:
 *     IopIsFileOpenOrSection @ 0x1408A51B0 (IopIsFileOpenOrSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1402A22B4 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A23C0 (MiDereferenceControlAreaFile.c)
 */

__int64 __fastcall MmSectionToSectionObjectPointers(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx

  v1 = MiSectionControlArea(a1);
  v2 = v1;
  if ( !*(_QWORD *)(v1 + 64) )
    return 0LL;
  v3 = MiReferenceControlAreaFile(v1);
  v4 = *(_QWORD *)(v3 + 40);
  MiDereferenceControlAreaFile(v2, v3);
  return v4;
}
