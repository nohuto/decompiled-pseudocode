/*
 * XREFs of MiLockPagableSections @ 0x140B5F628
 * Callers:
 *     MiCancelPhase0Locking @ 0x140729E84 (MiCancelPhase0Locking.c)
 *     MiUnlockBootPageSections @ 0x140B5F47C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140B5F508 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     MmImageSectionPagable @ 0x14072A4B0 (MmImageSectionPagable.c)
 *     MiImagePagable @ 0x14072A7E0 (MiImagePagable.c)
 *     MmLockPagableDataSection @ 0x1407EBF70 (MmLockPagableDataSection.c)
 */

void __fastcall MiLockPagableSections(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  v2 = a1[6];
  if ( MiImagePagable(a1, v2) )
  {
    v4 = RtlImageNtHeader(v2);
    v5 = *(unsigned __int16 *)(v4 + 6);
    v6 = *(unsigned __int16 *)(v4 + 20) + v4 + 24;
    if ( *(_WORD *)(v4 + 6) )
    {
      do
      {
        if ( (unsigned int)MmImageSectionPagable(v6) )
        {
          if ( a2 )
            MmLockPagableDataSection((PVOID)(v2 + *(unsigned int *)(v6 + 12)));
          else
            MiLockPagableImageSection(v6, 0LL);
        }
        v6 += 40LL;
        --v5;
      }
      while ( v5 );
    }
  }
}
