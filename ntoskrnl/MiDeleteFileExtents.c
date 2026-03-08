/*
 * XREFs of MiDeleteFileExtents @ 0x1406A7130
 * Callers:
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 * Callees:
 *     MiDeleteFileExtentList @ 0x140A31150 (MiDeleteFileExtentList.c)
 */

char __fastcall MiDeleteFileExtents(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 62) & 0xC;
    if ( (_BYTE)v1 == 8 )
    {
      v2 = *(_QWORD *)(a1 + 96);
      if ( (*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        LOBYTE(v1) = MiDeleteFileExtentList((PVOID)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0uLL));
        *(_QWORD *)(v2 + 48) = 0LL;
      }
    }
  }
  return v1;
}
