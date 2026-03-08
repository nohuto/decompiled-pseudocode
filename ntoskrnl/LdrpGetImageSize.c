/*
 * XREFs of LdrpGetImageSize @ 0x14035D8E8
 * Callers:
 *     LdrpAccessResourceData @ 0x1407E987C (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1407EA480 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x14035CF08 (LdrpKrnGetDataTableEntry.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 */

__int64 __fastcall LdrpGetImageSize(unsigned __int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // rax
  PVOID *DataTableEntry; // rax
  __int64 result; // rax
  __int16 v9; // cx

  v3 = 0;
  v4 = 0LL;
  v6 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( !v6 )
    goto LABEL_9;
  if ( (a1 & 1) == 0 )
  {
    v9 = *(_WORD *)(v6 + 24);
    if ( v9 == 267 || v9 == 523 )
    {
      v4 = *(unsigned int *)(v6 + 80);
      goto LABEL_5;
    }
LABEL_9:
    v3 = -1073741701;
    goto LABEL_5;
  }
  DataTableEntry = LdrpKrnGetDataTableEntry(a1);
  if ( DataTableEntry )
    v4 = *((unsigned int *)DataTableEntry + 16);
LABEL_5:
  result = v3;
  *a2 = v4;
  return result;
}
