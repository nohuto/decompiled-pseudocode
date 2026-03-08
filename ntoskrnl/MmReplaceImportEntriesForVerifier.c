/*
 * XREFs of MmReplaceImportEntriesForVerifier @ 0x140A2A95C
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140AE4F80 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiEnumerateBasePatches @ 0x1407F7420 (MiEnumerateBasePatches.c)
 */

__int64 __fastcall MmReplaceImportEntriesForVerifier(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  int *v4; // rbx
  __int64 v6; // rsi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = a3;
  v4 = a2;
  LOBYTE(a2) = 1;
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), (int)a2, 12, (int)&v8);
  if ( !v6 || v8 < 8 )
    return 3221225659LL;
  if ( (_DWORD)v3 )
  {
    do
    {
      *((_QWORD *)v4 + 2) = *(_QWORD *)(v6 + 8LL * *v4);
      MiEnumerateBasePatches(a1, (unsigned int (__fastcall *)(_QWORD *, __int64))MiReplacePatchImportEntry, (__int64)v4);
      MiReplaceImportEntry(v6 + 8LL * *v4, *((_QWORD *)v4 + 1));
      v4 += 6;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}
