/*
 * XREFs of LdrpResGetMappingSize @ 0x1407EB0A8
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x14035DC3C (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x1407928C4 (LdrResGetRCConfig.c)
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 * Callees:
 *     LdrpKrnGetDataTableEntry @ 0x14035CF08 (LdrpKrnGetDataTableEntry.c)
 *     RtlImageNtHeaderEx @ 0x14035E850 (RtlImageNtHeaderEx.c)
 *     Feature_1875039550__private_IsEnabledDeviceUsage @ 0x14040BBB4 (Feature_1875039550__private_IsEnabledDeviceUsage.c)
 *     ZwQueryVirtualMemory @ 0x140412770 (ZwQueryVirtualMemory.c)
 */

int __fastcall LdrpResGetMappingSize(unsigned __int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  int result; // eax
  bool v9; // r15
  __int16 v10; // dx
  unsigned __int64 v11; // rdi
  PVOID *DataTableEntry; // rax
  __int128 MemoryInformation; // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+A0h] [rbp+8h] BYREF

  v16 = 0LL;
  MemoryInformation = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !a1 || !a2 )
    return -1073741811;
  v6 = 0LL;
  if ( (unsigned int)Feature_1875039550__private_IsEnabledDeviceUsage() && (a3 & 0x80000) != 0 )
  {
    v7 = *a2;
LABEL_6:
    result = 0;
LABEL_30:
    if ( v6 && v6 < v7 )
      return -1073741793;
    *a2 = v7;
    return result;
  }
  if ( (a3 & 0x20000) != 0 )
    v6 = *a2;
  *a2 = 0LL;
  v7 = 0LL;
  v9 = 0;
  if ( (a3 & 0x100) != 0 )
    v9 = (a1 & 1) == 0;
  result = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v16);
  if ( result >= 0 )
  {
    v10 = *(_WORD *)(v16 + 24);
    if ( v10 == 267 || v10 == 523 )
    {
      v11 = *(unsigned int *)(v16 + 80);
    }
    else
    {
      v11 = 0LL;
      result = -1073741701;
    }
    if ( result >= 0 )
    {
      if ( v9 && v11 )
      {
        v7 = v11;
        goto LABEL_6;
      }
      DataTableEntry = LdrpKrnGetDataTableEntry(a1);
      if ( DataTableEntry )
        v7 = *((unsigned int *)DataTableEntry + 16);
      if ( v7 )
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
          v7 = v14;
      }
      if ( !v7 && v11 )
      {
        v7 = v11;
        result = 0;
      }
      if ( result >= 0 )
        goto LABEL_30;
    }
  }
  return result;
}
