/*
 * XREFs of MiLockPagableSections @ 0x140A545BC
 * Callers:
 *     MiCancelPhase0Locking @ 0x1406FE47C (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x140A544E0 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140A5456C (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14029CB80 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     MmImageSectionPagable @ 0x1406FE3BC (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x1406FE41C (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x1406FE5A0 (MmLockPagableDataSection.c)
 */

void __fastcall MiLockPagableSections(__int64 a1, int a2)
{
  char *v2; // rsi
  PIMAGE_NT_HEADERS v4; // rax
  int NumberOfSections; // edi
  __int64 v6; // rbx

  v2 = *(char **)(a1 + 48);
  if ( MiImagePagable(a1, (unsigned __int64)v2) )
  {
    v4 = RtlImageNtHeader(v2);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v6 = (__int64)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( (unsigned int)MmImageSectionPagable(v6) )
        {
          if ( a2 == 1 )
            MmLockPagableDataSection(&v2[*(unsigned int *)(v6 + 12)]);
          else
            MiLockPagableImageSection(v6, 0LL);
        }
        v6 += 40LL;
        --NumberOfSections;
      }
      while ( NumberOfSections );
    }
  }
}
