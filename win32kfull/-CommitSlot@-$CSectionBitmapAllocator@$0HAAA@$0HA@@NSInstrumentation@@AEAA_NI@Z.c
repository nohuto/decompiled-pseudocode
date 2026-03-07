char __fastcall NSInstrumentation::CSectionBitmapAllocator<28672,112>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  void *v5; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 < 7 )
  {
    v4 = a2 / 0x24;
    if ( v4 >= v3 )
    {
      v5 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
      if ( (int)MmCommitSessionMappedView(v5, 4096LL) < 0 )
        return 0;
      memset_0(v5, 0, 0x1000uLL);
      ++*(_DWORD *)(a1 + 36);
    }
  }
  return 1;
}
