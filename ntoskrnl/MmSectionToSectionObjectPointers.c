/*
 * XREFs of MmSectionToSectionObjectPointers @ 0x1408A770E
 * Callers:
 *     IopIsFileOpenOrSection @ 0x1408A0330 (IopIsFileOpenOrSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
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
