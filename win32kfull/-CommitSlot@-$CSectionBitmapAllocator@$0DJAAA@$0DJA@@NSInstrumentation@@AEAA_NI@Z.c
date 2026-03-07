char __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // edx
  void *v6; // rdi

  v2 = *(_DWORD *)(a1 + 36);
  v4 = a2 >> 2;
  if ( v4 < v2 || v2 >= 0x39 )
    return 1;
  v6 = (void *)((v4 << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
  if ( (int)MmCommitSessionMappedView(v6, 4096LL) >= 0 )
  {
    memset_0(v6, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
    return 1;
  }
  return 0;
}
