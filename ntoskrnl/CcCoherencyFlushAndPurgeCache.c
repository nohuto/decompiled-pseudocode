void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  bool v5; // r12
  __int64 v6; // rbp
  ULONG v10; // edi
  NTSTATUS v11; // edi

  v5 = 0;
  v6 = Length;
  v10 = (Flags >> 1) & 1 | 2;
  if ( (Flags & 1) == 0 )
  {
    v10 = (Flags >> 1) & 1;
LABEL_3:
    v11 = MmTrimSection(SectionObjectPointer, FileOffset, v6, v10);
    goto LABEL_4;
  }
  if ( (Flags & 4) == 0 && !(unsigned __int8)MmOnlySystemCacheViewsPresent(SectionObjectPointer) )
    goto LABEL_3;
  v11 = 0;
LABEL_4:
  IoStatus->Status = v11;
  CcFlushCachePriv(SectionObjectPointer, (__int64)FileOffset, v6, 0LL, 0, (__int128 *)&IoStatus->0, 0LL);
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
      v5 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, v6, 4u) == 0;
    if ( IoStatus->Status >= 0 && (v11 == 277 || v5) )
      IoStatus->Status = 277;
  }
}
