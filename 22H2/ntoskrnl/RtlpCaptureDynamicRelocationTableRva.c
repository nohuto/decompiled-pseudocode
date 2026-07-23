/*
 * XREFs of RtlpCaptureDynamicRelocationTableRva @ 0x1403B69BC
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1403B6618 (RtlUpdateImportRelocationsInImage.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14058FDFC (RtlPerformRetpolineRelocationsOnImageEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14029D010 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075C6CC (LdrImageDirectoryEntryToLoadConfig.c)
 */

NTSTATUS __fastcall RtlpCaptureDynamicRelocationTableRva(PVOID BaseOfImage, ULONG64 Size, int *a3)
{
  unsigned int v3; // ebp
  __int64 Config; // rax
  __int64 v7; // rbx
  int v8; // esi
  NTSTATUS result; // eax
  int v10; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+20h] BYREF

  v3 = Size;
  OutHeaders = 0LL;
  Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  if ( !Config || *(_DWORD *)Config < 0xC8u )
    return -1073741637;
  if ( *(_DWORD *)Config < 0xE6u )
  {
    if ( *(_QWORD *)(Config + 192) )
    {
      v10 = *(_DWORD *)(Config + 192) - (_DWORD)BaseOfImage;
      goto LABEL_8;
    }
    return -1073741637;
  }
  v7 = *(unsigned __int16 *)(Config + 228);
  v8 = *(_DWORD *)(Config + 224);
  if ( !(_WORD)v7 )
    return -1073741637;
  result = RtlImageNtHeaderEx(0, BaseOfImage, v3, &OutHeaders);
  if ( result < 0 )
    return result;
  if ( (unsigned __int16)v7 > OutHeaders->FileHeader.NumberOfSections )
    return -1073741701;
  v10 = v8 + *(_DWORD *)((char *)OutHeaders + 40 * v7 + OutHeaders->FileHeader.SizeOfOptionalHeader - 4);
LABEL_8:
  *a3 = v10;
  return 0;
}
