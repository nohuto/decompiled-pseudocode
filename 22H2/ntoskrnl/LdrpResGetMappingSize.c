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

int __fastcall LdrpResGetMappingSize(unsigned __int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  int result; // eax
  bool v8; // r14
  __int16 v9; // dx
  unsigned __int64 v10; // rdi
  PVOID *DataTableEntry; // rax
  __int128 MemoryInformation; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+50h] [rbp-48h]
  __int128 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF

  v15 = 0LL;
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
  result = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v15);
  if ( result >= 0 )
  {
    v9 = *(_WORD *)(v15 + 24);
    if ( v9 == 267 || v9 == 523 )
    {
      v10 = *(unsigned int *)(v15 + 80);
    }
    else
    {
      v10 = 0LL;
      result = -1073741701;
    }
    if ( result >= 0 )
    {
      if ( !v8 || !v10 )
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
                     (MEMORY_INFORMATION_CLASS)3,
                     &MemoryInformation,
                     0x30uLL,
                     0LL);
          if ( result >= 0 )
            v6 = v13;
        }
        if ( v6 || !v10 )
        {
LABEL_27:
          if ( result < 0 )
            return result;
          goto LABEL_28;
        }
        result = 0;
      }
      v6 = v10;
      goto LABEL_27;
    }
  }
  return result;
}
