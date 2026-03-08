/*
 * XREFs of AslpFilePartialViewFree @ 0x140A570D4
 * Callers:
 *     AslpFileLargeMapDelete @ 0x140A57074 (AslpFileLargeMapDelete.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x140412850 (ZwUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AslpFilePartialViewFree(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
    {
      MmUnsecureVirtualMemory(v2);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    if ( *(_QWORD *)a1 )
    {
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)a1);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}
