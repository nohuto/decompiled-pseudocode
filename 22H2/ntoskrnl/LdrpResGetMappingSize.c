/*
 * XREFs of LdrpResGetMappingSize @ 0x1406710B0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x140300848 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x140670CE0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x14078BB7C (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14029D010 (RtlImageNtHeaderEx.c)
 *     LdrpKrnGetDataTableEntry @ 0x1403018A0 (LdrpKrnGetDataTableEntry.c)
 *     ZwQueryVirtualMemory @ 0x1403F9E80 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpResGetMappingSize(unsigned __int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  bool v8; // r14
  unsigned __int16 Magic; // dx
  unsigned __int64 SizeOfImage; // rdi
  PVOID *DataTableEntry; // rax
  __int128 MemoryInformation; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+50h] [rbp-48h]
  __int128 v14; // [rsp+60h] [rbp-38h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+A0h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  MemoryInformation = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !a1 || !a2 )
    return -1073741811;
  v5 = 0LL;
  if ( (a3 & 0x80000) != 0 )
  {
    v6 = *a2;
    result = 0;
LABEL_28:
    if ( v5 && v5 < v6 )
      return -1073741793;
    *a2 = v6;
    return result;
  }
  if ( (a3 & 0x20000) != 0 )
    v5 = *a2;
  *a2 = 0LL;
  v6 = 0LL;
  v8 = 0;
  if ( (a3 & 0x100) != 0 )
    v8 = (a1 & 1) == 0;
  result = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  if ( result >= 0 )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
    }
    else
    {
      SizeOfImage = 0LL;
      result = -1073741701;
    }
    if ( result >= 0 )
    {
      if ( !v8 || !SizeOfImage )
      {
        DataTableEntry = LdrpKrnGetDataTableEntry(a1);
        if ( DataTableEntry )
          v6 = *((unsigned int *)DataTableEntry + 16);
        if ( v6 )
        {
          result = 0;
        }
        else
        {
          result = ZwQueryVirtualMemory(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
                     MemoryRegionInformation,
                     &MemoryInformation,
                     0x30uLL,
                     0LL);
          if ( result >= 0 )
            v6 = v13;
        }
        if ( v6 || !SizeOfImage )
        {
LABEL_27:
          if ( result < 0 )
            return result;
          goto LABEL_28;
        }
        result = 0;
      }
      v6 = SizeOfImage;
      goto LABEL_27;
    }
  }
  return result;
}
