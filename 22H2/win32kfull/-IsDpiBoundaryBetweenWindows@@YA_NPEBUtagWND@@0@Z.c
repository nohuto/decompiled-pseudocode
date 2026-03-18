/*
 * XREFs of ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C003120C
 * Callers:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0033750 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C008E62C (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     OffsetChildren @ 0x1C00F147C (OffsetChildren.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDpiBoundaryBetweenWindows(const struct tagWND *a1, const struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v4; // eax

  v2 = *((_QWORD *)a1 + 5);
  v3 = *((_QWORD *)a2 + 5);
  v4 = *(_DWORD *)(v2 + 288);
  if ( *(_QWORD *)(v2 + 256) == *(_QWORD *)(v3 + 256) )
    return (((unsigned __int16)(v4 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v3 + 288) >> 8)) & 0x1FF) != 0;
  return (v4 & 0xF) != 2 || (*(_DWORD *)(v3 + 288) & 0xF) != 2;
}
