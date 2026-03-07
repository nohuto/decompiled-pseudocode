unsigned __int64 MiInitializeDummyPages()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 DummyPage; // rax
  ULONG_PTR v4; // rdi
  unsigned __int64 ValidPte; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 result; // rax

  MiAllocateDummyPage();
  v0 = MiSwizzleInvalidPte(32LL);
  *(_QWORD *)(v1 + 16) = v0;
  qword_140C69390 = 0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4);
  MiFillPhysicalPages(qword_140C69390, qword_140C69390, 0LL);
  qword_140C69370 = MiAllocateDummyPage();
  *(_QWORD *)(qword_140C69370 + 16) = v0;
  qword_140C69378 = 0xAAAAAAAAAAAAAAABuLL * ((qword_140C69370 + 0x220000000000LL) >> 4);
  MiFillPhysicalPages(0xAAAAAAAAAAAAAAABuLL * ((qword_140C69370 + 0x220000000000LL) >> 4), v2, 0xFFFFFFFFFFFFFFFFuLL);
  DummyPage = MiAllocateDummyPage();
  *(_QWORD *)(DummyPage + 16) = v0;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((DummyPage + 0x220000000000LL) >> 4);
  qword_140C693F8 = v4;
  ValidPte = MiMakeValidPte(
               (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               qword_140C69390,
               1);
  MiFillPhysicalPages(v4, v6, ValidPte);
  qword_140C69400 = ((qword_140C693F8 & 0xFFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                                   (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                                 - 0x98000000000LL,
                                                                   qword_140C69390,
                                                                   134217729) & 0xFFF0000000000FFFuLL;
  v7 = MiAllocateDummyPage();
  *(_QWORD *)(v7 + 16) = v0;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4);
  qword_140C69408 = v8;
  v9 = MiMakeValidPte((((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, qword_140C69378, 1);
  MiFillPhysicalPages(v8, v10, v9);
  result = ((qword_140C69408 & 0xFFFFFFFFFFLL) << 12) | MiMakeValidPte(
                                                          (((unsigned __int64)MmPfnDatabase >> 9) & 0x7FFFFFFFF8LL)
                                                        - 0x98000000000LL,
                                                          qword_140C69378,
                                                          134217729) & 0xFFF0000000000FFFuLL;
  qword_140C69410 = result;
  return result;
}
