__int64 __fastcall MiInitializeImageExtents(__int64 a1)
{
  __int64 result; // rax
  int FileExtents; // esi
  ULONG_PTR i; // rdi
  __int64 CommittedPages; // rdi

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) == 0
    || (result = MiCreatePerSessionProtos((_QWORD *)a1, 0xFFFFFFFF), (int)result >= 0) )
  {
    FileExtents = 0;
    for ( i = a1 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      FileExtents = MiAllocateFileExtents(i, 0, *(_QWORD *)(i + 8), *(_DWORD *)(i + 44), 0, 0xFFFFFFFF);
      if ( FileExtents < 0 )
      {
        CommittedPages = MiGetCommittedPages((_QWORD *)a1);
        if ( CommittedPages )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = 0LL;
        MiDeleteSegmentPages((__int64 *)a1);
        if ( CommittedPages )
          *(_QWORD *)(*(_QWORD *)a1 + 16LL) = CommittedPages;
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
      MiDereferencePerSessionProtos((__int64 *)a1, 0xFFFFFFFF);
    return (unsigned int)FileExtents;
  }
  return result;
}
