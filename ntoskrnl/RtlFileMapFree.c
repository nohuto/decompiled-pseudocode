/*
 * XREFs of RtlFileMapFree @ 0x140303F60
 * Callers:
 *     AslpFileGetVersionBlock @ 0x1407A0528 (AslpFileGetVersionBlock.c)
 *     AslFileMappingDelete @ 0x1407A1D38 (AslFileMappingDelete.c)
 *     AslpFileGetChecksumAttributes @ 0x140A55198 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x140412850 (ZwUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall RtlFileMapFree(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx
  void *v5; // rdx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 40);
    if ( v2 )
      MmUnsecureVirtualMemory(v2);
    if ( *(_BYTE *)(a1 + 48) && *(_QWORD *)a1 )
      ZwClose(*(HANDLE *)a1);
    if ( *(_BYTE *)(a1 + 49) )
    {
      v4 = *(void **)(a1 + 8);
      if ( v4 )
        ZwClose(v4);
    }
    if ( *(_BYTE *)(a1 + 50) )
    {
      v5 = *(void **)(a1 + 24);
      if ( v5 )
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5);
    }
    result = 0LL;
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
